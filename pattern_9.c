#include<stdio.h>
int main()
{
int n,rows,cols,spaces;
printf("Enter a number :");
scanf("%d",&n);
for(rows=1;rows<=n;rows++)
{
for(spaces=1;spaces<=n-rows;spaces++)
{
printf("  ");
}
for(cols=1;cols<=rows;cols++)
{
printf(" %d",n-cols+1);
}
printf("\n");
}
return 0;
}

