//============================================================================
// Name        : av.cpp
// Author      : Abubakarr Marah
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int addOne(int &);

int main () {

	int n = 3;

	cout << "n before calling addOne(): " << n << endl;
	cout << "value returned by addOne(): " << addOne(n) << endl;
	cout << "n after calling addOne() is: " << n << endl;

}
int addOne( int &value){
	value++;



    return value;
}




