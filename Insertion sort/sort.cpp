#include "insertion.h"
#include <iostream>

using namespace std;

int main(){
	vector<int> myVector;
	cout << "Give a list of numbers :" << endl;
	int temp;
	while(cin >> temp){
		myVector.push_back(temp);
	}
	cout << "The given list of number is :" << endl;
	for (auto num : myVector){
		cout << num << " ";
	}
	cout << endl;

	insertionSort opt;
	opt.sortFunc1(myVector);

	cout << "The sorted list of number is :" << endl;
	for (auto num : myVector){
		cout << num << " ";
	}
	cout << endl;

	return 0;
}