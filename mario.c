#include <cs50.h>
#include <stdio.h>
  int i;
  int n;
  int j;
  
int main(void)
  {
printf("get the number:");
scanf("%d", &n);
if (n<1)
printf ("enter a number between 1 and 8 ");
if (n>=1)
{ 
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=n-i;j++)
        { printf(" ");}
        for (j=n-i+1;j<n;j++)
        { printf("#");}
    printf("#"); 
    printf("\n");
        }

     
}

}    







 



