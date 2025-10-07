#include<stdio.h>
int organiza(int *n1 , int *n2);
int calmdc(int n1, int n2);


int main(){
    int n1, n2, mdc;
    scanf("%d%d",&n1 , &n2);
    mdc = calmdc(n1, n2);
    printf("%d",mdc);

}
int organiza(int *n1,int *n2){
    int c;
    if (*n1>*n2){
        c = *n2;
        *n2 = *n1;
        *n1 = c;

        
    }
}

int calmdc(int n1,int n2){
    int r;
    organiza(&n1 , &n2);

    while(n2 != 0){
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    
    }
    return n1;
}
