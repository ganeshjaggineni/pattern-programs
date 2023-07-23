#include<stdio.h>
int main()
{
    int n,rows,cols;
    printf("\nEtner the number :");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n-rows+1;cols++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
