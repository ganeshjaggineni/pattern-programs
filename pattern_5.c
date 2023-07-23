#include<stdio.h>
int main()
{
    int n,rows,cols;
    printf("Enter a number :");
    scanf("%d",&n);
    int i=1;
  for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
            printf("%d ",i);
            i++;
        }
        printf("\n");
    }
    return 0;
}
#output
/*
Enter a number :5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
