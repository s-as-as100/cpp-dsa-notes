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

*/

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