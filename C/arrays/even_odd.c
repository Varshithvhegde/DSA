#include <stdio.h>

int main()
{
    int n,k=0,m=0;
    printf("Enter nuumber of array elements:\n");
    scanf("%d",&n);
    int arr[n],ar_ev[n],ar_odd[n];
    printf("Enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ar_ev[k]=arr[i];
            k++;
        }
        else{
             ar_odd[m]=arr[i];
            m++;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n Even Array\n");
    for(int i=0;i<k;i++){
        printf("%d ",ar_ev[i]);
    }
    printf("\nOdd Array\n");
    for(int i=0;i<m;i++){
        printf("%d ",ar_odd[i]);
    }
}
