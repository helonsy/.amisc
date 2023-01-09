// ATT format asm    gcc objdump default
// moveq a, b   from left to right
// %rdi for register  begin with %
// description location in memory: '(%rbx)'
//g++ -Og -S main.cpp

// Intel format asm
// description location in memory: 'QWORD PTR [rbx]'
//g++ -Og -S -masm=intel main.cpp


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	std::cout << "Hello" << std::endl;

	return 0;
}
