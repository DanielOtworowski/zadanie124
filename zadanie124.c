#include <stdio.h>
#include <stdlib.h>

float main()
{
    for(;;)
{
        int c=68 ;
        int a;
        int b;
        int wynik;
        int pods;
        int h;
        int wynik2;
        int t;

        printf("prosze wybrac jedna z opcji\n");
        printf("1.oblicz pole prostokata\n");
        printf("2.oblicz pole trojkata\n");
        printf("3.zamknij program\n");
        scanf("%d", &c);

        switch (c)

{

case 1:

    printf("wprowadz dlugosc boku a\n");
    scanf("%d", &a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%d", &b);
    wynik = a*b;
    printf("wynik=" "%d\n", wynik);

    break;
case 2:

    printf("wprowadz dlugosc podstawy trojkata\n");
    scanf("%d", &pods);
    printf("wprowadz wysokosc trojkata\n");
    scanf("%d", &h);
    wynik2 = 0.5*pods*h;
    printf("wynik=" "%d\n", wynik2);
    break;

case 3:
    exit;
}
    return 0;
    }
}
