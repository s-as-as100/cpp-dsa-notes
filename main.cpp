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


*/

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