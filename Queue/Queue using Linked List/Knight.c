#include <stdio.h>
high(int x, int y){
    if(x>y){return x;}
    else if(x<y){return y;}
    else{return x;}


}


int main(){

int inputs,row,column,Area,Knights,i,higher;

scanf("%d",&inputs);
for(i=0;i<inputs;i++){
    scanf("%d%d",&row,&column);
    Area=row*column;
    if(row==1 || column==1){

       if(row!=1){printf("%d",row);}
       else{printf("%d\n",column);}
    }

    else if(row==2 || column==2){
            higher = high(row,column);
            Knights=higher;
            if(higher%4==1||higher%4==3){Knights++;}
            if(higher%4==2){Knights+=2;}
            printf("%d\n",Knights);
    }
    else if(Area%2==1){printf("%d\n",(Area/2)+1);}
    else{printf("%d\n",Area/2);}

}




}
