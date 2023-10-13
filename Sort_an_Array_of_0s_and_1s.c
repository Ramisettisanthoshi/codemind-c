#include <stdio.h>
 
/*Function to segregate all 0s on left and all 1s on right*/
void segregate0and1(int array[], int size)
{
    int left = 0, right = size-1;
 
    while (left < right)
    {
        /* Increment left index while we see 0 at left */
        while (array[left] == 0 && left < right)
            left++;
        /* Decrement right index while we see 1 at right */
        while (array[right] == 1 && left < right)
            right--;
        /* If left is smaller than right then there is a 1 at left and a 0 at right.  Exchange it */
        if (left < right)
        {
            array[left] = 0;
            array[right] = 1;
            left++;
            right--;
        }
    }
}
 
int main()
{
    int arr[20];
    int array_size ;
    scanf("%d",&array_size);
    for(int i=0;i<array_size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
 
    segregate0and1(arr, array_size);
   
    for (int i = 0; i <array_size; i++)
        printf("%d ", arr[i]);
    getchar();
    return 0;
}