/** 
    To do 1: Include all necessary files 
**/
#include "calculator_template.h"
#include <iostream>
#include <iomanip>
 using namespace  std;
int main()
{
    Calculator<int> int_calculator(34, 100);
    Calculator<float> float_Calculator(45.33, 89.67);
    
    std::cout << "Int results:" << std::endl;

    // To do 2: perform addition on int_calculator
    // To do 3: display the result
    int_calculator.add();
    int_calculator.display();

    std::cout << std::endl << "Float results:" << std::endl;


    // To do 4: perform subtraction on float_calculator
    // To do 5: display the result
    float_Calculator.subtract();
    float_Calculator.display();
    return 0;
}