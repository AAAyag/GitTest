#include <iostream>
#include <string>

using namespace std;
int main()
{
	char*  cName ="hello, eric";  //

	char cName2[8] = {'h', 'a', 'p', 'p','y'};
	std::cout << "cName2:" << cName2 << endl;
	int badNums[5] = {4, 12, 1, 5, 10};

	int* iName = badNums;
	std::cout << "badNums:"<< badNums<< endl;
	std::cout << "cName:" << cName <<endl;
	std::cout << "iName:" << iName;

	cin.get();
	return 0;

}