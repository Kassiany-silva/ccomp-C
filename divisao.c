//Este é o primeiro programa usado na disciplina, faz uma divisão simples entre dois números.
#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%i",&a);
  scanf("%i",&b);
  if(b!=0)
  {
    c = a/b;
    printf("%i",c);
  }
  else
    printf("Divisão por 0");
  return 0;
}
