#include <stdio.h>
int main()
{
    int row,column,y,i;
    row = 1;
    printf("==========================================================");
    printf("\n\t   Multiplication Table from 1 - 10");
    printf("\n----------------------------------------------------------");
    printf("\n      ");
    for(i=1; i<=10; i++)
        printf("%4d",i);
    printf("\n----------------------------------------------------------\n");
    do
    {
        printf("%4d |",row);
        for(column=1; column<=10; column++)
        {
            y=row*column;
            printf("%4d",y);
        }
        printf("\n");
        row++;
    }
    while(row<=10);
    printf("----------------------------------------------------------");
    return 0;
}
