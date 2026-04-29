/*
 * File: sinfunction.c
 * Author: Ali Asghar
 * Description:
 *     This program uses standard input/output and mathematical functions
 *     to perform calculations for sine function calculations.
 */
#include <stdio.h>      // for input and outputs
#include <math.h>       // for math functions

/*
 * Function: calculatesinvalue
 * -----------------------
 * takes a float value and calculates sine value in float
 *
 * Parameter:
 *   value - float input value
 *
 * Returns:
 *   Nothing as function is void
 */
void calculatesinvalue(float value) {
   
    float sine_value = 0.0;     //initializing the output value as float
    sine_value = sin(value);    //using sine function for calculation
    printf("Sine value at %f is %f\n", value, sine_value);        //printing output for user
}

int main(void){
    float value = 0.0;  //initializing the value to be used as sine function input as float for precision
    printf("Enter value in range 0.0 - 1.0:\n");       // providing limit range of inputs
    scanf("%f", &value);        //scanning user input
    
    if (value >0 && value < 1) {      //pre-check of range
        calculatesinvalue(value);       //calling the function
    }
    else {

        printf("Value is out of range\n");    //printing in case of input is out of range 
    }
}

