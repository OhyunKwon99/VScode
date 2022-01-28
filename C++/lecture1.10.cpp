#include <iostream>
#include "lecture1.11.h"

using namespace std;

///함수선언 declaration
//int add(int a, int b); header로 이동
int mult(int a, int b);
int subt(int a, int b);

int main()
{
    cout << add(1, 2) << endl;
    return 0;
}

///함수정의 definition
//int add(int a, int b)
//{
//    return a + b;
//}
/// header로 정의 이동
int mult(int a, int b)
{
    return a * b;
}

int subt(int a, int b)
{
    return a - b;
}
