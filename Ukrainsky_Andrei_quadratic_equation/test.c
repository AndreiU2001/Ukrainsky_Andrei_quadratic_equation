//test.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "quadratic_equation.h"

int main()
{
	double a, b, c;

	printf("\nEnter the coefficient a:\n");
	scanf("%lf", &a);

	printf("\nEnter the coefficient b:\n");
	scanf("%lf", &b);

	printf("\nEnter the coefficient c:\n");
	scanf("%lf", &c);

	solve_equation(a, b, c); // ����� ������� solve_equation ��� ���������� �������� x1 � x2

	return 0;
}