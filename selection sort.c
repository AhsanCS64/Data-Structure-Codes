#include <stdio.h>

int main(){
int arr[]={9,6,8,2,0,4,1,2},smallest,i,temp,j,n;
n=sizeof(arr)/sizeof(arr[0]);

for(i=0;i<n-1;i++){
    smallest=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[smallest]){
            smallest=j;
        }
    }
        if(smallest!=i){
            temp=arr[i];
            arr[i]=arr[smallest];
            arr[smallest]=temp;
        }
    }


for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
}
