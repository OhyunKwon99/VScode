#include <iostream>

int main()
{
    int x = 2;
    x = 5;
    int y = x + 3;

    std::cout << y << std::endl; //std라는 공간안에서 정의된 cout 이라는 함수
    // std라는 namespace는 "비슷한 역할" 을 하는 함수를 모아논 "공간"
    // std는 스텐다드 라이브러리의 일부
    // y 대신에 직접 값을 넣어도 됨
    //ex) std::cout << 1+2 << std::endl;
    int sight = 10;

    sight = 0; 

    return 0;

}