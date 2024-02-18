#include <iostream>
#include <map>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int evencount = 0;
    int oddcount = 0;
    bool flag = false;
    map<char, int> charcount;
    for (int i = 0; i < name.size(); i++)
    {
        charcount[name[i]]++;
    }
    map<char, int>::iterator it;
    for (it = charcount.begin(); it != charcount.end(); it++)
    {
        cout << it->first << it->second << endl;

        if (it->second % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    if (name.size() % 2 == 0)
    {
        if  (oddcount == 0)
        {
            flag = true;
        }
        else{
            flag=false;
        }
    
    
    }
    else{
        if(oddcount==1){
            flag=true;
        }
        else{
            flag=false;
        }
    }

if (flag)
{
    cout << "palindrom" << endl;
}
else
{
    cout << " not palindrom" << endl;
}

return 0;
}