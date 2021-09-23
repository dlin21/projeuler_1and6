#include<stdio.h>


int p1(){
    int i;
    int sum = 0;
    for(i=0; i < 1000; i++){
        if(i%3 == 0 || i%5 ==0){
            sum += i;
        }
    }
    return sum;
}

int p6(){
    int i;
    /*sum of the squares*/
    double a = 0;
    /*square of the sum*/
    double b = 0;
    
    
    for(int i=1; i<=100; i++){
        a += i * i;
        b += i;
    }
    b *= b;

    return (b - a);
}

int main(){
    printf("sum of all multiples of 3 or 5 below 1000 is %d\n", p1());
    printf("difference between the sum of the squares of the first one hundred natural numbers and square of the sum is %d\n", p6());
}