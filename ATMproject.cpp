#include <iostream>
using namespace std; 
#include <string> ;

class user {

public : 

 int pin ,acc , balance = 0 , num , deposite , withdrawl, oldpin , newpin;
string name;

};

class userinput : public user {
public:

void takeacc (){

     cin >> acc ;
};

void takepin (){

    cin >> pin ;
};

void takename (){

    getline(cin,name);
}

};

class useroutput : public user {
public :

void showmenu() {

    cout << "\n====== ATM MENU ======\n"
         << "1. Check Balance\n"
         << "2. Deposit Money\n"
         << "3. Withdraw Money\n"
         << "4. Change PIN\n"
         << "5. Exit\n";
}

void numselect() {

    cout << "--\nPlease enter a valid number between 1 to 5: \n";
 
cin >> num;

}
void runmenu() {

    switch (num){

case 1 : 

cout << "Account number: " << acc << endl;
cout << "Account holder name: " << name << endl;
cout << "Available balance: " << balance << endl;
break;

case 2 : cout << "Enter amount for deposite\n" ;

cin >> deposite ;

if (deposite > 0){

cout << "--------deposite successful---------\n";
cout << "Available balance: " << balance + deposite ;
balance = balance + deposite ;
}

else { cout << " Error! = deposite cannot be negative";}

break;

case 3 : cout << "Enter money to be withdrawl: ";
cin >> withdrawl ;

if (withdrawl <= balance) {
cout << "--------Withdrawl successful--------\n";
balance = balance - withdrawl ;
cout << "available balance: " << balance << endl;

}
else { 
    cout << "Insufficient balance !\n ";
}

break; 

case 4 : cout << "Enter old pin: ";
cin >> oldpin;

if(oldpin == pin){
cout << "Enter new pin: \n";
cin >> newpin;
pin = newpin;
cout << "Pin has been changed successfully! \n";

}
else { 
    cout << "Error! = invalid pin\n";
}

break;

case 5 : cout << "Thank you for using our ATM.\n";
cout << "Have a nice day!\n";
    }
}

};




int main() {

   int num;
cout << "------------------Welcome to charchit ATM------------------\n\n" ;
cout << "Please enter your name: ";

userinput obj1;

obj1.takename();


cout << "Enter your account number: ";

obj1.takeacc();

cout << "Set up 4 digit pin: \n";

obj1.takepin();

cout << "--------Login successful--------\n";

useroutput obj2;
obj2.showmenu();

obj2.numselect();

obj2.runmenu();

while (obj2.num != 5){
obj2.showmenu();

obj2.numselect();

obj2.runmenu();

}



return 0; }