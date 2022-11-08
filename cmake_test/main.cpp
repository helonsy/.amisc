//clang++ main_asan.cpp -fsanitize=address -fsanitize-recover=address -g
//ASAN_OPTIONS=halt_on_error=0,log_path=1.txt ./a.out

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <malloc.h>

using namespace std;

void fun()
{
	char p[5] = "";
	char tmp = 5;
	p[-1] = 7;
	std::cerr << "in fun, " << "tmp:" << (unsigned int)tmp << std::endl;
}

void fun2()
{
	int *p = new int(5);
	std::cerr << "in fun2, p value:" << *p << std::endl;
	std::cerr << "fun2_xxx" << std::endl;
}

int main(int argc, char **argv)
{
	printf("pid = %d\n", getpid());
	std::cerr << "main_xxxx" << std::endl;
//	fun();
	std::cerr << "main_xxxxx2" << std::endl;
//	fun2();
	std::cerr << "main_xxxxx3" << std::endl;

	while(true)
	{
		std::cout << "xxxxxx" << std::endl;
	}
//	char c;
//	std::cin >> c;

	return 0;
}
