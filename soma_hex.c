#include<stdio.h>


int main(){
    int n1 , n2 , soma ;
    scanf("%d%d",&n1,&n2);
    soma = n1 + n2;
    printf("%X %d\n",n1&0xFF,n1);
    printf("%X %d\n",n2&0xFF,n2);

    printf("%X %d\n",soma&0xFF,soma);


return 0;
}
