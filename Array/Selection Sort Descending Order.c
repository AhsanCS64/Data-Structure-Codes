#include <stdio.h>
int main(){
int arr[]={1,2,4,7,0,5},biggest,i,j;
int n=6;
for(i=0;i<n-1;i++){
    biggest=i;
    for(j=i+1;j<n;j++){
        if(arr[j]>arr[biggest]){
        biggest=j;}
        }
         if(biggest!=i){
            int temp=arr[i];
            arr[i]=arr[biggest];
            arr[biggest]=temp;}
}
for(i=0;i<n;i++){
    printf("a[%d] = %d\n",i,arr[i]);
}
}
