#include <stdio.h>
#include <locale.h>

void main () 
{
	setlocale(LC_CTYPE, "");
	float U;
	float R;
	float I;
	puts("������� �������� ����������");
	scanf("%f", &U);
	puts("������� �������� �������������");
	scanf("%f", &R);
	I = U / R;
	printf("���� ���� �������� ��� %.1f � / %.1f ��\n", U, R);
	printf("��������� ����������: %.1f\n", I);



	return 0;

}