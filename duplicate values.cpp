#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>


#define SIZEOF_ARRAY(arr) sizeof(arr) / sizeof(*arr)

bool contains(int *values, size_t size, int value)
{
    for (size_t i = 0; i < size; ++i)
        if (values[i] == value)
            return true;
    return false;
}

int main(void)
{
    int numbers[] = { 1, 1, 2, 2, 2, 3, 4, 5, 6, 6, 7, 7, 7, 8, 9 };

    for (size_t i = 0; i < SIZEOF_ARRAY(numbers) - 1; ++i)
    {
        if (contains(numbers, i, numbers[i])) 
            continue;                        

        if(contains(numbers + i + 1, SIZEOF_ARRAY(numbers) - i , numbers[i]))
            printf("Number %d has duplicate values\n", numbers[i]);
    }
}

