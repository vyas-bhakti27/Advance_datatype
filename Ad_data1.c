#include<stdio.h>

int main()
{

        size_t rows=0;
        size_t columns=0;

        printf("Enter the number of rows you want to store:"); // enter the no. of rows
        scanf("%zd",&rows);
        printf("Enter the number of columns in a row:"); // enter the no. of columns
        scanf("%zd",&columns);

        float beans[rows][columns];

        return 0;
}
