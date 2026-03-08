#include<stdio.h>

int main()
{
    int key, low=0, high, i, n, a[30], mid;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&key);

    high = n-1;

    while(low <= high){
        mid = (low + high) / 2;

        if(a[mid] == key){
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(a[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    printf("Element not found\n");

    return 0;
}
