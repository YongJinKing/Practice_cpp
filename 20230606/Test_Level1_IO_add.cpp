#include <iostream>

int main(void) {
  int val[5];//cin같은 경우에는 초기화 필요 x
  int result = 0;// 이런경우에는 초기화 시켜줘야됨
  for(int i = 0; i < 5; i++)
    {
      std::cout<< i + 1 <<"번째 정수 입력: ";
      std::cin >> val[i];
      result += val[i];
    }
  std::cout<<"합계:"<<result<<std::endl;
}