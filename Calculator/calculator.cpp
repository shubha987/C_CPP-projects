#include<iostream>
using namespace std;

// addition operations
int addition(){
    int a;
    int total=0;
    char choice;
    add:
    cout<<"Enter a number"<<endl;
    cin>>a;
    total+=a;
    cout<<"Do you want to add more numbers[Y/N]:"<<endl;
    addAgain:
    cin>>choice;
    if (choice=='y'||choice =='Y')
    {
      goto add;
    }
    else if (choice=='n'|| choice=='N')
    {
        return total;
    }
    else{
        cout<<"You have entered a wrong input. Selec it again"<<endl;
        goto addAgain;
      }
  return total;
}

// multiplication operations

int multiplication(){
    int a;
    int total=1;
    char choice;
    mul:
    cout<<"Enter a number"<<endl;
    cin>>a;
    total*=a;
    cout<<"Do you want to multiply more numbers[Y/N]:"<<endl;
    multiplyAgain:
    cin>>choice;
    if (choice=='y'||choice =='Y')
    {
      goto mul;
    }
    else if (choice=='n'|| choice=='N')
    {
        return total;
    }
    else{
        cout<<"You have entered a wrong input. Selec it again"<<endl;
        goto multiplyAgain;
      }
  return total;
}

// Subtraction Operations
int subtraction(){
    int a,b;
    int total;
    char choice;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if (a>b)
    {
        total=a-b;
    }
    else{
        total=b-a;
    }
  return total;
}

// division operations
int division(){
    int a,b;
    int total;
    char choice;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if (a>b)
    {
        total=a/b;
    }
    else{
        total=b/a;
    }
  return total;
}
//modulo operation
int modulo(){
    int a,b;
    int total=0;
    char choice;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if (a>b)
    {
        total=a%b;
    }
    else{
        total=b%a;
    }
  return total;
}


int main(){
    char value,again;
    start:
    cout<<"------------------------Welcome to Our Calculator Applications------------------------"<<endl;
    cout<<"**************************Please Follow the Instructions**************************"<<endl;
    cout<<"1) Please press a for addition"<<endl;
    cout<<"2) Please press s for subtraction"<<endl;
    cout<<"3) Please press m for multiplication"<<endl;
    cout<<"4) Please press d for division"<<endl;
    cout<<"5) Please press o for modulo"<<endl;
    cin>>value;
    int addition(void);
    int multiplication(void);
    int subtraction(void);
    int division(void);
    int modulo(void);
    if (value== 'a' || value=='A')
    {
       int addvalue=addition();
      cout<<"Addition is "<<addvalue<<endl;
      cout<<"Do you want to use our application again[Y/N]"<<endl;
      addAgain:
      cin>>again;
      if (again=='y' || again == 'Y')
      {
        goto start;
      }
      else if (again=='n' || again=='Y')
      {
        cout<<"Thank you for using our applocation"<<endl;
      }
      else{
        cout<<"You have entered a wrong input. Selec it again"<<endl;
        goto addAgain;
      }
      
    }
    else if (value== 'm' || value=='M')
    {
       int mulvalue=multiplication();
      cout<<"Multplication is "<<mulvalue<<endl;
      cout<<"Do you want to use our application again[Y/N]"<<endl;
      mulAgain:
      cin>>again;
      if (again=='y' || again == 'Y')
      {
        goto start;
      }
      else if (again=='n' || again=='Y')
      {
        cout<<"Thank you for using our applocation"<<endl;
      }
      else{
        cout<<"You have entered a wrong input. Selec it again"<<endl;
        goto mulAgain;
      }
      
    }
     else if (value== 's' || value=='S')
    {
       int subValue=subtraction();
      cout<<"Subtracation is "<<subValue<<endl;
      cout<<"Do you want to use our application again[Y/N]"<<endl;
      subAgain:
      cin>>again;
      if (again=='y' || again == 'Y')
      {
        goto start;
      }
      else if (again=='n' || again=='Y')
      {
        cout<<"Thank you for using our applocation"<<endl;
      }
      else{
        cout<<"You have entered a wrong input. Selec it again"<<endl;
        goto subAgain;
      }
      
    }
    else if (value== 'd' || value=='D')
    {
       int divValue=division();
      cout<<"Division is "<<divValue<<endl;
      cout<<"Do you want to use our application again[Y/N]"<<endl;
      divAgain:
      cin>>again;
      if (again=='y' || again == 'Y')
      {
        goto start;
      }
      else if (again=='n' || again=='Y')
      {
        cout<<"Thank you for using our applocation"<<endl;
      }
      else{
        cout<<"You have entered a wrong input. Selec it again"<<endl;
        goto divAgain;
      }
      
    }
    else if (value== 'o' || value=='O')
    {
       int modValue=modulo();
      cout<<"modulo is "<<modValue<<endl;
      cout<<"Do you want to use our application again[Y/N]"<<endl;
      modAgain:
      cin>>again;
      if (again=='y' || again == 'Y')
      {
        goto start;
      }
      else if (again=='n' || again=='Y')
      {
        cout<<"Thank you for using our applocation"<<endl;
      }
      else{
        cout<<"You have entered a wrong input. Selec it again"<<endl;
        goto modAgain;
      }
      
    }
    else{
        cout<<"You have entered a wrong input. Please Enter again"<<endl;
        goto start;
    }
}