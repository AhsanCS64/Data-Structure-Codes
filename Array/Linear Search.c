#include <stdio.h>
int main(){
int arr[]={1,2,3,4,5,6,0,10},key;
int n=sizeof(arr)/sizeof(arr[0]);
printf("Enter the number to be searched: ");
scanf("%d",&key);
for(int i=0;i<n;i++){
    if(key==arr[i]){
        printf("Found! at Index[%d]",i);
    }

}
}
