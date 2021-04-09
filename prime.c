#include<stdio.h>
void prime_checker();
void main (){
    //check if a number is prime 
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    prime_checker(&num);
}
void prime_checker(int *num){
    int counter=0;
    //loop as we get the remainders ---conditon <=num or <num+1
    for(int j=1;j<(*num+1);j++){
        if (*num%j==0){
            //if the condition is certisfied increment 
            //we only need a counter of 2 since a prime is divisible by 2 numbers 
            counter++;
        }
    }
    if (counter>2){
        printf("%d Is Not a prime number",*num);
    }else if (counter==2){
        printf("%d is a prime number",*num);
    }
}
/**
 * 
 a numberis prime if it is divisible 
 by it self and one 
 prime numbers are useful in criptography 
 num =7
 loop through 1 to 9 and check if it 
 when  divide by the values it yields 
 a zero as a remainder 
 if it can be devided only by 1 and itself then
 it is prime 
*/


