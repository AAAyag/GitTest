#include <iostream>
#include <string>

using namespace std;
int main()
{
	char*  cName ="hello, eric";
	string sName = "eric zhang";
	int badNums[5] = {4, 12, 1, 5, 10};

	int* iName = badNums;
	std::cout << "badNums:"<< badNums<< endl;
	std::cout << "cName:" << cName <<endl;
	std::cout << "iName:" << iName;
	std::cout << "sName:" << sName;
	cin.get();
	return 0;

}