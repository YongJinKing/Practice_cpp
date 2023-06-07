#include <iostream>

void MyFunc(void)
{
  std::cout<<"MyFunc(void) called\n";
}
void MyFunc(char c)
{
  std::cout<<"MyFunc(Char c) called\n";
}
void MyFunc(int a, int b)
{
  std::cout<<"MyFunc(ina a, int b) called\n";
}


int main() {
  MyFunc();
  MyFunc('A');
  MyFunc(12, 13);
}