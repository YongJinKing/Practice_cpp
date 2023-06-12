#include <iostream>

struct human//휴먼이라는 부모 클래스 생성
{
  int age = 0;
  char* name;
  int tall = 0;
};

struct yong : public human{//yong에다가 부모클래스를 할당
  yong()
{
  age = 20;
  name = "yong";
  tall = 173;
}
};
int main()
{
  yong y;
  std::cout<<y.name<<"\n";
  
}