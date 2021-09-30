#include<stdio.h>

#define MAX 20

float valorS(float r);

int main() {
  int k, i, s[MAX];

  scanf(" %d\n", &k);

  for(i = 0; i < k; i++) {
    scanf(" %d", &s[i]);
  }

  for(i = 0; i < k; i++) {
    printf("%.2f\n", valorS(s[i]));
  }

  return 0;
}

float valorS(float r) {
  float s = 0, formula;

  if(r == 1){
    s += 1.00;
  }
  else if(r >= 2) {
    formula = (1+(r*r))/(2*r);
    s += formula + valorS(r-1);
  }
  return s;
}