#include<stdio.h>
int main()
{
    int arr[100],n,i,key,mid;
    int found = 0;
    int low = 0;
    int high = n - 1;
    printf("Enter the number of element :");
    scanf("%d",&n);

    printf("Enter sorted element :");

    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Element to Search :");
    scanf("%d",&key);

    while(low<=high)
    {
        mid = (low + high) / 2 ;

        if ( arr[mid] == key)
        {
            printf("Element Found");
            found = 1;
            break;
        }
        else if ( arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
           high = mid - 1 ;
        }
    }
    if (found == 0)
    {
        printf("Element not found");
    }
    return 0;
}
// #include <stdio.h>

// int main() {
//     int arr[100], n, i, key;
//     int low = 0, high, mid;
//     int found = 0;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     high = n - 1;

//     printf("Enter sorted elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter element to search: ");
//     scanf("%d", &key);

//     while(low <= high) {
//         mid = (low + high) / 2;

//         if(arr[mid] == key) {
//             printf("Element found at position %d\n", mid + 1);
//             found = 1;
//             break;
//         }
//         else if(arr[mid] < key) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     if(found == 0) {
//         printf("Element not found\n");
//     }

//     return 0;
// }