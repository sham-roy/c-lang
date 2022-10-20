#include<stdio.h>
int main (){
  int i,j,limit;
  printf("enter the limit");
  scanf("%d",&limit);
    for(i=0;i<=limit;i++){
      for(j=i;j>=1;j--){
        printf("%d",j);
      }
      printf("\n");
    }
  return 0;
}
