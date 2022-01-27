#include <iostream> // cout, cin, endl,...
#include <cstdio> // printf

int main()
{
    //"using namespace std;" 이후 해당 문장이 포함된 괄호{} 안에서는 std::cout,cin ~~등에서 
    //"std" 생략가능 
    // using namespace 를 통해서 cout, endl 등의 특정 namespace 에서 선언된 내용을 만나게 되면
    // 컴파일러가 std 라는 namespace를 찾아서 안의 내용을 자동으로 참조하여 컴파일을 진행한다. 
    using namespace std;
    

    std::cout << "I love this lecture!" << std::endl;
    // <::> 은 std라는 namespace 안에 있는 cout을 사용하기 위해
    // 참"조한다는 표시
    // "<<" "I love this lecture!" 이란 스트림을 cout 에 전해준다
    // "<<" 을 통해서 출력 내용을 전달, output operator 라고도 부른다.
    //std::endl; 은 줄바꿈 c언어의 \n 와 비슷 (거의 동일)

    int x = 1024;
    double pi = 3.141592 ;

    std::cout << "x is"<< x << "pi is" << pi << std::endl;
 
    std::cout << "abc" << "\t" << "def" << std::endl;
    std::cout << "abc" << "    " << "def" << std::endl;
    // 공백 대신 \t 을 사용할 경우 다음탭까지 자동으로 칸수를 띄워주고 줄바꿈 가능 ,
    // 백슬레시\가 붙은 \t, \n 등은 문자 자체는 두개로 구성되어있지만 하나의 문자로 인식   

    std::cout << "\a" ;

    // 이하 내용에서는 std 생략 

    int t ;

    cin >> t;
    cout << "your input is " << t << endl;
    //입력을 받기때문에 inputoperator 라고 불린다 
    return 0; 
}