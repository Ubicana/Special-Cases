#include<iostream>
using namespace std;

int main(){
  int result = 1, n = 0;
  bool check = 0;
  cin >> f;
  cout << "The number to be evaluated is: " << f << endl;

  for(int i = 0;i <= f;i++){
      if(f == 0){
          result = 1;
          break;
      }
      else if(f == 1){
          check = 1;
          break;
      }
      else if(i != 0)
          result *= i;
        
      if(result == f){
          check = 1;
          break;
      }
      else if(result > f)
          break;
      else
          n++;
  }

  if(check)
      cout << "Number " << f << " is a factorial number for " << n << "!";
  else{
      cout << "Number " << f << " is NOT a factorial number." << endl;
      cout << "The next factorial calculation is: " << result << " which is " << n << "!";
  }
  
  return 0;
}
