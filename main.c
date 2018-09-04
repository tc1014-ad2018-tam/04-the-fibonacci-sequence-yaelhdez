//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

//WARNING: This program doesn't work with c99, c99 doesn't accept how my function works.

#include <stdio.h>

int main() { //Main Function
    int limit; //Declaration of the variable "Limit", this variable will control the loop "for"

    printf("Give me the limit of the succession: \n");
    scanf("%d",&limit); //Variable "Limit" Request

    for(int i=0; i<limit; i++){ //Loop for that starts on 0 , ends up to "limit", and works 1 by 1
        printf("%i, ",fibo(i)); //Output that works with the Fibonacci recursive function.
        //"i" gives a value to "n", value that will be evaluate on the "fibo" function.
    }
    return 0;
}

int fibo (int n){  //Fibonacci Recursive Function
    if(n==0 || n==1){ //if the value of n is 0 or 1, the program are going to take this way
        return n; //the return of the function on this way
    }
    else{ //if the "if" isn´t true, the program are going to take this way
        return(fibo(n-1)+fibo(n-2)); //Recursive Operation and the return of the function on this way
    }
}