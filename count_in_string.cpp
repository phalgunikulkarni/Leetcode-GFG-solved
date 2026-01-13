#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str = "2um 2uM evlo???";
    int cons=0, vow=0, num=0, spl=0, i;
    for( i = 0;i< str.size(); i++)
    {
        char ch = str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vow++;
        }
        else{
            cons++;
        }
        }
        
        else if(ch >='0' && ch<='9'){
            num++;
        }
        else {
            spl++;
        }
    }
    cout<<cons<<"=>Cons"<<endl;
    cout<<vow<<"=>Vow"<<endl;
    cout<<spl<<"=>spl"<<endl;
    cout<<num<<"=>num"<<endl;
    return 0;
}
