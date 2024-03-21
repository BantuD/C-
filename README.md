* 19-03-2024:****************************
 Create hello.cpp and converted it into assembly code with commands (cpp to assembly) and tried to compile but it says puts not found when we link it with system.o file

  
*20-03-2024:********************************** 

>>>>>>Conditional Statements and LOOPS>>>>>>>>>

1. Used condition statements if else with the help of banner.cpp and used switches with the help of birthday.cpp

2. There are two ways of doing branching in c++ i) if else ii) switches
   switch cases are also slightly faster then if else

3. Something which go again and again is called iteration

4. Created count digit with 2 different algorithms i) div ii) mul

5. whenever you declare a variable locally it stores it into the memory but the memory is slow so here you can use `register` keyword before datatype it will put it into processor's register but You can not write the address of the register variable because registers don't have addresses 
Note: C++ does not recomend to avoid big names for variables but avoid repetation of that variable later 

-> always use ++num instead of num++ because it is faster and does not gives unwanted effects on the programs 

->  ++value (pre increment operator): 3 times faster than post increment operator

-> value++ (post increment operator): it slows the program when converted into assembly code try to void it and generates long code in .S  loop will run 3 times slower


>>>>>>>>>>>>>>>>>FUNCTIONS>>>>>>>>>>>>>>>>>>>

Perameter and Argument:
function(int age)
function(22)
age is peramater and 22 is the argument
_________________________________________________

Ternary Operator: 
float rate = n < 10 ? 0.80 : 0.75;

__________________________________________________
(-) is unary operator as well as binary operator
(&) unary operator as well as binary
(+) only unary operator
(?) ternary operator 

Q. Which one is fater ternary operator or if else
Ans:  it is same
-> You always have to declare the function before calling it

-> if you pass less arguments than the function want it will give `too few arguments` error

->if you pass more arguments than the function want it will give you `too many arguments` error


-> its stupidity to declare the function without writing the statements of it this is called forward declaration (KM Hussain not recommneds it)



*21-03-2024:**********************************************
i>Functions: 
used `pow()` 
ii> function overloading:
iii> Name mangling : 
iv> objdump a.out
v> called a function which is written in assembly
vi> Exception handling: 
vii> creating .o file of .cpp
viii> default value parameter

*Pending move gcd assembly code into the folder and try to compile it with compute function


