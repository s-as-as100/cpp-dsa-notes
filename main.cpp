/* #include <iostream>
using namespace std;

int main()
{
    cout << "Hello, world!" << endl;
    return 0;
}
*/
// Create a program to assign value and print variables, make an int variable salary with a value of 50, 000
/*
#include <iostream>
using namespace std;

int main()
{
    int salary = 50000;

    cout << "salary ";
    cout << salary;

    return 0;
}
    */

// Create two variables number1 and number2 with values 123 and 12451.34. Print number1 and number2 in different lines.

/*
#include <iostream>
using namespace std;

int main()
{
    int number1 = 123;
    float number2 = 12451.34;

    cout << number1 << endl;
    cout << number2 << endl;

    return 0;
}


// 1 .Create a program to find the area of square having side of 8.7 units.

#include <iostream>
using namespace std;

int main()
{

    int side = 8.7;
    double areaOfSquare = side * side;

    cout << "Area of square is " << areaOfSquare;

    return 0;
}



// Create a program to divide N candies to M number of students.Suppose you have to divide 18 candies among 4 students equally.How many candies will each student get if candies must be divided equally ?

//  And how many candies will be left that cannot be divided?

#include <iostream>
using namespace std;

int main()
{

    int candies = 18;
    int noOfStudent = 4;

    int candiesCentPerStudent = candies / noOfStudent;
    int candiesLeft = candies % noOfStudent;

    cout << "Candies per student " << candiesCentPerStudent << endl;
    cout << "Candies left " << candiesLeft << endl;

    return 0;
}



// The task is to input a number from the user and print 1 if it's odd; otherwise, print 0.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Input the number : ";
    cin >> n;

    bool result = (n % 2 == 1); // if result is 1, then it is odd, else not

    cout << result << endl;

    return 0;
}



Imagine we are writing a program to grade students based on their scores.We want to categorize them into four grades : A, B, C, and D, depending on their score.Here's the problem:

If a student's score is 90 or above, they get an "A." If the score is between 80 and
                                                                                                                                           89,
they get a "B." If the score is between 70 and 79, they get a "C." If the score is between 60 and 69, they get a "D." If the score is below 60, they fail and get an "F."




#include <iostream>
using namespace std;

int main()
{
    int studentScore = 73;
    int gradeAScore = 90;

    if (studentScore >= gradeAScore)
    {
        cout << "Grade A" << endl;
    }

    else if (studentScore >= 80)
    {

        cout << "Grade B" << endl;
    }

    else if (studentScore >= 70)
    {
        cout << "Grade c" << endl;
    }
}

You have three distinct integer numbers : `num1, num2, and num3.Write a C++ program to determine and display
which number is the largest, the second largest, and the smallest among the three.



#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "enter a num1" << endl;
    cin >> num1;
    cout << "enter a num2" << endl;
    cin >> num2;
    cout << "enter a num3" << endl;
    cin >> num3;

    int largest, secondLargest, smallest;

    if (num1 > num2 && num1 > num3)
    {
        largest = num1;
        if (num2 > num3)
        {
            secondLargest = num2;
            smallest = num3;
        }
        else
        {
            secondLargest = num3;
            smallest = num2;
        }
    }

    else if (num2 > num1 && num2 > num3)
    {

        largest = num2;

        if (num3 > num1)
        {
            secondLargest = num3;
            smallest = num1;
        }
        else
        {
            secondLargest = num1;
            smallest = num3;
        }
    }

    else
    {
        largest = num3;

        if (num1 > num2)
        {
            secondLargest = num1;
            smallest = num2;
        }
        else
        {
            secondLargest = num2;
            smallest = num1;
        }
    }

    cout << "largest no " << largest << endl;
    cout << "Second largest no" << secondLargest << endl;
    cout << "smallest no" << smallest << endl;
}


// You are developing a simple program for a movie theater in India.
//  The theater has different ticket prices based on the age of the moviegoers. Here are the pricing rules in Indian Rupees (₹):

Children (age 12 and below) pay ₹100 per ticket.
Adults (age 13 to 64) pay ₹200 per ticket.
Seniors (age 65 and above) pay ₹150 per ticket.


#include <iostream>
using namespace std;

int main()
{
    int age;
    int ticketPrice;
    cout << "Enter the age of person";
    cin >> age;

    if (age <= 12)
    {
        ticketPrice = 100;
    }

    else if (age >= 13 && age <= 64)
    {
        ticketPrice = 200;
    }

    else
    {
        ticketPrice = 150;
    }

    cout << "Ticket price " << ticketPrice << endl;

    return 0;
}

// Print Numbers From 5 to 1 Using while Loop

#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    while (num >= 1)
    {

        cout << num << endl;
        num--;
    }

    return 0;
}


// Write a program that takes two inputs(a and b) from the user and prints the numbers from a to b using while loop.



#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter a number A";
    cin >> a;
    cout << "Enter a number B";
    cin >> b;

    cout << "Numbers from " << a << " to " << b << " are: ";

    while (a <= b)
    {
        cout << a << " ";
        a++;
    }

    return 0;
}

 wap Factorial Calculation



#include <iostream>
using namespace std;

int main()
{

    int num;
    int factorial = 1;

    cout << "Enter a number" << endl;
    cin >> num;

    if (num < 0)
    {
        cout << "Please enter a positive number " << endl;
    }

    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
    }

    cout << "Factorail of a number is " << factorial << endl;
}

// factorail 1*2= 2  , n=3  --  factorail = 1*3= 3, n =2 --- facto = 2*3=6  --  fact = 6*3 =18


Write a program

*****
*****
*****



#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cout << " * ";
        }

        cout << endl;
    }

    return 0;
}

wap

*
**
***
****
*****
******



#include <iostream>
using namespace std;

int main()
{
    int noOfRows;

    cout << "Enter a no of rows";
    cin >> noOfRows;

    for (int i = 0; i < noOfRows; i++)
    {
        for (int j = 0; i <= j; j++)
        {
            cout << " * ";
        }

        cout << endl;
    }

    return 0
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1




#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number " << endl;
    cin >> num;

    // for 1st half of diamond
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << j;
        }

        cout << endl;
    }

    // for second half

    for (int i = num - 1; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
Write a C++ program to print alphabets from a to z using for loop.





#include <iostream>
using namespace std;
int main()
{

    cout << "Alphabets from a - z are: " << " ";

    for (int i = 97; i <= 122; i++)
    {

        cout << char(i);
    }

    return 0;
}

Write a C++ program to calculate the sum of all even and odd numbers from 1 to N separately.



#include <iostream>
using namespace std;

int main()
{
    int num;
    int sumOfEvenNo = 0;
    int sumOfOddNo = 0;

    cout << "Enter a number" << endl;
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {

            sumOfEvenNo += i
        }

        else
        {
            sumOfOddNo += i
        }
    }

    cout << "Sum of Even no" << sumOfEvenNo << endl;
    cout << "Sum of Odd no" << sumOfOddNo << endl;

    return 0;
}

Write a C++ program to reverse a given number

num=4321;



#include <iostream>
using namespace std;

int main()
{

    int num, rev = 0;

    cout << "Enter a number";
    cin >> num;

    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);

         num /= 10;
    }

    cout << "Reverse = " << rev;

    return 0;
}

Print Multiplication table of a given number


#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {

        cout << num << " * " << i << " = " << (num * i) << endl;
    }

    return 0;
}

Create a program to calculate the sum of integers entered by the user until the user enters 0 or negative integer.

Initialise a variable named total with value 0 at the beginning.


#include <iostream>
using namespace std;

int main()
{
    int num, total = 0;

    for (int i = 0; i < num; i++)
    {
        total += i
    }

    return 0;
}
Create a program to print odd numbers between 1 and n, where n is a positive integer entered by the user.


#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter a number";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {

        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            cout << i;
        }
    }

    return 0;
}

  Funtion in cpp



#include <iostream>
using namespace std;

// function declaration:

void DisplayMessage()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Hello world" << endl;
    }
}

int main()
{
    DisplayMessage();
    return 0;
}



// two terms are commly used in c++
// 1. formal parameter

#include <iostream>
using namespace std;

void Subtract(int a, int b)
{

    cout << a - b;
}

int main()
{

    int a = 12;
    int b = 32;

    Subtract(a, b);

    return 0;
}

// 2. Actual  parameter


pass by reference
*/

#include <iostream>
using namespace std;
// Notice we have used '&' this time in the function declaration.
// By using '&', We are using a reference to the variable a.
void Address(int &a)
{
    cout << "Address of 'a' variable in Address() function: " << &a << endl;
}

int main()
{
    int a = 10;
    cout << "Address of 'a' variable in main function: " << &a << endl;
    Address(a);
    return 0;
}
