#include<iostream>
using namespace std;

int returnTotalBill(){
 cout<<"---------------------------Welcome to Online Food Order---------------------------"<<endl;
 cout<<"-------------------------Please follow below instructions-------------------------"<<endl;
 cout<<"Step 1 : Please press s to start your order"<<endl;
 cout<<"Step 2 : You can order both veg and non-veg items"<<endl;
 cout<<"Step 3 : Please press a to select veg items"<<endl;
 cout<<"Step 4 : Please press b to select non-veg items"<<endl;
 cout<<"Step 5 : You will get your final bill after your order"<<endl;
start:
 char c;cin>>c;
 char item;
 char vegItem,nonvegItem;
 int billAmount=0;
 char selectAgain;
 if (c=='s'|| c=='S')
 {
    items:
    cout<<"Which type of food items you want?"<<endl;
    cout<<"a)veg items                     b)non-veg items"<<endl;
    cin>>item;
    if (item=='a'||item=='A')
    {
        cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
        cout<<"1) Paneer butter masal  Rs.80"<<endl;
        cout<<"2) Veg Fried Rice       Rs.90"<<endl;
        cout<<"3) Mutter Paneer        Rs.70"<<endl;
        cout<<"4) Mushroom Paratha     Rs.15"<<endl;
        cout<<"5) Veg Roll             Rs.20"<<endl;
        vegItemlist:
        cin>>vegItem;
        if (vegItem=='1')
        {
            billAmount+=80;
        }
        else if (vegItem=='2')
        {
            billAmount+=90;
        }
        else if (vegItem=='3')
        {
            billAmount+=70;
        }
        else if (vegItem=='4')
        {
            billAmount+=15;
        }
        else if(vegItem=='5')
        {
            billAmount+=20;
        }
        else 
        {
            cout<<"You have entered wrong order. Please try again!!"<<endl;
            goto vegItemlist;
        }

      cout<<"Do you want to add more items[Y/N]:"<<endl;
      cin>>selectAgain;
      if (selectAgain=='y' || selectAgain== 'Y')
      {
        goto items;
      }
      else{
        return billAmount;
      }

    }
    else if (item=='b'||item=='B')
    {
        
        cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
        cout<<"1) Chicken butter masal  Rs.120"<<endl;
        cout<<"2) Egg Fried Rice        Rs.90"<<endl;
        cout<<"3) Chicken Kosha         Rs.80"<<endl;
        cout<<"4) Chicken Roll          Rs.30"<<endl;
        cout<<"5) Egg Roll              Rs.20"<<endl;
        nonvegItemlist:
        cin>>nonvegItem;
        if (nonvegItem=='1')
        {
            billAmount+=120;
        }
        else if (nonvegItem=='2')
        {
            billAmount+=90;
        }
        else if (nonvegItem=='3')
        {
            billAmount+=80;
        }
        else if (nonvegItem=='4')
        {
            billAmount+=30;
        }
        else if(nonvegItem=='5')
        {
            billAmount+=20;
        }
        else 
        {
            cout<<"You have entered wrong order. Please try again!!"<<endl;
            goto nonvegItemlist;
        }

      cout<<"Do you want to add more items[Y/N]:"<<endl;
      cin>>selectAgain;
      if (selectAgain=='y' || selectAgain== 'Y')
      {
        goto items;
      }
      else{
        return billAmount;
      }

    }
    else{
        cout<<"You have entered wrong value, please try again"<<endl;
        goto items;
    }
    
 }
 else
 {
    cout<<"You have entered wrong value. please press s"<<endl;
    goto start;
 }
 
 return billAmount;
}

int main(){
  int returnTotalBill(void);
  int totalBillAmount=returnTotalBill();
  cout<<"Your Total Bill Amount is Rs."<<totalBillAmount<<endl;
  cout<<"Thank you for your order!"<<endl;
}