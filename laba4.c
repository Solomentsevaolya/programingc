#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c);
double area(double a, double b, double c);

#endif

#include "triangle.h"

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


#include <stdio.h>
#include "triangle.h"

int main() {
    double a, b, c;

    printf("Введите длины трех сторон треугольника: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Проверка на корректность неравенства треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Введенные значения не образуют треугольник.\n");
        return 1;
    }

    // Вычисление периметра и площади треугольника
    double p = perimeter(a, b, c);
    double S = area(a, b, c);

    // Вывод результатов
    printf("Периметр треугольника: %.2f\n", p);
    printf("Площадь треугольника: %.2f\n", S);

    return 0;
}
