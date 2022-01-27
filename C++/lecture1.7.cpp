#include <iostream>
using namespace std;
int main()// (함수명 중복 불가)
{
    int x(0);
    cout << x << " " << &x << endl;

    {
        int x = 1;
        cout << x << " " << &x << endl;
        //cpp에서는 중괄호를 이용해서 영역을 분리할 수 있음 
        //영역을 벗어나면 내부에서 선언했던 변수 없어짐
    }

    {
        x = 2;
        // int x = 2; 선언이 아닌 x = 2; 와 같이 값만 수정하는 경우
        // 제일 바깥에 선언된 변수를 그대로 사용하게됨 
        // 추가 주소할당 없음 
        cout << x << " " << &x << endl;
    }
    
    return 0;
}