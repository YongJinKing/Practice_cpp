#include <iostream>
using namespace std;
void Plus1(int &pnum1)
{
  pnum1++;
}
void changepm(int &pmnum2)
{
  pmnum2 *= -1;
}

int main() {
  int num1 = 1;
  cout << "before plus :"<<num1 << endl;
  Plus1(num1);
  cout << "after plus :"<<num1 << endl;
  int num2 = 2;
  cout << "before pm :"<<num2 << endl;
  changepm(num2);
  cout << "after pm :"<<num2 << endl;
  
}