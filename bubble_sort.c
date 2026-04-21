#include<stdio.h>
int main()
{   
    int n,i,arr[100],j,temp ;
    printf("Enter the Number of Element :");
    scanf("%d",&n);

    printf("Enter elements :");
    for( i = 0;i<n;i++){
        scanf("%d",&arr[i]);}
    

    for( i = n-1 ; i >=1 ; i--)
    {
      for(j = 0;j <=1;j++)
      {
        if ( arr[j] > arr[j+1])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp ;
        }
      }
    }
    printf("The sorted element is :\n");
    for( i = 0;i<n;i++)
    {
        printf(" %d\t",arr[i]);
    }
    return 0;
}
