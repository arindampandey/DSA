#include <iostream>
using namespace std;
class Book{
    public :
    char title[15];
    int price;
    void setdata(void);
    void getdata(void);
};
void Book :: setdata(void)
{
    cout << "Enter book title :"<<endl;
    cin >> title;
    cout << "Enter book price :"<<endl;
    cin >> price;
}
void Book :: getdata(void)
{
    cout << "The title of book is "<< title << " and the price is "<< price<<endl;
}
int main()
{
    Book b1,b2,b3;
    b1.setdata();
    b1.getdata();
    b2.setdata();
    b2.getdata();
    b3.setdata();
    b3.getdata();
    return 0;
}