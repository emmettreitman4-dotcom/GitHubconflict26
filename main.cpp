#include <iostream>
using namespace std;

void say(string s);
int add(int a,int b);

int main()
{
    cout << "greetings\n";
    cout << "hello world\n";
    say("hi");
    return 0;
}

void say(string s)
{
    cout << s << endl;
}
int add(int a, int b)
{
    return a + b;
}