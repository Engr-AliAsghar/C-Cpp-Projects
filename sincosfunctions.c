/*
Date : 05.05.2026
Craeted by : Engr. Ali
Description : This code contains the sine anc cosine functions 
with the range (0,1) excluding the boundary condions (word mentioned is between)
*/

#include <stdio.h>  //standard input/output lib
#include <math.h>   //math lib for sine and cosine functions

/*
This function takes floating value as input to calculate the cos function
returning the flaoting value of cos at that floating value
*/

float CalculateCosValue(float value) {

    float cosvalue = cos(value);    //calculation the cos value
    return cosvalue;    //returning the cos value for further use
}

/*
This function takes floating value as input to calculate the cos function
returning the flaoting value of cos at that floating value
*/

float CalculateSineValue(float value){

    float sinvalue = sin(value);    //calculating the sine value
    return sinvalue ; //returning the value for further usage
}   

int main(void) {
    printf("+++++++++++++Start of Execution+++++++++++++\n"); //Adding readability at console 
    //double sin, cos;    //initializing the sine and cos with double values
    float i;  //initializing float value to be taken as input for sine and consine functions
    printf("i ------------ Sine ------------ Cosine\n");    //printing table header
    for (i = 0.1 ; i < 1.0 ; i+= 0.1 ){   //starting for loop with step size of 0.1 within open range (0,1)
        printf("%f         %f        %f\n",i,CalculateSineValue(i),CalculateCosValue(i)); //using the long flaot to same-sized formatting for cos and sin calculation
    }
    printf("+++++++++++++End of Execution+++++++++++++\n");   //Adding readability at console
}