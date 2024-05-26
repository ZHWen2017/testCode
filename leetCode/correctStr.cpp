#include <iostream>
#include <string>
using namespace std;

void correctStr(string& aStr)
{
    if(aStr.size() <= 2 )
    {
        return;
    }

    for(int i = 0; i < aStr.size() - 2; )
    {
        if( aStr[i] == aStr[i+1]
           && aStr[i] == aStr[i+2])
        {
            aStr.erase(i+2, 1);
        }
        else
        {
            i++;
        }
    }

    
    if(aStr.size() <= 3 )
    {
        return;
    }
    for(int i = 0; i < aStr.size() - 3; )
    {
        if( aStr[i] == aStr[i+1]
           && aStr[i+2] == aStr[i+3])
        {
            aStr.erase(i+3, 1);
        }
        else
        {
            i++;
        }
    }
}

int main() {
    int a;
    cout << "begin enter num: " << endl;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cout << "begin enter str: " << endl;
        string aStr;
        cin >> aStr;
        correctStr(aStr);
        cout << aStr << endl;
    }

}
// 64 位输出请用 printf("%lld")