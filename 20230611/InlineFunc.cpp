#include <iostream>
#define SQUARE(x) (x*x)
// 인라인 함수는 데이터 손실을 막아줌
// 예를들어 위와 같은 함수를 int를 통해 함수선언하게 되면
// double 형태의 데이터가 들어왔을떄 소수점 만큼의 데이터 손실이 발생한다.
//하지만 위와같이 작성하면 그럴 경우가 없음

int main(void)
{
    std::cout<<SQUARE(3.14)<<"\n";
}