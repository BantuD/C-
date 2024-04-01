class SignBoard{
    public:
        float virtual Area() const= 0;
        float Price() const{
            return Area() * 1.25;
        }
    private:
        int id;
};

class RectangularBoard : public SignBoard{
    private:
        float length;
        float breadth;
    public:
        RectangularBoard(float l, float b){
            length = l;
            breadth = b;
        }
        float Area() const{
            return length * breadth;
        }
};

class CircularBoard : public SignBoard{
    private:
        float diameter;
    public:
        CircularBoard(float d){
            diameter = d;
        }
        float Area() const{
            return 3.14 * diameter;
        }
};

class DiscoBoard : public RectangularBoard, public CircularBoard{
    public:
        DiscoBoard(float l, float b) : RectangularBoard(l, b), CircularBoard(b){

        }
        float Area() const{
            return RectangularBoard::Area() + CircularBoard::Area();
        }
};