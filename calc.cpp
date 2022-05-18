#include <iostream>
#include <cmath>

using namespace std;

enum class perform_operation {Add,Sub,Mult,Div,SR};


struct Calculator {
perform_operation po ;
Calculator(perform_operation Perform_Operation) { po = Perform_Operation;}

int perform(int x , int y) {
switch(po) {
case perform_operation::Add: {
    return x + y;
}break;
case perform_operation::Sub: {
    return x - y;
}break;
case perform_operation::Div: {
    return x/y;
}break;
case perform_operation::Mult: {
    return x * y;
}break;
case perform_operation::SR: {
    return sqrt(x);
}
default: {
cout<<" Invalid operation ";
    return 0;
}
}
}
};
int main() {
int fNum,secNum ;
string Perform_Operation;
cout<<" Please enter the first number:  ";
cin>>fNum;
cout<<"Please enter the second number:  ";
cin>>secNum;
cout<< " \n\nwhich Operation would you like to perforrm? Enter 1 for Operations are Addition, 2 Subtraction, 3 Division, 4 Multiplication, and 5 SquareRoot \n\n";

cin>>Perform_Operation;

perform_operation po{ };

if (Perform_Operation == "Addition") {
    po = perform_operation::Add;}

else if (Perform_Operation == "Subtraction") {
    po = perform_operation::Sub;}

else if(Perform_Operation == "Multiplication") {
    po = perform_operation::Mult;}

else if(Perform_Operation == "Division") {
    po = perform_operation::Div;}

else if(Perform_Operation == "SquareRoot") {
    po = perform_operation::SR;}

Calculator bc(po);
auto result= bc.perform(fNum,secNum);
cout<< "The answer is : "<<result;
}

