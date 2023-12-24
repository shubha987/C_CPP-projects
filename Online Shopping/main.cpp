#include<iostream>
using namespace std;

float onlineShopping(){
  cout<<"***************************Welcome to Online Shopping***************************"<<endl;
  cout<<"*************************Please Follow the Instructions*************************"<<endl;
  cout<<"1) Please enter m to order mobile phones"<<endl;
  cout<<"2) Please enter 1 to order laptops"<<endl;
  cout<<"3) Please enter 1 to order speakers"<<endl;
  cout<<"4) Please enter 1 to order arduino"<<endl;
  cout<<"5) Please enter 1 to order Headphone"<<endl;
  char choice,item;
  int quantity;
  cin>>choice;
  float billAmount=0;
  //************* mobile phones **********
  if (choice=='m' || choice== 'M')
  {
    mobilevel:
    cout<<"Mobile details"<<endl;
    cout<<"1) Apple       Rs.40000"<<endl;
    cout<<"2) Vivo        Rs.20000"<<endl;
    cout<<"3) Oppo        Rs.19000"<<endl;
    cout<<"4) Redmi       Rs.23000"<<endl;
    cout<<"5) Onenote     Rs.18000"<<endl;
    cout<<"6) Samsung     Rs.25000"<<endl;
    cout<<"Please enter your choice"<<endl;
    cin>>item;
    if (item=='1')
    {
        cout<<"Enter Quantity"<<endl;
        cin>>quantity;
        billAmount+=(40000*quantity);
    }
    else if (item=='2')
    {
        cout<<"Enter Quantity"<<endl;
        cin>>quantity;
        billAmount+=(19000*quantity);
    }
    else if (item=='3')
    {
        cout<<"Enter Quantity"<<endl;
        cin>>quantity;
        billAmount+=(23000*quantity);
    }
    else if (item=='2')
    {
        cout<<"Enter Quantity"<<endl;
        cin>>quantity;
        billAmount+=(18000*quantity);
    }
    else if (item=='2')
    {
        cout<<"Enter Quantity"<<endl;
        cin>>quantity;
        billAmount+=(25000*quantity);
    }
    else{
        cout<<"You have enter wrong value, please type again"<< endl;
        goto mobilevel;
    }
  }
  
 return billAmount;
}


int main(){
    char startValue,choiceagain;
    float onlineShopping(void);
    startlevel:
    cout<<"Please press s to start shopping"<<endl;
    start:
    cin>>startValue;
    if (startValue=='s'|| startValue=='S')
    {
        float totalAmount=onlineShopping();
        cout<<"Total Bill Amount is Rs."<<totalAmount<<endl;
        shoppingagain:
        cout<<"Do you want shopping again?[Y/N]"<<endl;
        cin>>choiceagain;
        if (choiceagain=='y'|| choiceagain=='Y')
        {
            goto startlevel;
        }
        else if (choiceagain=='n'|| choiceagain=='N')
        {
            cout<<"Thanks for shopping!!"<<endl;
        }
         else
       {
        cout<<"You have enter wrong value, please type again"<< endl;
        goto shoppingagain;
       }
    
    }
    else
    {
        cout<<"You have enter wrong value, please enter s"<< endl;
        goto start;
    }
}