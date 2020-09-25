#include<stdio.h>
#include<math.h>

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//! Func reshy_kvadrat() solves the square equation ax^2 + bx + c = 0
//!
//! @param [in]  a  | a  - coefficient
//! @param [in]  b  | b  - coefficient
//! @param [in]  c  | c  - coefficient
//! @param [out] x1 | x1 - 1 root
//! @param [out] x2 | x2 - 2 root
//!
//! @return number of roots
//!
//! @note If the number of roots is infinite -1
//-----------------------------------------------------------------------------

int reshy_kvadrat(double a, double b, double c, double* x1, double* x2);

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//! Func reshy_lin() solves the linear equation ax + b = 0
//!
//! @param [in]  a  | a  - coefficient
//! @param [in]  b  | b  - coefficient
//! @param [out] x  | x  -  root
//!
//! @return number of roots
//!
//! @note If the number of roots is infinite -1
//-----------------------------------------------------------------------------

int reshy_lin(double a, double b, double* x);

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//! Func is_zero() compares a number to zero
//!
//! @param [in]  a  | a  - number
//!
//! @return True or False
//-----------------------------------------------------------------------------

int is_zero(double num);

//-----------------------------------------------------------------------------

const float Zero = 1e-5;

//-----------------------------------------------------------------------------

int main(){

    printf("write the coefficients of the square equation:\n");

    double a = 0,
           b = 0,
           c = 0;
    scanf("%lg %lg %lg", &a, &b, &c);

    double x1            = 0,
           x2            = 0;
    int    kol_vo_korney = reshy_kvadrat(a, b, c, &x1, &x2);

    switch (kol_vo_korney){

        case  0:
            printf("no roots");
            break;
        case  1:
            printf("x = %lg", x1);
            break;
        case  2:
            printf("x1 = %lg, x2 = %lg", x1, x2);
            break;
        case -1:
            printf("infinite number of roots");
            break;
    }

}

//-----------------------------------------------------------------------------

int reshy_kvadrat(double a, double b, double c, double* x1, double* x2){

    *x1 = 0; *x2 = 0;

    if (is_zero(a)){

        return reshy_lin(b, c, x1);
    }
    else {

        double d = b * b - 4 * a * c;

        if (d < 0){

            return 0;
        }
        else if (is_zero(d)){

            *x1 = - b / (2 * a);
            return 1;
        }
        else if (d > 0){

            *x1 = (- b + sqrt(d))/(2 * a);
            *x2 = (- b - sqrt(d))/(2 * a);
            return 2;
        }
    }
}

//-----------------------------------------------------------------------------

int reshy_lin(double a, double b, double* x){

    if (is_zero(a)){

        if (is_zero(b)){

            return -1;
        }
        else {

            return 0;
        }
    }
    else {

        *x = -b / a;
        return 1;
    }
}

//-----------------------------------------------------------------------------

int is_zero(double num){

    return (fabs(num) < Zero);
}

//-----------------------------------------------------------------------------

