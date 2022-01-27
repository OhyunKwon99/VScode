#include <iostream>

using namespace std;

void printHelloWorld()
{
    cout << "Hello World" << endl;

    return; 
    // 함수 return 후 out,
    // 아래 문장 실행 x
     

    cout << "Hello World" << endl;

}

int multiplyTwoNumbers(int num_a, int num_b)
{
    int sum = num_a * num_b;

    return sum;
}

int main()
{
    printHelloWorld();
    cout << multiplyTwoNumbers(1, 2) << endl;
    cout << multiplyTwoNumbers(3, 4) << endl;
    cout << multiplyTwoNumbers(8, 13) << endl;

     
    return 0;
}