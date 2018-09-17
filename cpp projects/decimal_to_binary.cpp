#include <iostream>
#include <list>

int main();
int main(){
  int decimal_number = 0;
  std::cout << "Enter decimal number" << std::endl << std::endl;
  std::cin >> decimal_number;
  std::list<int> binary;

  for ( int divisor = 128; divisor > 0; divisor = divisor/2  ){
    int digit = 0;
    digit = decimal_number/divisor;
    decimal_number = decimal_number%divisor;
    binary.push_back(digit);
  }
  for (int val : binary){
		std::cout << val << ",";
	std::cout << std::endl;
  }
}
