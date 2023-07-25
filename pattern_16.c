#include<stdio.h>
int main()
{
int n,rows,cols,colLimit,spaces;
printf("\nEnter a number :");
scanf("%d",&n);
for(rows=1;rows<=n;rows++)
{
    for(spaces=1;spaces<=n-rows;spaces++)
    {
        printf(" ");
    }
colLimit=2*rows-1;
for(cols=1;cols<=colLimit;cols++)
{
if(cols==1||cols==colLimit||rows==n)
    printf("*");
else
        printf(" ");
}
printf("\n");
}
return 0;
}

