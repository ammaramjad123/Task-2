#include <iostream>
#include "teacher.h"
using namespace std;
int main()
{
	int a=40;
	teacher ob;
	ob.setage(a);
	cout << "Age of the teacher is :" << ob.getage() << endl;
	system("pause");
	return 0;
}
