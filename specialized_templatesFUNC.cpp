
/********WAP TO DEMONSTRATE THE SPECIALIZED FUNCTION TEMPLATES**************/

#include <iostream>

using namespace std;

template <class T>

T add(T a,T b)
{
    return a+b;
}

template<>
string add <string> (string a,string b)
{
    //string c;
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]+b[i];
    }
    return a;
}
int main()
{
    cout<<"integers"<<add<int>(10,20)<<endl;
    cout<<"floating"<<add(32.4f,45.3f)<<endl;
    cout<<"double"<< add(10.5,20.7)<<endl;
    cout<<"characters "<<add('A','\n')<<endl;
    cout<<" string  " <<add<string>("ABC","   ")<<endl;
    return 0;
}
/** In case of the function templates any special datatypr we want to give the function as different in that case we need to use the specialized function template*/