//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int inout(string var, bool input) {
//	int x = 0;
//	if (!input) {
//		cout << var << endl;
//	}
//	else {
//		cout << var;
//		cin >> x;
//		cout << endl;
//	}
//	return x;
//}
//
//int main() {
//	int a,b,c,d,e, res;
//
//	inout("enter variables for x = (((a + b) * c) - d) / e", false);
//	a = inout("a = ", true);
//	b = inout("b = ", true);
//	c = inout("c = ", true);
//	d = inout("d = ", true);
//	e = inout("e = ", true);
//		
//	__asm {
//		mov eax, a
//		add eax, b
//		mov edx, c
//		mul edx
//		sub eax, d
//		cdq
//		idiv e
//
//		mov res, eax
//	}
//
//	cout << "x = " << res;
//}

