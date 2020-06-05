
/**
    (1) To do: Write proper conditional compilation directives.

Conditional compilation directives are “#ifdef”, “#ifndef”,
“#define”, “#endif” etc. Use them properly to make sure
that this header file will be included only once by
the preprocessor.

**/
#ifndef CALCULATOR_TEMPLATE_H
#define CALCULATOR_TEMPLATE_H
#include <iostream>
#include <cstdlib>

using namespace std;

template <class T>
class Calculator{

private:
    T num1;
    T num2;
    T result;


public:
    /**
        (2) To do : declare a default constructor here
    Default constructors are used when users do not provide
    enough information to initiate an object. In default constructor
    you can set default values for the object. Only write
    the declaration part here.
    **/
    Calculator(){
        cout<< "Nothing"<<endl;
    };
    // Constructor
    Calculator(T v1, T v2) ;

    // member function declarations.
    T add();   // this function adds num1 and num2
    T subtract(); // this function subtracts num2 from num1
    T multiply(); // this function multiplys num1 and num2
    T divide();  // This function do num1/num2.
    void display(); // this function displays the variable 'result'.



}; // Calculator class ends



#include "calculator.cpp"


/**
    (3) To do: Write proper conditional compilation directives.

Conditional compilation directives are “#ifdef”, “#ifndef”,
“#define”, “#endif” etc. Use them properly to make sure
that this header file will be included only once by
the preprocessor.

**/


#endif