#include <iostream>

using namespace std;

class A 
{
public:

	A()
	{
		x = 1;
	}


	void test()
	{
		auto foo = [this] {
			x = 5;
		};
		foo();
		std::cout << "value x:" << x << std::endl;
	}

private:
	int x;
};

int main()
{
	A a;
	a.test();
	return 0;
}
