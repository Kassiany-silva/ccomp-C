#include<stdio.h>

int calculasoma(int a, int b){
    int i;
    int soma = 0;
    if(a<b){
    for(i=a;i<=b;i++){
        soma = soma+i;
    }
}else if(a>b){
    for(i=b;i<=a;i++){
        soma = soma+i;
    }

}else return 0;
    return soma;
}
int main(){
    int a,  b ,s ;
    scanf("%d" , &a);
    scanf("%d",&b);
    s =calculasoma(a, b);
    printf("A soma é %d\n",s);


    return 0;
}
