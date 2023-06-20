int val = 100; // 전역변수 설정

int SompleFunc()
{
    int val = 20;//지역변수 설정
    val += 3; // 지역변수에 3 값 추가
    ::val += 7;//전역변수에 7값 추가
}