
#include <iostream>
#include <string.h>
#include "calculator_template.h"

using namespace std;

template <class T>
Calculator<T>:: Calculator(T v1, T v2) {
    num1 = v1;
    num2 = v2;
}

template <class T>
 T Calculator<T> ::add(){
   result = num1 +num2;
   return result;
}

template <class T>
T Calculator<T>::subtract(){
    result =num2-num1;
    return result;
}

template <class T>
T Calculator<T> ::multiply() {
    result= num1*num2;
    return result;
}

template<class T>
T Calculator<T> :: divide(){
    result = num1/num2;
    return result;
}

template <class T>
void Calculator<T>::display(){
    cout << "The reult is : " << result<< endl;
}
/*
template <class T>
Calculator<T> ::add(){
    int num1,num2;
    result =num1+num2;
    return result;
}

template <class T>
Calculator<T>  subtract(){
    result =num2-num1;
    return result;
}


template <class T>
Calculator<T> multiply() {
    result= num1*num2;
    return result;
}

template<class T>
Calculator<T> divide(){
    result = num1/num2;
    return result;
}


template <class T>
void Calculator<T>::display(){
cout << "The reult is : " << result;
}*/