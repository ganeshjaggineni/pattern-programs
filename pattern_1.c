#include<stdio.h>
int main()
{
int n,rows,cols;
printf("\nEtner a number : ");
scanf("%d",&n);
for(rows=1;rows<=n;rows++)
{
for(cols=1;cols<=n;cols++)
{
printf("* ");
}
printf("\n");
}
}
