#include <math.h>

 int main ()
 {
     float a;
     float b;
     float pole_prostokata;

     printf("Podaj dlugosc boku a:");
     scanf("%f" , &a);

     printf("Podaj dlugosc boku b:");
     scanf("%f" , &b);

     pole_prostokata = a*b;
     printf("Pole prostokata wynosi: %f" , pole_prostokata);
     return 0;
 }
