#include<stdio.h>
int main()
{
   int choice;
   long num1, num2, x;
   printf("Please choose your option:"
          "\n1 = Insertion sort"
          "\n2 = Selection sort"
          "\n3 = Bubble sort"
          "\n4 = Merge sort"
          "\n5 = Quick sort"
          "\n6 = exit"
          "\n\nChoice: ");
   scanf("%d", &choice);
   //while loop check whether the choice is in the given range
   while(choice < 1 || choice > 6)
   {
      printf("\nPlease choose the above mentioned option."
             "\nChoice: ");
      scanf("%d", &choice);
   }
    switch (choice)
   {
   case 1:{
    int n, i, j, temp;
    int arr[64];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) 
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }
   }
   }
    return 0;
}
   
  