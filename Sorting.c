#include <stdio.h>
#include <string.h>
//ekta array er element gulake ascending or descending order e shajabo
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //arranging in ascending order
    for (int i = 0; i < n-1; i++)
    {
         for (int j = i+1; j < n; j++) //i er porer index theke hishab korbe
         {
              if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
              }
         }
         
    }
    //output
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    

    return 0;
}
