#include<stdio.h>
void incrementa(int *n);
int main(){
   int n;
   scanf("%d",&n);
/*   printf("%d\n",n);*/
   incrementa(&n);
   printf("%d",n);
   return 0;

}
void incrementa(int *n){
   *n=*n+1;
}
