#include <iostream>
using namespace std;

void showMenu(){
  cout<<"**********MENU**********"<<endl;
  cout<<"1. Check balance"<< endl;
  cout<<"2. Deposit"<< endl;
  cout<<"3. Withdraw"<< endl;
  cout<<"4. Exit"<< endl;
  cout<<"************************"<<endl;
  
}

int main() 
{
   // check balance,deposit,withdraw, show menu
   int option;
   double balance=500;
   do{
     showMenu();
     cout<<"Please choose option: ";
     cin>>option;
     system("cls");
     switch(option){
       case 1: cout<<"Balance is: "<< balance << " $"<< endl; break;
       case 2: cout<<"Deposit amount:";
        double depositAmount;
        cin>> depositAmount;
        balance+= depositAmount;
        break;
       case 3: cout<<"withdraw amount:";
        double widthdrawAmount;
        cin >> widthdrawAmount;
        if(widthdrawAmount<=balance)
           balance -= widthdrawAmount;
        else
            cout<<"Insufficient Funds"<<endl;
        break;
      
     } 
    } while(option!=4);
   
   
   system("pause>0");
}
