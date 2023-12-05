#include<stdio.h>

int main(){
    char c,x;
    int aCount=0, lineCount=0;
    int alphabetsCount[26];

    for (int i = 0; i < 26; i++)
    {
        alphabetsCount[i] = 0;
    }
    
    while ((c = getchar()) != EOF)
    {
        if (c == 'a' || c =='A')
            {
                aCount++;
            }
        if (c == '\n')
            {
                lineCount++;
            }    
        x =(int) c  - 'a';

        printf("%d", x);

        alphabetsCount[x] = alphabetsCount[x] + 1;
    }

    for (int i = 0; i < 26; i++)
    {
         printf("the %dth element is %d\n",i+1, alphabetsCount[i]);
        
        for (int j = 0; j < alphabetsCount[i]; j++)
        {
            printf("* ");
        }
        
    }
    
    printf("Number of A is %d", aCount);
    printf("\n");
    printf("Number of new lines is %d", lineCount);
    return 0;
}