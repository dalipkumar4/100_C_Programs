// Dalip's approach
// #include <stdio.h>

// int main()
// {

//     int arr[10] = {2, 5, 3, 1, 4, 6, 0, 9, 8, 7};
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10 - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 char temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }


// Dalip's approach
// #include <stdio.h>

// int main()
// {
//     int i, j, length;
//     int ar[] = {4, 1, 5, 2, 3};

//     length = sizeof(ar) / sizeof(ar[0]);

//     for (i = 0; i < length; i++)
//     {
//         for (j = i + 1; j < length; j++)
//         {
//             if (ar[i] > ar[j])
//             {
//                 ar[i] = ar[i] + ar[j];
//                 ar[j] = ar[i] - ar[j];
//                 ar[i] = ar[i] - ar[j];
//             }
//         }
//     }

//     // Print sorted array after sorting is done
//     for (i = 0; i < length; i++)
//     {
//         printf(" %d", ar[i]);
//     }

//     return 0;
// }
