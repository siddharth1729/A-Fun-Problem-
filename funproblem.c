#include<stdio.h>                             //including header file 
int main()                                    // starting of main() function 
{
    int c;                                     // variable declaration 
    printf("\n enter any number ::  ");
    scanf("%d",&c);                            // scanning the int number from user
    if (c == 0)                                //logic
        return 0;
    printf("\n");
    while (c!=1)                               //logic
    {
        if (c % 2 == 0)
            c=c/2;
        else
            c=c*3+1;
        printf("-->");
        printf("%d",c);                         // printing the pattern in desired foam 
    }
    printf("\n\n");
}
