#include <stdio.h>
int main(){

    int num1= 1;
    int num2= 2;
    int num3= 3;
    int num4= 4;
    int num5= 5;
    int num6= 6;
    int num7= 7;
    int num8= 8;
    int num9= 9;
    int num10= 10;

    printf("Punto A\n\n");
    printf("La suma de todas las variables es igual a %d", num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 +num9 + num10);
    printf("\nPunto B\n\n");
    printf("La multiplicacion entre la primera y la tercera es igual a %d, entre la cuarta y la septima igual a %d, y entre la quinta y octava es igual a %d", (num1*num3), (num4*num7), (num5*num8) );
    printf("\n\nPunto C\n\n");
    printf("El promedio es %.2f\n\n", (float)(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/2);
    printf("\nPunto D\n");
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num1, (float)(num1%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num1, (float)(num1%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num2, (float)(num2%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num2, (float)(num2%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num3, (float)(num3%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num3, (float)(num3%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num4, (float)(num4%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num4, (float)(num4%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num5, (float)(num5%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num5, (float)(num5%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num6, (float)(num6%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num6, (float)(num6%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num7, (float)(num7%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num7, (float)(num7%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num8, (float)(num8%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num8, (float)(num8%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num9, (float)(num9%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num9, (float)(num9%3) );
    printf("El modulo de la variable %d entre 2 es igual a= %.2f\n", num10, (float)(num10%2) );
    printf("El modulo de la variable %d entre 3 es igual a= %.2f\n", num10, (float)(num10%3) );
    printf("\nPunto E\n");
    printf("Division entre la primera y la segunda = %.2f\n", (float)num1/num2);
    printf("Division entre la segunda y la tercera = %.2f\n", (float)num2/num3);
    printf("Division entre la tercera y la cuarta = %.2f\n", (float)num3/num4);
    printf("Division entre la cuarta y la quinta = %.2f\n", (float)num4/num5);
    printf("Division entre la quinta y la sexta = %.2f\n", (float)num5/num6);
    printf("Division entre la sexta y la septima = %.2f\n", (float)num6/num7);
    printf("Division entre la septima y la octava = %.2f\n", (float)num7/num8);
    printf("Division entre la octava y la novena = %.2f\n", (float)num8/num9);
    printf("Division entre la novena y la decima = %.2f\n", (float)num9/num10);
    printf("\nPunto 2\n");
    printf("1\t2\t3\t4\t5\n16\t17\t18\t19\t6\n15\t24\t25\t20\t7\n14\t23\t22\t21\t8\n13\t12\t11\t10\t9\n");
    printf("\nPunto 3\n");
    printf("%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c %c%c%c %c%c%c%c", (char)76, (char)111, (char) 114, (char) 101, (char)109, (char) 105, (char)112, (char) 115, (char)117, (char)109, (char)100, (char)111, (char)108, (char)111, (char)114, (char)115, (char)105, (char)116, (char)97, (char)109, (char)101, (char)116);
    printf("\n\nPunto 4\n");
    int celsius[13] = {0, 10, 12, 18, 24, 32, 33, 49, 50, 75, 80, 99, 100};


    printf("\nTabla de conversion de grados Celsius a Fahrenheit\n");
    printf("------------------------------------------\n");
    printf("| Grados Celsius   | Grados Fahrenheit   |\n");
    printf("------------------------------------------\n");

    for (int i = 0; i < 13; i++) {
      float fahrenheit = celsius[i] * 1.8 /*1.8 representa la expresión 9/5*/ + 32;
      printf("| %14d%cC | %17.2f%cF |\n", celsius[i],(char)248, fahrenheit, (char)248);
   }

    printf("------------------------------------------\n");
    printf("\n\nPunto 5\n\n");
    float p1, p2;
    p1= 2.3;
    p2= 3.6;
    printf("Suma entre ambas= %.2f\n", p1+p2);
    printf("La segunda menos la primera= %.2f\n", p2-p1);
    printf("Multiplicacion entre ambas= %.2f\n", p1*p2);
    printf("La primera dividida la segunda= %.2f\n", p1/p2);
    printf("La segunda dividida la primera= %.2f\n", p2/p1);
    printf("La primera preincrementada=%.2f \nLa segunda preincrementada= %.2f\n", ++p1, ++p2);

    printf("\nPunto 6\n\n");
    int divisores[6] = {3, 6, 7, 8, 9, 11};

    for (int i = 0; i < 6; i++) {
      printf("%.3f\n", (float)100/divisores[i]);
   }
   getch();
   return 0;
}
