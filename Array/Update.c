#include <stdio.h>

int main(){
int a[5]={1,2,3,4,5},i,updata,updateloc;
printf("Here's the following array: \n");
for(i=0;i<5;i++){
    printf("a[%d] = %d\n",i,a[i]);
}

printf("Enter the Array Location to be updated: ");
scanf("%d",&updateloc);
printf("Enter the Data you want to update: ");
scanf("%d",&updata);

a[updateloc-1]=updata;

printf("\nThe Array after being updated: \n");

for(i=0;i<5;i++){
    printf("a[%d] = %d\n",i,a[i]);
}

}
