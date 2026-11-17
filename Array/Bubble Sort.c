#include <stdio.h>
int main(){
int a[10]={5,1,4,2,6,7,3,11,10,15},i,temp;

printf("Array before sorting: \n");
for(i=0;i<10;i++){
    printf("a[%d] = %d\n",i,a[i]);
}
printf("\n");
for(i=0;i<9;i++){
    for(int j=i+1;j<10;j++){
        if(a[i]>a[j]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;}}
}
printf("Array After Bubble Sorting: \n");
for(i=0;i<10;i++){
    printf("a[%d] = %d\n",i,a[i]);
}
}
