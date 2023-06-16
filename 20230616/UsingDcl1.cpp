#include <iostream>

namespace Hybrid
{
    void HybFunc()
    {
        std::cout<<"so simple funtion!"<<std::endl;
        std::cout<<"In namespace Hybrid!"<<std::endl;
    }
}

int main()
{
    using Hybrid::HybFunc;//using키워드를 이용하여 이름공간을 사용하지 않아도 호출하겠다는 의미
    HybFunc();
}