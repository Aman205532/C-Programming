#include<stdio.h>
int main (){
    int num;
    printf("enter the number:- ");
    scanf("%d",&num);

    int sum = 0;
    while(num!= 0){
        sum +=num% 10; 
        num= num/10;
    }
    printf("digit sum: %d", sum);
}