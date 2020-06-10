#include <iostream>
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

#define ARRAY_MAX_SIZE 100000 // Maximum allowable size of the prime array




/* To Do 3:
    Implement the prime generator function. All the arguments in this function are passed by reference.
    A list of arguments can be : start_point, end_point, size, prime_array
    This function will generate all the prime numbers between the start_point and end_point.
    It stores them in the prime_array.
    Because prime_array is passed by reference, any modification on prime_array in this can function,
    will be visible to main function.
*/
void prime_generator(int&start_point,int&end_point, int (&prime_array)[ARRAY_MAX_SIZE]){
    int index=0;
    int prime=0;
    for(start_point; start_point<= end_point; start_point++){
        if(start_point<=1) continue;

        for(int i =2; i<=start_point/2;i++){
                if(start_point%i==0){
                prime=1;
                break;
            }else{
                    prime=0;
                }
        }
        if(prime==0){
                prime_array[index]=start_point;
                index++;
        }
    }
}




int main(int argc, char **argv){

        int start_point; // starting point to generate primes
        int end_point;  // Generate all the primes untill this end point
        int prime_array[ARRAY_MAX_SIZE]; // this is the array where you have to store the prime numbers.
        /*  cout << "enter two number: " <<endl;
          cin>> start_point;
          cin>>end_point;*/
        /* This program takes only two arguments.  This portion of the code is to check that.
            if you provide more than 2 arguments, it prints an error and exit.
            otherwise, it converts the string arguments into integer.
        */
        if (argc < 3 || argc > 3){
            printf("Enter 2 arguments only eg.\"filename start end\"");
            return 0;
        }
        else {
            // Converting string type to integer type
            // using function "atoi( argument)"
            start_point = atoi(argv[1]);
            end_point = atoi(argv[2]);
        }



        // To Do 1: Check if start_point and end_point are positive or not
        // if any of them are negative:  print an error message and exit the program.
        if(start_point<0|| end_point<0){
            printf("Error, Negetive Number\n");
            return -1;
        }


        /* To Do 2: Check whether the start_point is smallar than the end_point
            if the start_point is greater than the end_point : print an error message and exit the program.
        */
        if(start_point>end_point) {
            printf("Error, start_point is greater than the end_point\n");
            return -1;
        }

        int size = 0;   // actuall size of the prime_array. it is initialized with zero,
        // you have to update it in the code


        // To Do 4: make a prime_generator function call
        prime_generator(start_point,end_point,prime_array);


        /* To Do 5:  printing the prime array in to the console : the format of prining is:
        1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097
    */
        for(int j=0; prime_array[j]!=0;j++){
            cout<<prime_array[j]<<", ";
        }
        /* To Do 6:  Now write these prime numbers using same format into a file named : prime.csv
        */

        return 1;
}

