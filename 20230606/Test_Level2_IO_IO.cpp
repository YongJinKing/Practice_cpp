#include <iostream>

int main(void) {
  char name[100];
  char number[100];
  std::cout<<"이름을 입력해주세요."<<std::endl;
  std::cout<<"이름: ";
  std::cin>>name;
  std::cout<<"전화번호를 입력해주세요."<<std::endl;
  std::cout<<"전화번호: ";
  std::cin>>number;

  std::cout<<"이름 :"<<name<<"\n";
  std::cout<<"전화번호 :"<<number<<std::endl;
  

}