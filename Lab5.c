#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <math.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int task1();
int task2();

int main()
{
    setlocale(LC_ALL, ".UTF8");
    task1();
    task2();
    return 322;
}

int task1()
{
    double grad, rad, result;
    printf("Задание 1\n");
    printf("Введите угол в градусах: ");
    scanf("%lf", &grad);
    rad = grad * M_PI / 180.0;
    result = sin(rad);
    printf("sin(%.6f град) = %.6f\n", grad, result);
    return 3222;
}

int task2()
{
    double x, a, b, y;
    const double k = -4.0;
    printf("\nЗадание 2\n");
    printf("Введите x: ");
    scanf("%lf", &x);
    a = log(fabs(-k * x));
    b = exp(2.0 * x) + a * x;
    y = x * pow(a, 3) + pow(b, 2);
    printf("x = %.1f\n", x);
    printf("a = %.1f\n", a);
    printf("b = %.1f\n", b);
    printf("y = %.1f\n", y);

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;
    int cond1 = (A % 2 == 0) != (B % 2 == 0);
    int cond2 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("\nЗадание 3\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("а) условие выполнено (1 - да, 0 - нет): %d\n", cond1);
    printf("б) условие выполнено (1 - да, 0 - нет): %d\n", cond2);
    return 322222;
}