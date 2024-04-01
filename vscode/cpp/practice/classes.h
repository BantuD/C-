#include <cstdio>

namespace MyClasses
{
    class Parent1
    {
        public:
            virtual void displayNames()=0;

    };

    class Parent2{

        public:
        virtual void displayAge()=0;
    };

    class Parent3{

        public:
        virtual void displayAdd()=0;

    };

    class Child1 : public Parent1{
        public:
        void displayNames(){
            printf("\nmy name is: child-1\n");

        }
    };

    class Child2 : public Parent2,public Parent1{
        public:
        void displayNames(){
            printf("\nmy name is: child-2\n");

        }

        void displayAge(){
            printf("I'm Child-2 my age is: 28");
        }
    };
    
}

