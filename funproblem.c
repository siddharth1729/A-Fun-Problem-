 /****************************************************************
#############################################################################

* @author: SIDDHARTH PANDEY
* @date: 10/03/2020

#############################################################################

*****************************************************************/

#include<stdio.h>   

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}


int main()                                    // starting of main() function 
{
    int c , i , j;
    int a[10000];   
    int b[10000];                                  // variable declaration 
    printf("\n enter any number ::  ");
    scanf("%d",&c);                            // scanning the int number from user
    if (c == 0)                                //logic
        return 0;
    printf("\n");

    int x=0;
    while (c!=1)                               //logic
    {
        if (c % 2 == 0)
            c=c/2;
        else
            c=c*3+1;
        printf("-->");
        printf("%d",c);
        x++; 
        a[i]=c;
        i++;

             // printing the pattern in desired foam 
    }

    for(int j=0 ; j<x ; j++)
    {
        b[j]=a[j];
    }

    
   

    printf("\n\n");
    printf(" Total number of irritation in this sceries to reach 1 is :: %d",x );
    printf("\n\n");

    


    
  for (i = 0; i < x-1; i++)
  {
  // last i elements are already in place
    for (j = 0; j < x-i-1; j++)
    {
      if (b[j] > b[j+1])
        swap(&b[j], &b[j+1]);
    }
}

printf("\n Largest number in this sceries is :: %d" , b[x-1]);
printf("\n\n");

    return 0;
}
