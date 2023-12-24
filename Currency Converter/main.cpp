#include<iostream>
using namespace std;

int main()
{

     char currency1,currency2,c;

    start:
    cout << "----------------Welcome to Currency Converter Application-----------------" <<endl;
    cout <<"*****************please follow below instruction*****************"<<endl;
    cout << "You can have currencies dollar,rupees,euro,pound" <<endl;
    cout <<"you have to type a,b,c,d respectively for dollar,rupees,euro,pound"<<endl;
   
    cout << "Enter currency one which you want to convert" <<endl;
    cout << "Enter currency two in  which you want to convert" <<endl;
    agains:
     cout <<"Please press s to covert currency "<<endl;
     cin>>c;

    if(c=='s' || c=='S')
    {
        float converter(void);
        float finalvalue=converter();
        cout <<"Result is"<<finalvalue<<endl;
        again:
        cout<<"Do you want to use application again y or n?" <<endl;
        cin>>c;
        if(c=='y' || c=='Y')
        {
            goto start;
        }
        else if(c=='n' || c=='N')
        {
            cout <<"Thank you for using these application"<<endl;
        }

        else
        {
        cout<<"Please press the currect value "<<endl;
        goto again;
        }
    }

    else
    {
         cout<<"Please press the currect value "<<endl;
         goto agains;
    }
  
}

float converter()
{
    char currency1,currency2;
    float currencyval1,currencyval2;
    currencyval:
    cout <<"enter currency name 1" <<endl;
    cout <<"(a)dollar (b)rupees (c)euro (d)pound" <<endl;
    cin >>currency1 ;

    cout <<"enter currency value 1" <<endl;
    cin >>currencyval1;

   switch(currency1)
   {
    case 'a':
    {
    current1:
     cout <<"enter currency 2 name" <<endl;
    cout <<"(a)dollar (b)rupees (c)euro (d)pound" <<endl;
    cin >>currency2;

    if( currency2=='a')
       currencyval2=currencyval1*1;

    else if(currency2=='b')
        currencyval2=currencyval1*73.84;

    else if(currency2=='c')
        currencyval2=currencyval1*0.85;

    else if(currency2=='d')
        currencyval2=currencyval1*0.72;
    else 
    {
         cout<<"Please press the currect value "<<endl;
         goto current1;
    }

    break;
    }

   case 'b':
   {
    current2:
    cout <<"enter currency 2 name" <<endl;
    cout <<"(a)dollar (b)rupees (c)euro (d)pound" <<endl;
    cin >>currency2;

    if( currency2=='a')
       currencyval2=currencyval1*0.01;

    else if(currency2=='b')
        currencyval2=currencyval1*1;

    else if(currency2=='c')
        currencyval2=currencyval1*0.01;

    else if(currency2=='d')
        currencyval2=currencyval1*0.009;
    else
    {
     cout<<"Please press the currect value "<<endl;
     goto current2;
    }

     break;

   }
    case 'c':
    {
     current3:
    cout <<"enter currency 2 name" <<endl;
    cout <<"(a)dollar (b)rupees (c)euro (d)pound" <<endl;
    cin >>currency2;

    if( currency2=='a')
       currencyval2=currencyval1*1.16;

    else if(currency2=='b')
        currencyval2=currencyval1*86.37;

    else if(currency2=='c')
        currencyval2=currencyval1*1;

    else if(currency2=='d')
        currencyval2=currencyval1*0.85;
    
    else
    {
     cout<<"Please press the currect value "<<endl;
     goto current3;
    }


    break;
    }


    case 'd':
    {
     current4:
    cout <<"enter currency 2 name" <<endl;
    cout <<"(a)dollar (b)rupees (c)euro (d)pound" <<endl;
    cin >>currency2;


    if( currency2=='a')
       currencyval2=currencyval1*1.37;

    else if(currency2=='b')
        currencyval2=currencyval1*101.20;

    else if(currency2=='c')
        currencyval2=currencyval1*1.17;

    else if(currency2=='d')
        currencyval2=currencyval1*1;

    else
    {
     cout<<"Please press the currect value "<<endl;
     goto current4;
    }
    break;
    }

   default:
   {
    cout<<"Please press the currect value "<<endl;
    goto currencyval;
   }
    break;

   }
   return currencyval2;
}