class programtest {
    public static void main(String[] args) {
        stack<String> s1 = new stack<String>();
        s1.push("Monday");
        s1.push("Tuesday");
        s1.push("Wednesday");
        s1.push("Thursday");
        s1.push("Friday");
        
        while(!s1.empty){
            System.out.println("The Days are: " + s1.pop());
        }
    }
}
