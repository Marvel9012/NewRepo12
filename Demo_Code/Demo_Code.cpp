
#include <iostream>
using namespace std;
class Sample
{
	int* nptr;
public:
	Sample(int x)
	{
		nptr = new int(x);
	}
	void print()
	{
		cout << *nptr << endl;
	}
};
int main()
{
	Sample s1(10);
	s1.print();hghjkh

	cout << "Abc added" << endl;

}