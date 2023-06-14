#include <iostream>

namespace BestComImpl
{
  void SimpleFunc(void);
}

namespace ProgComImpl
{
  void SimpleFunc(void);
}
int main() 
{ 
  BestComImpl::SimpleFunc();
  ProgComImpl::SimpleFunc();
  
}

void BestComImpl::SimpleFunc(void)
{
  std::cout<<"BestCom이 정의한 함수"<<"\n";
}

void ProgComImpl::SimpleFunc()
{
  std::cout<<"ProgComImpl이 정의한 함수"<<"\n";
}