//DYNAMIC MEMORY ALLOCATION
// 3. C REALLOC
#include <stdio.h>
#include <stdlib.h>
int main()
{

    // USe of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int)); 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ("The value at %d of this array %d\n", i, ptr[i]);
    }

    // USE OF REALLOC
   
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr , n*sizeof(int));   //old ptr
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array %d\n", i, ptr[i]);
    }

    return 0;
}