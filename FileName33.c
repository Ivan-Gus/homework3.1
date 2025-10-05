#include <stdio.h>
#include <locale.h>

void main () 
{
	setlocale(LC_CTYPE, "");
	float U;
	float R;
	float I;
	puts("Введите значение напряжения");
	scanf("%f", &U);
	puts("Введите значение сопротивления");
	scanf("%f", &R);
	I = U / R;
	printf("Сила тока вычеслим как %.1f В / %.1f Ом\n", U, R);
	printf("Результат вычисления: %.1f\n", I);



	return 0;

}