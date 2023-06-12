#include <iostream>

void swap(int &num1, int &num2)//할당된 메모리의 공간에 다른이름을 붙이는것
//즉 v1 과 num1은 같은 주소를 가지게 되고 num2와 v2는 같은 주소를 가지게 된다.
//따라서 num1을 변경할 때 v1의 주소가, num2가 변경할 때 v2의 주소가 변경된다.
{
  int temp = 0;
  temp = num1;
  num1 = num2;
  num2 = temp;
}


int main()
{
  int v1= 0;
  int v2= 0;

  v1 = 10;
  v2 = 20;
  swap(v1, v2);
  std::cout<<v1<<v2<<"\n";
}