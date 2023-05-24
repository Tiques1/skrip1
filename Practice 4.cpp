#include <iostream>

int main()
{
	char szMessage[100] = "Hello world";
	char result[100]{};
	int count = 0;

	__asm
	{
		mov esi, 0
	metka1:
		cmp szMessage[esi], 0
		je label1
		mov al, szMessage[esi]
		push eax
		inc count
		inc esi
		jmp metka1
	label1 :
		mov esi, 0
		mov ecx, count
	metka2 :
		pop eax
		mov result[esi], al
		inc esi
		loop metka2
	}
	std::cout << result;
}