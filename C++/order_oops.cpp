#include<bits/stdc++.h>
using namespace std;
int c=0;
class menu
{
    private:
    string item_name;
    double price;
    public:
    menu(string dish,int pric)
    {
        item_name = dish;
        price = pric;
    }
    void show()
    {
        cout<<"Dish name: "<<item_name<<" "<<"--"<<"Price: "<<"$ "<<price<<endl;
    }
    int getprice()
    {
        return price; 
    }
    string getname()
    {
        return item_name;
    }
};
class pizza : public menu
{
    public:
        pizza():menu("Pizza",250){}
};
class burger : public menu
{
    public:
        burger():menu("Burger",150){}
};
class pasta : public menu
{
    public:
    pasta():menu("Pasta",200){};
};
class order
{
    public:
    menu *item[10];
   void additem(menu *m)
   {
    if(c<10)
    {
        item[c++] = m;
        cout<<m->getname()<<" item added"<<endl;
    }
    else
    {
        cout<<"your order is full"<<endl;
    }
   }
   void display()
   {

    double tot = 0;
    for(int i =0;i<c;i++)
    {
        item[i]->show();
        tot += item[i]->getprice();
    }
    cout<<"the total amount is: "<<tot<<endl;
   }
    ~order() {
        for (int i = 0; i < c; i++) {
            delete item[i]; // Free each allocated object
        }}
};
int main()
{
    order ptr;
    while(1)
    {
        int choice;
        cout<<"Enter the choice.";
        cin>>choice;
        cout<<"1. pizza"<<endl<<"2. Burger"<<endl<<"3. Pasta"<<endl<<"4. Display"<<endl<<"5. Exit"<<endl;
        switch(choice)
        {
            case 1:
                ptr.additem(new pizza());
                break;
            case 2:
                ptr.additem(new burger());
                break;
            case 3:
                ptr.additem(new pasta());
                break;
            case 4:
                ptr.display();
                break;
            case 5:
                return 0;
        }
    }
}