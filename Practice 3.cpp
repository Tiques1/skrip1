//#include "stdio.h"
//#pragma warning (disable: 4996)
//#include <iostream>
//
//int main()
//{
//	unsigned char a, b, y;
//	char x;
//	bool c, d;
//	printf("Please, tell me two number:\n");
//	scanf("%hhu %hhu", &a, &b);
//	
//	_asm
//	{
//		mov al, a;
//		mov bl, b;
//		mov c, 0;
//		mov d, 0;
//		add al, bl;
//		jno sign;
//		mov c, 1;
//	sign:
//		jnc unsign;
//		mov d, 1;
//	unsign:
//		mov x, al;
//		mov y, al;
//	}
//
//	printf("\na + b = %hhu (unsigned)\n", y);
//	printf("a + b = %d (signed)\n", x);
//
//	if (c == 1)
//		printf("overflow (signed)\n");
//	else
//		printf("no overflow (signed)\n");
//
//	if (d == 1)
//		printf("overflow (unsigned)\n");
//	else
//		printf("no overflow (unsigned)\n");
//}