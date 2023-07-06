#include <iostream>
using namespace std;
void SwapPointer(int *pptr1, int *pptr2)
{
  int temp = *pptr1;
  *pptr1 = *pptr2;
  *pptr2 = temp;
}

int main() {
  int num1 = 5;
  int *ptr1 = &num1;
  int num2 = 10;
  int *ptr2 = &num2;
  cout << "before change :" <<num1 << ", "<<num2 << endl;
  SwapPointer(ptr1, ptr2);
  cout << "after change :" <<num1 << ", "<<num2 << endl;
}