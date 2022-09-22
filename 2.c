//2. Write a recursive function to print first N natural numbers in reverse order


#include <stdio.h>
void print(int n)
{
    if (n > 0)
    {
        printf("%d ", 2*n-1);
        print(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    print(n);
    return 0;
}
