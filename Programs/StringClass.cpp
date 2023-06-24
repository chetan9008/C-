#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
void display(char c)
{
    cout <<  c ;
}
int main()
{
    string s1 = "chetan#include <iostream>#include <string>using namespace std;";
    cout << "First string " << s1 << endl;
    // char s[20] = "chetan#include <iostream>#include <string>using namespace std;";
    // cout << s << endl;
    string s2("gaurav");
    string s3;
    s3 = s2;
    string s4(s2);
    cout <<"Second string " <<  s2 << endl;
    cout << "Third string " << s3 << endl;
    cout << "Fourth string " << s4 << endl;
    s2.append("chetan");
    cout << s2 << endl;
    string s5;
    s5.assign(s2);
    cout << s5 << endl;
    cout << s5.at(4) << endl;
    for_each(s2.begin(),s2.end(),display);
    cout << endl;
    cout << s3 << endl;
    cout << "Length is " << s3.length() << endl;
    cout << "Size is " << s3.size() << endl;
    cout << "Capacity is " << s3.capacity() << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    if(s3.compare(s4)==0 )
    {
        cout << "string third is same as string 4th " << endl;
    }
    if(s3.compare(0,s3.size(),s4,0,s4.size())==0)
    {
        cout << "Compare succesfully with anoter and effective method " << endl;
    }
    s4.clear();
    if(s4.empty())
    {
        cout << "String  4 is cleared " << endl;
    }
    size_t found = s1.find("gaurav");
    if(found != string::npos)
    cout << "include at " << s1.find("include") << endl;
    else
    cout << "gaurav in not found" << endl;
    cout << "s3  = " <<s3 << endl;
    cout << "s3 after insertion" << endl;
    s3.insert(6,"chutiya");
    cout << s3 << endl;
    cout << "Max size of string is " << s2.max_size() << endl;
    s3.replace(6,7,"gandu");
    cout << s3 << endl;
    s4.insert(0,"gaurav");
    s3.swap(s4);
    cout << s3 << endl;
    s4 += s3;
    cout << s4 << endl;
        return 0;
}