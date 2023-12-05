#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c=sum(a,b);
    printf("The sum is %d", c);
}
int sum(int x, int y){
    return x + y;
}