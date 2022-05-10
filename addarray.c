#include <stdio.h>
void add_array(int array1[], int array2[], int array3[])
{
    int m;
    for (int i = 0; i < 6; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
    // printing 3 rd array after adding two arrays
    printf("\n");
    printf("addded array elemenst are:\t");
    for (int m = 0; m < 6; m++)
    {
        printf("%d\t", array3[m]);
    }
}
int main()
{
    // Declaring and initilaizing two arrays
    int array1[6] = {1, 2, 3, 4, 5, 6};
    int array2[6] = {7, 8, 9, 10, 11, 12};
    // declaring third array
    int array3[6];
    add_array(array1, array2, array3);

    return 0;
}