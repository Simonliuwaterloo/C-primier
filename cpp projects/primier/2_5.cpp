#include <iostream>
void blind();
void run();
void temper();
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
  temper();
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
void temper()
{
  using namespace std;
  cout << "Please enter a Celsius value" << endl;
  double celsius;
  cin >> celsius;
  double fahre = 1.8 * celsius + 32.0;
  cout << celsius << " degrees celsius is "
  << fahre << " degrees Fahreheit" << endl;
}
