#include<stdio.h>
double calculad(double m[3][3]);

int main(){
    double m[3][3] ;
    int i=0,j=0;
    double deter=0;
    for(i=0;i< 3;i++){
        for(j=0;j<3;j++){
          /*  printf("Preencha um valor para o a linha %d e coluna %d:\n",i,j);*/
            scanf("%lf",&m[i][j]);
        }
    }
    deter = calculad(m);
    printf("%.1lf\n",deter);


    return 0;
}
double calculad(double m[3][3]){
    double d=0;
    d = (m[0][0] * m[1][1]* m[2][2])+(m[0][1] * m[1][2]* m[2][0])+ (m[0][2] * m[1][0]* m[2][1])-(m[0][2] * m[1][1]* m[2][0])-(m[0][1] * m[1][0]* m[2][2])-(m[0][0] * m[1][2]* m[2][1]);

    return d;
}
