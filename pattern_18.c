#include<stdio.h>
int main()
{
int n,rows,cols,spaces;
printf("\nEtner a number :");
scanf("%d",&n);
for(rows=1;rows<=n;rows++)
{
for(cols=1;cols<=n;cols++)
{
if(cols%2==0)
    printf("%d ",0);
else
    printf("%d ",1);
}
printf("\n");
}
return 0;
}
//OUTPUT
/*
Etner a number :10
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1 0
*/
