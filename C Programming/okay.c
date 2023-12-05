// #include<stdio.h>
// int main(){
//     char c, aCount=0;
//     while ((c = getchar()) !=EOF){
//         if (c == 'a' || c == 'A'){
//             aCount++;
//         }
//     }
//     printf("Number of A's are %d", aCount);
//     return 0;
// }

//asking 10 numbers and printing them

#include<stdio.h>

int main(){
    int number[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter %dth number: ", i+1);
        scanf("%d", &number[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("The %dth number is %d",i+1, number[i]);
        printf("\n");
    }
       
}