#include<stdio.h>
#include<math.h>

int reshy_kvadrat(double a, double b, double c, double* x1, double* x2){

    if ((a == 0) and (b == 0)){

        if (c == 0){

            return NULL;
        }
        else{

           // *x1 = NULL;
           // *x2 = NULL;
            return 0;
        }
    }
    else if (a == 0){

        *x1 = -c/b;
        *x2 = -c/b;
        return 1;
    }
    else{

        double d = b * b-4 * a * c;

        if (d<0){

            //*x1 = NULL;
            //*x2 = NULL;
            return 0;
        }
        else if (d == 0){

            *x1 = -b/(2*a);
            *x2 = *x1;
            return 1;
        }
        else if (d > 0){

            *x1 = (-b + sqrt(d))/(2 * a);
            *x2 = (-b - sqrt(d))/(2 * a);
            return 2;
        }
    }
}

int main(){

    double a = 0, b = 0, c = 0;
    scanf("%lg, %lg, %lg", &a, &b, &c);

    double x1 = 0, x2 = 0;

    reshy_kvadrat(a, b, c, &x1, &x2);

    printf("x1 = %lg, x2 = %lg", x1, x2);

}
