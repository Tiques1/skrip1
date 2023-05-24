#include <iostream>
#include <string>
using namespace std;

int main()
{

	int a = 0;
	cin >> a;


	__asm
	{
		mov eax, 1
		push a
		call fact
		mul [esp]
		add esp, 4
		mov a, eax
		jmp exit2

		fact :
			cmp[esp + 4], 1
			jbe exit1
			mov esi, [esp + 4]
			dec esi
			push esi
			call fact
			mul [esp]
			add esp, 4
			ret

		exit1 :
			ret

		exit2 :
	}

	cout << a;
}