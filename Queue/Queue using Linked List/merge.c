#include <stdio.h>

int a[6]={2,3,1,4,6,5};
int b[6];
int MergeSort(int low, int high){

if(low<high){
    int mid=(low+high)/2;

MergeSort(low,mid);
MergeSort(mid+1,high);
Merge(low,mid,high);
}
}

Merge(int low,int mid,int high){
int h=low;int i=low;int j=mid+1;
 while(h<=mid && j<=high){
    if(a[h]<=a[j]){
         b[i]=a[h];
        h=h+1;
    }
    else{
         b[i]=b[j];
        j=j+1;
    }
    i++;
 }

 if(h>mid){
    for(int k=j;k<=high;k++){
         b[i]=a[k];
        i=i+1;
    }
 }
 else{
    for(int k=h;k<=mid;k++){
         b[i]=a[k];
        i=i+1;
    }
 }
 for(int k=low;k<=high;k++){
    a[k]=b[k];
 }
}

int main(){
    int n=6;
    MergeSort(0,n-1);
for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
}


}
