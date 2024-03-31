#include <stdio.h>
#include <math.h>
#include <conio.h>
 
int main()
{
  double cateto1, cateto2, hipotenusa;
 
  printf("\n=================================");
  printf("\nCalculemos la hipotenusa de un triangulo rectangulo, te parece?");
  printf("\n=================================");
  printf("\n\nIntroduce el valor de un cateto: ");
  scanf("%lf", &cateto1);
  printf("\nIntroduce el valor del otro cateto: ");
  scanf("%lf", &cateto2);
  
  hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
 
  printf("\n\nLa Entonces... la hipotenusa es: %lf", hipotenusa);
 
  printf("\n\n\n\nPulsa cualquier tecla para salir.\n");
  getch();
 
  return 0;
}
