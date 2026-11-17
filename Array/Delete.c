#include <stdio.h>

int main(){
int a[5]={1,2,3,4,5},i,deltloc;

for(i=0;i<5;i++){
    printf("a[%d] = %d\n",i,a[i]);
}
printf("Enter the array location to be deleted: ");
scanf("%d",&deltloc);
for(i=deltloc-1;i<5;i++){
    a[i]=a[i+1];
}
printf("\nAfter deleting the value the Array is:\n");
for(i=0;i<4;i++){
    printf("a[%d] = %d\n",i,a[i]);
}
}
