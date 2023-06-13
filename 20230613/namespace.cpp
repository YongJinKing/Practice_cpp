#include <iostream>

namespace BestComimp1
{
  void SimpleFunc(void)
  {
    std::cout<<"BestCom이 정의한 함수"<<"\n";
  }
}
namespace ProgComimp1
{
  void SimpleFunc(void)
  {
    std::cout<<"ProgCom이 정의한 함수"<<"\n";
  }
}

int main() {
  BestComimp1::SimpleFunc();
  ProgComimp1::SimpleFunc();
}