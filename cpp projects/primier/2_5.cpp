#include <iostream>
void blind();
void run();
int main()
{
  using namespace std;
  cout << "Hello, Lijianyan of Tangshan";
  cout << endl;
  double wave;
  cout << "Input a value for wave" << endl;
  cin >> wave;
  double yard = wave / 220;
  cout << "The yard is " << yard << endl;
  blind();
  blind();
  run();
  run();
}
void blind()
{
  using namespace std;
  cout << "Three blind mice"<< endl;
}
void run()
{
  using namespace std;
  cout << "See how they run" << endl;
}
