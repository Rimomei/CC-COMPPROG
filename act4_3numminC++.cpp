#include <iostream> 
using namespace std;
 
int main(){

    int num1, num2, num3;

    cout<<"Enter First Number: ";
    cin>> num1;
    printf("\nSecond Number: ");
    cin>> num2;
    printf("\nThird Number: ");
    cin>> num3;

    if (num1 <= num2 && num1 <= num3)
        cout<<num1<<" is the smallest number.";

    else if (num2 <= num1 && num2 <= num3)
        cout<<num2<<" is the smallest number.";

    else
        cout<<num2<<" is the smallest number.";

    return 0;
}