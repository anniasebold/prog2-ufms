#include<stdio.h> 
#include<math.h>

int main() { 
  double a, b, c, delta;
  double raiz1, raiz2;

  scanf("%lf %lf %lf", &a, &b, &c);
  delta = (b*b) - 4 * a * c;

  if (delta < 0) {
    printf("A equação não possui raízes reais\n");
  }
  else {
    raiz1 = (-b + sqrt(delta)) /  2 * a;
    raiz2 = (-b - sqrt(delta)) /  2 * a;

    printf("%4.2f, %4.2f\n", raiz2, raiz1);

  }

  return 0;
}
