#include <stdio.h>

int main(){
int arr[]={1,2,3,4,5,6,7,8},BEG,END,MID,key,i;
int n=sizeof(arr)/sizeof(arr[0]);

printf("Enter the number to be searched: ");
scanf("%d",&key);
BEG=0;
END=n-1;
MID=(BEG+END)/2;

while(BEG<=MID){
    if(key<arr[MID]){END=MID-1;}
    else if(key>arr[MID]){BEG=MID+1;}
    else if(key==arr[MID]){printf("Found! at Index[%d]",MID);break;}

MID=(BEG+END)/2;
}
}
