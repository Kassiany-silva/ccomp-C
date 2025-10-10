#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    float *vet1, *vet2, prod;

    scanf("%d",&n);
    vet1 = (float*)malloc(n* sizeof(float));
    vet2 = (float*)malloc(n* sizeof(float));
    for(i=0;i<=n;i++){
        scanf("%f",&vet1[i]);
    }
        for(i=0;i<=n;i++){
        scanf("%f",&vet2[i]);
    }
    for (i=0;i<=n;i++){
        prod += vet1[i]*vet2[i];
    }

    printf("%.2f",prod);

    free(vet1);
    free(vet2);







    return 0;
}
