#include <stdio.h>

insertion(int arr[] , int n){
int i,j,key;
for(i=1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;}
    arr[j+1]=key;}
}
int main(){
int arr[]={4,1,3,5,2},n;
n = sizeof(arr)/sizeof(arr[0]);
insertion(arr,n);
for(int i=0;i<n;i++){
    printf("a[%d] = %d\n",i,arr[i]);
}
}


