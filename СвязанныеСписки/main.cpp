#include "Stack.h"
#include "Stack2.h"
#include <string>
using namespace std;

int main()
{
	string s = "()]";
	cout << BracketsBalanced(s) << endl;

	return 0;
}