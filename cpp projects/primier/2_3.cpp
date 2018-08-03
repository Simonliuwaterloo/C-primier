//ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);   //first define simon() prototype

int main()
{
  using namespace std;
  simon(3);  //call the simon function
  cout << "pick an integer: ";
  int count;
  cin >> count;
  simon(count);  //call it again
  cout << "Done!"<<endl;
  return 0;
}

void simon(int n)    //define the simon() function
{
  using namespace std;
  cout << "Simon says touch your toes " << n << " times. " << endl;
}
