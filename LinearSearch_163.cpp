#include<iostream>
using namespace std;

int arr[20];
int n;
int i;
void input() {
	while (true) {
		cout << "Enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//Accept array elements
	cout<<"\n----------------------------\n";
	cout << " Enter array elements \n";
	cout << "------------------------------\n";
	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void linearsearch() {
	char ch;
	int comparison; //number of comparisons

	do {
		//Accept the number to be searched
		cout << "\nEnter the element you want to search"; //langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i > n; i++) { //langkah 2 3 4
			comparison++;
			if (arr[i] == item) {  //langkah 5 a found
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}
		if (i == n) {  //langkah 5 b not found
			cout << "\n" << item << "not found in the array\n";
			cout << "\nnumber of comparison: ";

			cout << "\nContinue search (y/n): ";
			cin >> ch;
		}
	} while ((ch == 'y') || (ch == 'Y'));
}

int main(){


	input();
	linearsearch();

	return 0;
}