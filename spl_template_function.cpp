/**************WAP FOR CLASS AS A SPECIALIZED TEMPLATES *******************/

#include <iostream>
using namespace std;

template <class T>
class Test
{
// Data members of test
public:
Test( T a,T b)
{
    cout << "General template object \n";
    cout<<a+b<<endl;
}

};

template <>
class Test <int>
{
public:
Test(int a,int b)
{
    cout << "Specialized template object\n";
    cout<<a+b<<endl;
}
};

int main()
{
    Test<int> a(10,20);
    Test<char> b('a','\n');
    Test<float> c(15.3,15.6);
    return 0;
}
