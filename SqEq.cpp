#include<stdio.h>
#include<math.h>

int discriminant(a, b, c){

    if (a == 0)
        return -1
    else
        return b*b - 4*a*c

}

int Reshy_Kvadrat(double a, double b, double c){

    if ((a == 0) and (b == 0)){

        if (c == 0)

            printf("Korney mnogo, pram beskonechno")

        else

            printf("Kornei sovsem net")

    }

    else if ((a == 0) and (b != 0))

        printf(-c/b)

    else if (a != 0){

        d = discriminant(a, b, c)

        if (d == 0){

            double x = 0;
            x = -b/(2*a)
            printf("x = %lg", x)

        }

        else{

            double x1 = 0, x2 = 0;
            x1 = (-b - sqrt(d))/(2*a);
            x2 = (-b + sqrt(d))/(2*a);
            printf("x1 = %lg, x2 = %lg", x1, x2)
        }

    }

    }

int main(){

    double a = 0, b = 0, c = 0;
    scanf("%gl, %gl, %gl", a, b, c);

    Reshy_Kvadrat(a, b, c);

    return 0;

    }
