#include<stdio.h>
#include<stdlib.h>
struct myArray
{
        int l;
        int array[];
};

int main()
{
        struct myArray *m= NULL;
        int arraySize = 0;

        printf("Enter the size of flexible array\n");
        scanf("%d",&arraySize);

        size_t size = sizeof(struct myArray);
        m = malloc(size + (sizeof(int) * arraySize)); // dynamically allocating memory

        m->l = arraySize;
        m->array[0] =55;
        m->array[1] = 199;

        printf("array is: %d:%d\n", m->array[0],m->array[1]);
        return 0;
}
