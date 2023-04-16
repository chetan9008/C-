#include<iostream>
using namespace std;
// int main()
// {
//     int *ptr;
//     ptr = new int ;
//     *ptr=3;
//      cout << *ptr;
// }

// int main()
// {
//     float *ptr= new float;
//     *ptr = 2.9;
//     cout << *ptr;
// }

// int main()
// {
//     int *ptr;
//     ptr = new int[10];
//     for(int i=0;i<10;i++)
//     {
//         *ptr=i+1;
//         cout << *ptr << endl;
//     }
// }

// int main()
// {
//     int *ptr = new int[10];

//     for(int i=0;i<10;i++)
//     {
//         ptr[i]=i+1;
//     }
//     for(int i=0;i<10;i++)
//     {
//         cout << ptr[i] << endl;
//     }

//     delete[] ptr;
// }

// int main()
// {
//     int *ptr = new int[10];
//     if(ptr)
//     {
//         cout << "memory Allocation is successful";
//     }
//     else
//     {
//         cout << "Memory allocation is not doen successfully";
//     }
// }

// int main()
// {
//     try{
//         int *arr = new int[1000];
//     }
//     catch(bad_alloc ba)
//     {
//         cout << "Bad allocation occured ... the program will terminate now ";
//         return 1;
//     }
// }

class memory
{
    private:
    int num;
    int character;
    public:
    void initilize(int i,char c)
    {
        num = i;
        character = c;
    }
    void display()
    {
        cout << "Number is : " << num << endl << "Character is : " << char(character) ;
    }
};
int main()
{
    memory *ptr;
    try{
        ptr= new memory;
    }
    catch(bad_alloc ba)
    {
        cout << "Bad allocation"<< endl;
        return 1;
    }
    ptr->initilize(2,'D');
    ptr->display();

    delete ptr;
    return 0;
}