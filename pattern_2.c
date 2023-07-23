#include<stdio.h>
int main()
{
int rows,cols,n;
printf("\nEtner a number :");
scanf("%d",&n);
for(rows=1;rows<=n;rows++)
{
for(cols=1;cols<=n;cols++)
{
printf("%d ",rows);
}
printf("\n");
}
}
