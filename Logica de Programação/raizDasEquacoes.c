#include <stdio.h>
#include <math.h>

int main(void) {
  float a,b,c,delta,raiz1,raiz2,raiz3;

  printf("Digite o coeficiente a: ");
  scanf("%f",&a);

  printf("Digite o coeficiente b: ");
  scanf("%f",&b);

  printf("Digite o coeficiente c: ");
  scanf("%f",&c);

delta = pow(b,2) - 4*a*c;

if( delta > 0)
  {raiz1 = (- b + (pow(delta,1/2))) / (a*2);
   raiz2 = (- b - sqrt(delta)) / (a*2);
   printf("\nA equação possui duas raízes:\nx1: %.2f | x2: %.2f",raiz2,raiz1);
    } else if (delta == 0){
    raiz3 = -b / (2*a);
  printf("\nA raiz possui apenas uma raiz:\nx1: %.2f",raiz3);
  }else {
    printf("A equação não possui raízes");
  }

  
  return 0;
}