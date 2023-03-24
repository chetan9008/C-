#include"iostream"
#include"iomanip"
using namespace std;
class items
{
    string name[10];
    int itemPrice[10];
    int count = 0;
    public:
    void getItem()
    {
        cout << "Enter the name of item : ";
        cin >> name[count];
        cout << "Enter the price of item : ";
        cin >> itemPrice[count];
        cout <<endl;
        count++;
    }
    void displayItems()
    {
        cout << endl<<"\t"<< "Name"<< "\t\t" << "Cost"<<endl;
        for(int i=0;i<count;i++)
        {
            cout << "\t"<<name[i] << "\t\t" << itemPrice[i]<<endl; 
        }
    }
    void deleteItem()
    {
        string ch;
        cout << "Enter the name of item to delete : "; cin >> ch;
        cout << "You deleted the " << ch << " item "<< endl << endl;
        for(int i=0;i<count;i++)
        {
            if(name[i] == ch)
            {
                for(int j=i;j<count;j++)
                {
                    name[j] = name[j+1];
                    itemPrice[j] = itemPrice[j+1];
                }
                count--;
            }
        }
    }
    void totalValue()
    {
        int sum=0;
        for(int i=0;i<count;i++)
        {
        sum+=itemPrice[i];
        }
        cout << "Total Value is : "<<sum<< endl<<endl;
    }
};
int main()
{
    items x;
    int check=1;
    while(check)
    {
        cout<<endl<<"Shopping App"<<endl;
        cout << "Press 1 for Enter item :" << endl;
        cout << "Press 2 for Delete item :" << endl;
        cout << "Press 3 for Display items : "<< endl;
        cout << "Press 4 for Total value : " << endl;
        cout << "Press 0 for Exit!"<<endl;
        cout << "Enter : " ;cin >> check; 
        cout << endl;       
        switch(check)
        {
            case 0:
            exit(0);
            break;
            case 1:
            x.getItem();
            break;
            case 2:
            x.deleteItem();
            break;
            case 3:
            x.displayItems();
            break;
            case 4:
            x.totalValue();
            break;
            default:
            cout << "Your entered the wrong code"<<endl;
        }
    }
}