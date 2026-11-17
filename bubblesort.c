#include<stdio.h>

int main(){
int arr[]={2,3,5,1,9,16},i,n,temp;
n=sizeof(arr)/sizeof(arr[0]);

for(i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}

for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
}
