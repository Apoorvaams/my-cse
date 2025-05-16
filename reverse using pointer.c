#include <stdio.h>
int main(){
    int i,arr[10]={1,2,3,4,5},n=5,temp;
    int *start,*end;
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("reversed array\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
