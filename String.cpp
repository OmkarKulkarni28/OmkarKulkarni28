

#include<string>
#include<iostream>
using namespace std;
int main()
{
     std::string str;
    cout<<"\n input string \n";
    cin>>str;
    cout<<"\n string entered is:" <<str;
    int len=str.length();
    cout<<"\n length of the string is:="<<len;
    string str1="hello";
    if(str.compare(str1)==0)
    {
        cout<<"\n two string are equal \n";
    }
    else
    {
        cout<<"\n two string are  not equal \n";
    }
    
    str1.append(".com");
    cout<<"\n new string1="<<str1;
    str.clear();
    cout<<"\n str1 new length="<<str1.length();
    return 0;
}







