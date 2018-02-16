/*
	Program to find all prime numbeers between given lower bound(starNum) and upper bound(endNum)
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,startNum=0,endNum=0;
    char flag;
    scanf("%d %d",&startNum,&endNum);
    printf("prime number between %d and %d are:\n",startNum,endNum);
    for(i=startNum;i<=endNum;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
