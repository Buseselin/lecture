#include <stdio.h>


int factorial(int number);

int main(){
    int factorial_5 = factorial(5);
    printf("Factorial %d", factorial_5);


    return 0;

}

int factorial(int number){
    if(number < 0){
        return 0;
    }
    if (number == 0){
        return 1;
     }
    int result = 1;
    for (int i = 1; i <= number;i++){
        result = result * i; 
        }                 /*factorial for */

    }




