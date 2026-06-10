#include <stdio.h>

int main()
{
    int n, t1 = 0 , t2 = 1 , nexTerm;
    printf("Enter a number of terms");
    scanf("%d", &n);
    printf("Fibonacci series:");
    for (int i = 1; i <= n; ++i)
    {
        printf("%d," , t1);
        nexTerm = t1 + t2;
        t1 = t2 ;
        t2 = nexTerm;
    
    }
printf("\n");
return 0; 
}