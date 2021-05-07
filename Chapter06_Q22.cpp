#include<iostream>
using namespace std;
//function prototype
bool isPrime(int num);
//driver program
int main()
{
    int integer;//int variable to store user input
    bool result;//bool variable to store true or false

    cout << "Enter a number. If the number is prime, I will display true, if the number is not prime, ";
    cout << "I will display false." << endl;
    cin >> integer;//user input is assigned to integer
    cout << endl;

    result = isPrime(integer);//calling function isprime and assigning returned value to variable "result"
    //display true or false depending on what is returned from isPrime
    if (result == true)
        cout << "true";
    if (result == false)
        cout << "false";

    cout << endl << endl;

    return 0;
}

bool isPrime(int num)//boolean function to determine whether number is prime or not
{
    bool prime = true;//sets value as true automatically
    for (int i = 2; i <= num / 2; i++)//tests whether any numbers greater than two or less than/equal to the number being tested are
    //divisible by the number being tested and changes value from true to false if necessary
    {   if (num % i == 0)
        prime = false;
        break;
    }
    return prime;//returns value "prime" which stores either true or false
}