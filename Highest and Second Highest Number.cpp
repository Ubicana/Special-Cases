#include <iostream>
using namespace std;

void checkMaxSmax(int [], int);

int main(){
	int size;
	cout << "How many number(s) you want to enter ?: ";
	cin >> size;
	int num[size];
	
	for(int i = 0;i < size;i++){
		cout << "Please enter an integer for number #" << i + 1 << ": ";
		cin >> num[i];
	}
	
	checkMaxSmax(num, size);
}

void checkMaxSmax(int Num[], int Size){
	int min = Num[0], max = Num[0], smax = Num[0];
	
	for(int i = 1;i < Size;i++){
		if(Num[i] > max){
			smax = max;
			max = Num[i];
		}
		else if(Num[i] > smax)
			smax = Num[i];
	}
	
	cout << "The largest number -> " << max << endl;
	cout << "The second largest number -> " << smax;
}
