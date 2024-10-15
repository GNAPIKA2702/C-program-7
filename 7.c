
#include <stdio.h>

int main() {
    int X, Y, a, b;
    printf("Enter the starting and ending range of numner:");
    scanf("%d%d", &X,&Y);
    
    printf("Enter the two numbers to what in between numbers should divisible:");
    scanf("%d%d", &a,&b);
    printf("Numbers divisibleby %d and %d in between %d and %d are:\n", a,b,X,Y);
    for (int i = X; i <= Y; i++) 
    {
        if (i % a == 0 && i % b == 0)
         {
            printf("%d\n ", i);
        }
    }
     return 0;
}
