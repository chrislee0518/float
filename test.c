#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 9;
	//00000000000000000000000000001001����
	//�����ͣ�0 00000000 00000000000000000001001
	float* pfloat = (float*)&n;
	printf("n: %d\n", n);
	printf("*pfloat: %f\n", *pfloat);

	*pfloat = 9.0;
	//������0 10000010 00100000000000000000000�����ڴ��������洢����ȡΪ����ʱ�����������Ʋ����ȡ
	//
	printf("num: %d\n", n);
	printf("*pfloat1: %f\n", *pfloat);
	return 0;
}

//int main()
//{
//	float a = 5.5;
//	printf("%f", a);
//	return 0;
//}