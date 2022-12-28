#include <iostream>
using namespace std;

int main(){
	int largest = 1, num;
	bool check = 1;
	cin >> num;
	
	for(int i = 1;i <= num;i++){
    	if(num == 1){
        	check = 0;
        	break;
    	}
    	else if(num == 2){
    		check = 1; 
    		break;
    	}
    	
    	if(i == 1)
    		continue;
    	else if(num % i == 0 && i != num){
        	largest = i;
        	cout << largest << endl;
        	check = 0;
    	}
	}

	if(!check)
    	cout << num << " is not a prime number. The largest value it can be decided with is " << largest << ".";
	else
    	cout << num << " is a prime number and it is not divisible by any number other than itself.";
  
  return 0;
}
