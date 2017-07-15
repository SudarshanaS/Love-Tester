// Shreya Sudarshana Love Tester Program
// Cisp 360 4/28/2017
// Purpose of program: Input 2 names, output random number to 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//function will return sum of all digits
int sumOfDigits(int num)
{
    int sum=0;
    while(num>0)
    {
        sum += (num%10);
        num /= 10;
    }
    return sum;
}
 
int main()
{
 
    string name1;
    string name2;
    int sum, sum1;
    unsigned i;
    int choice;
    float perc=0;
    double checkInput(bool& dontQuit);
 
    do
    {
    	cout << "This program is a love tester. First you will input 2 names and then I will output the percentage of your compatibility." << endl;
        cout << ("Enter the first name/object: ") << endl;
        
        // I changed this to name1 (orignally name2)
        getline(cin, name1);
        
        
        // this will end the program if the user inputs the string quit
        if(name1 == "quit") {
            exit(0);
        }
        
        cout << ("Enter the second name/object: ") << endl;
        getline(cin, name2);
        
        

 
        sum=0;
        

        for (i = 0; i < name1.length(); i++)
        {
            sum+=tolower(name1[i]);
        }
 
        sum1=0;
        
        // I changed the bound to name2.length (originally name1.length())
        for (i = 0; i < name2.length(); i++)
        {
            sum1+=tolower(name2[i]);
        }
 
        perc=(sumOfDigits(sum)+sumOfDigits(sum1)) + 40;
        if(perc > 100) perc = 100;
 
        cout << ("Your love percentage is: ") << perc << "%" << endl;
    }while(choice!=1);
 
    return 0;
}

