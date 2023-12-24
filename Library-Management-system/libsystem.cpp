#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class library
{
private:
  //blank
public:
   int id;
   char name[100];
   char author[100];
   char student[100];
   int price;
   int pages;
};


int main(){
   library lib[20];
   int input=0;
   int count=0;

   while (input!=3)
   {
     cout<<"Enter 1 to input details like id,name,author,student,price,pages"<<endl;
     cout<<"Enter 2 to display details"<<endl;
     cout<<"Enter 3 to quit"<<endl;
     cin>>input;

     switch (input)
     {
     case 1:
         start:
         cout<<"Enter book ID"<<endl;
         cin>>lib[count].id;
         cout<<"Enter book name"<<endl;
         cin.getline(lib[count].name,100,'$');
         cout<<"Enter Author's name"<<endl;
         cin.getline(lib[count].author,100,'$');
         cout<<"Enter Student's name"<<endl;
         cin.getline(lib[count].student,100,'$');
         cout<<"Enter price"<<endl;
         cin>>lib[count].price;
         cout<<"Enter pages"<<endl;
         cin>>lib[count].pages;
         count++;
         break;

     case 2:
         for (int i = 0; i < count; i++)
         {
            cout<<"Book ID :"<<lib[i].id<<endl;
            cout<<"Book name :"<<lib[i].name;
            cout<<"Author's name :"<<lib[i].author;
            cout<<"Student's name :"<<lib[i].student;
            cout<<"Price :"<<lib[i].price<<endl;
            cout<<"Pages :"<<lib[i].pages<<endl;
         }
         
         break;
      case 3:
          exit(0);
          break;
      default:
         cout<<"You have entered wrong value , Please type again"<<endl;
         goto start;
     }

   }
   
}