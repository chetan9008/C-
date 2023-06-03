#include <iomanip>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
class tel
{
protected:
    char name[20];
    int num;

public:
    tel() {}
    tel(char n[20], int nu)
    {
        strcpy(name, n);
        num = nu;
    }
    void display()
    {
        int len = strlen(name);
        cout.fill('*');
        cout << name << setw(len + 10) << num << endl;
    }
    bool search(char n[20])
    {
        if (strcmp(n, name) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool searchnum(int n)
    {
        if (n == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    char *givename()
    {
        return name;
    }
    int givenum()
    {
        return num;
    }
};
class specific : public tel
{
    tel search;
    fstream file;
    bool flag = false;

public:
    specific()
    {
        file.open("11_3_class.txt", ios ::in | ios ::out | ios ::ate);
    }
    void ftelenum()
    {
        char string[20];
        cout << "Enter the name :";
        cin >> string;
        file.seekg(0);
        while (file.read((char *)&search, sizeof(search)))
        {
            if (search.search(string))
            {
                cout << "Telephone number is " << search.givenum() << endl;
                flag = true;
                break;
            }
        }
        file.clear();
        if (!flag)
            cout << "You entered wrong name";
    }
    void fname()
    {
        flag = false;
        int num;
        cout << "Enter the telephone number : ";
        cin >> num;
        file.seekg(0);
        while (file.read((char *)&search, sizeof(search)))
        {
            if (search.searchnum(num))
            {
                cout << "Name is : " << search.givename() << endl;
                flag = true;
            }
        }
        file.clear();
        if (!flag)
        {
            cout << "Wrong telphone number\n";
        }
    }
    void update()
    {
        int num;
        int index;
        flag = false;
        cout << "Enter the telephone number to update : ";
        cin >> num;
        file.seekg(0);
        while (file.read((char *)&search, sizeof(search)))
        {
            if (search.searchnum(num))
            {
                cout << "Enter the new telphhone number : ";
                cin >> num;
                fflush(stdin);
                cout << "Enter the index : ";
                cin >> index;
                fflush(stdin);
                file.seekp(0);
                int size = sizeof(search);
                file.seekp(0, ios ::end);
                int end = file.tellp();
                file.seekp(0);
                file.seekp((index - 1) * (size));
                cout << "pointer is at " << file.tellp();
                tel temp;
                temp = tel(search.givename(), num);
                file.write((char *)&temp, sizeof(temp));
                file.seekp(0);
                flag = true;
                break;
            }
        }
        file.clear();
        if (!flag)
        {
            cout << "Telephone number is not found" << endl;
        }
    }
    void display()
    {
        file.seekg(0);
        while(file.read((char *) & search,sizeof(search)))
        search.display();
        file.clear();
    }
};
int main()
{
    char temp[20];
    strcpy(temp, "John");
    tel p[3];
    p[0] = tel(temp, 1234);
    strcpy(temp, "Ahmed");
    p[1] = tel(temp, 98756);
    strcpy(temp, "Chetan");
    p[2] = tel(temp, 7017344);
    ofstream output;
    output.open("11_3_class.txt", ios ::out);
    for (int i = 0; i < 3; i++)
    {
        output.write((char *)&p[i], sizeof(p[i]));
    }
    output.close();
    fstream file;
    file.open("11_3_class.txt", ios ::in);
    file.seekg(0);
    tel temp1;
    while (file.read((char *)&temp1, sizeof(temp1)))
        temp1.display();
    specific first;
    int i = 1;
    while (i)
    {
        cout << "\n\n";
        cout << "Enter 1 for find telephone number\n";
        cout << "Enter 2 for find name of person\n";
        cout << "Enter 3 for update telephone number\n";
        cout << "Enter 0 for exit \n";
        cin >> i;
        cout << "\n\n";
        switch (i)
        {
        case 1:
            first.ftelenum();
            break;
        case 2:
            first.fname();
            break;
        case 3:
            first.update();
            break;
        case 4:
            first.display();
            break;
        default:
            cout << "Enter 1 or 2 or 3 or 0 for any action\n";
            break;
        }
    }
    return 0;
}