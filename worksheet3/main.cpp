#include <iostream>
using namespace std;

/*
1. Write for, do-while, and while statements to compute the following sums and
products.
a. 1+2+3+…+100
b. 5+10+15+…+50
c. 1+1/2+1/3+1/4+…1/15
d. 1*2*3*…*20 
*/

// 1. A

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout<< sum;

    return 0;
}

// B

int main() {
    int sum = 0;
    for (int i = 5; i <= 50; i += 5) {
        sum += i;
    }
    cout<< sum;

    return 0;
}

// C

int main() {
    int sum = 0;
    for (int i = 1; i <= 15; i++) {
        sum += (1/i);
    }
    cout<< sum;

    return 0;
}

// D

int main() {
    int product = 1;
    for (int i = 1; i <= 20; i++) {
        product *= i;
    }
    cout<< product;

    return 0;
}

/*
2. write an application to print out the numbers 10 through 49 in the following manner
    10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29
    30 31 32 33 34 35 36 37 38 39
    40 41 42 43 44 45 46 47 48 49 
*/

int main() {
int num = 10;
    for (int a = 0; a < 4; a++) {
        for (int i = 0; i < 10; i++, num++) {
            cout << num << " ";
        }
        cout<< endl;
}
    return 0;
}



/*
3. A prime number is an integer greater than one and divisible only by itself and one.The first seven prime numbers are 2, 3, 5, 7, 11, 13, and 17. Write a program that displays all the prime numbers between 1 and 100. 
*/

int main()
{
    for (int i = 1; i <= 100; i++) {
        for (int a = i - 1; a >= 1; a--) {
                //2 is a special case prime number
            if (i == 2) {
                cout << i << " ";
            }
            if (i % a == 0) {
                // its not prime number
                break;
            }
            // if it reaches upto this point then its a prime number
            if (a == 2) {
                cout<< i << " ";
            }
        }
    }
    return 0;
}



/*
4. Write a C++ program that counts the number of digits in an integer number. For example; 23,498 has five digits
*/

int main()
{
    cout<< "This program counts the number of digits in an integer. \n";
    double num;
    cout<< "Please input a number \n";
    cin>> num;
    bool isInRange = false; // checks whether our number is in a certain range of numbers
    // converts a negative number to a positive number because the negativity doesn't affect the number of digits a number has
    if (num < 0) {
        num *= -1;
    }
    // runOnce is used for running our program only once using conditional and incrementation
    int min = 0, max = 10, runOnce = 0, numberOfDig = 1;
    while (!isInRange) {
        if (num >= min && num < max) {
            isInRange = true;
            break;
        }
        numberOfDig++;
        min *= 10;
        max *= 10;
        if (runOnce = 0) {
            min += 10;
            runOnce++;
        }
    }
    cout<< num << " has " << numberOfDig << " digit(s).";
    return 0;
}


/*
5. Write a C++ application that can compute the letter grade of a student after accepting
the student’s mid and final mark. The program should only accept mid result [0-40]
and final [0- 60]. If the data entered violates this rule, the program should display that
the user should enter the mark in the specified range. The program is also expected to
run until the user refuses to continue. 
*/


int main()
{
    float midResult, finalResult, totalResult;
    cout<< "enter mid result \n";
    cin>> midResult;

    while (!(midResult >= 0 && midResult <= 40)) {
        cout<< "please input a mid that is between 0 and 40 \n";
        cin>> midResult;
    }

    cout<< "enter final result \n";
    cin>> finalResult;

    while (!(finalResult >= 0 && finalResult <= 60)) {
        cout<< "please input a fin that is between 0 and 60 \n";
        cin>> finalResult;
    }

    totalResult = midResult + finalResult;
    cout<< "Result: " << totalResult << endl << "Grade: ";

    

    if (totalResult >= 90 && totalResult <= 100) {
        cout<< "A+";
    } else if (totalResult >= 85 && totalResult < 90) {
        cout<< "A";
    } else if(totalResult >= 80 && totalResult < 85) {
        cout<< "A-";
    } else if (totalResult >= 75 && totalResult < 80) {
        cout<< "B+";
    } else if (totalResult >= 70 && totalResult < 75) {
        cout<< "B";
    } else if (totalResult >= 65 && totalResult < 70) {
        cout<< "B-";
    } else if (totalResult >= 60 && totalResult < 65) {
        cout<< "C+";
    } else if (totalResult >= 55 && totalResult < 60) {
        cout<< "C";
    } else if (totalResult >= 50 && totalResult < 55) {
        cout<< "C-";
    } else if (totalResult >= 40 && totalResult < 50) {
        cout<< "D";
    } else {
        cout<< "F";
    }



    return 0;
}


/*
6. Write a C++ program that accepts a positive number from the user and displays the factorial of that number. Use for loops to find the factorial of the number. 
*/



int main()
{
    int number;
    int factorial = 1;
    cout<< "Input a number"<< endl;
    cin>> number;

    for(int i = number; i > 1; i--) {
        factorial *= i;
    }

    cout<< factorial;

    return 0;
}


/*
7. Write a C++ code that computes the sum of the following series. Sum = 1! + 2! + 3! + 4! + …n! The program should accept the number from the user
*/

int main()
{
    int number;
    cout<< "input a number" << endl;
    cin>> number;
    int sum = 0;
    for (int i = 1; i <= number; i++) {
            int factorial = 1;
        for (int a = i; a > 1; a--) {
            factorial *= a;
        }
            sum += factorial;

    }

    cout<< sum;
    return 0;
}


/*
8. Using the ASCII table numbers, write a program to print the following output, using a
nested for loop. (Hint: the outer loop should loop from 1 to 5, and the inner loop’s
start variable should be 65, the value of ASCII “A”).
A
AB
ABC
ABCD
ABCDE 
*/




int main()
{
    int ascii = 65;
    for (int i = 5; i > 0; i--)  {
        for (int b = 5; b >= i; b--) {
            cout << char(ascii);
            ascii++;
        }
        cout<< "\n";
        ascii = 65;
    }
    return 0;
}


/*
9. Write a C++ program that displays the following output using their ASCII values.
a
bc
def
gehi
jklmn
opqrst 
*/



int main()
{
    int ascii = 97;
    for (int i = 6; i > 0; i--)  {
        for (int b = 6; b >= i; b--) {
            cout << char(ascii);
            ascii++;
        }
        cout<< "\n";

    }


    return 0;
}


/*
10. Write a C++ program that will print the following shapes.
A.
*
**
***
****
*****
B.
*****
****
***
**
*
C.
 *
 ***
 *****
 *******
*********
D.
 *
 ***
 *****
 ***
 * 

*/

// A

int main()
{
    for(int i = 5; i > 0; i--) {
        for (int a = 5; a >= i; a--) {
           cout<< "*";
        }
    cout << "\n";
    }

    return 0;
}


// B

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            cout<< "*";
        }
        cout<< endl;
    }

    return 0;
}

// C



/*
11. Write a weather-calculator program that asks for a list of the previous 10 days’
temperatures, computes the average, and prints the results. You have to compute the
total as the input occurs, then divide that total by 10 to find the average. Use a while
loop for the 10 repetitions. 
*/


int main()
{
    double sum = 0;
    double temperature;
    int i = 0;
    while(i < 10) {
        cin>> temperature;
        sum += temperature;
        i++;
    }

    double average = sum / 10;

    cout<< average;

    return 0;
}

/*
12. Write a C++ program using for loop that can compute the following summation of for i = 1 to i = 30 of (i / 3) * 2
*/

int main()
{
    double sum = 0;
    double calculated; 
    
    for (int i = 1; i <= 30; i++) {
        calculated = (i / 3.0) * 2.0;
        sum += calculated;
        
    }

    return 0;
}


/*
13. Write a C++ program that accepts marks of five students and then displays their
average. The program should not accept mark which is less than 0 and mark greater
than 100. 
*/


int main()
{
    float sum = 0;
    float mark, average;
    for (int i = 0; i < 5; i++) {
        cin>> mark;
        while (mark < 0 || mark > 100) {
            cout<< "the mark should be between 0 and 100. Please input again \n";
            cin>> mark;
        }
        sum += mark;
    }

    average = sum / 5;

    cout<< "your average is " << average;


    return 0;
}


/*
14. Develop a calculator program that computes and displays the result of a single
requested operation.
 E.g. if the input is
 15 * 20, then the program should display 15 * 20 equals 300
If the operator is not legal, as in the following example
24 ~ 25 then the program displays ~ is unrecognized operator
As a final example, if the denominator for a division is 0, as in the following
input: 23 / 0 then the program should display the following:
23 / 0 can’t be computed: denominator is 0. 
*/


int main()
{
    float num1, num2;
    char InputOperator;
    cout<< "please enter the first number \n";
    cin>> num1;

    cout<< "please enter the operation \n";
    cin>> InputOperator;

    cout<< "please enter the second number \n";
    cin>> num2;

    num1 = double(num1);
    num2 = double(num2);




    switch(InputOperator) {
        case '*':
            cout<< num1 << " " << InputOperator << " " << num2 << " equals " << num1 * num2;
            break;
        case '+':
            cout<< num1 << " " << InputOperator << " " << num2 << " equals " << num1 + num2;
            break;
        case '/':
            if (num2 == 0) {
                cout<< num1 << " " << InputOperator << num2 << " can’t be computed: denominator is 0";
                break;
            }
            cout<< num1 << " " << InputOperator << " " << num2 << " equals " << num1 / num2;
            break;
        case '-':
            cout<< num1 << " " << InputOperator << " " << num2 << " equals " << num1 - num2;
            break;
        default:
            cout<< InputOperator << " is unrecognized operator";
    }


    return 0;
}


/*
15. Use either a switch or an if-else statement and display whether a vowel or a
consonant character is entered by the user. The program should work for both lower
case and upper case letters. 
*/

#include <iostream>

using namespace std;

int main()
{
    char letter;
    std::cin>> letter;

    switch(letter) {
        case 'a':
        case 'A':
            std::cout<< "its a vowel";
            break;
        case 'e':
        case 'E':
            std::cout<< "its a vowel";
            break;
        case 'i':
        case 'I':
            std::cout<< "its a vowel";
            break;
        case 'o':
        case 'O':
            std::cout<< "its a vowel";
            break;
        case 'u':
        case 'U':
            std::cout<< "its a vowel";
            break;
        default:
            std::cout<< "its a consonant";
    }

    return 0;
}



/*
16. Write a C++ code to display only even numbers found between 0 and 20. 
*/



int main()
{
    for (int i = 2; i < 20; i += 2) {
        cout<< i << " ";
    }

    return 0;
}


/*
17. Write a C++ application that extracts a day, month and year and determine whether
the date is valid. If the program is given a valid date, an appropriate message is
displayed. If instead the program is given an invalid date, an explanatory message is
given. Note: to recognize whether the date is valid, we must be able to determine
whether the year is a leap year or not.
An example of the expected input/output behavior for a valid date follows
Please enter a date (dd mm yyyy) : 30 4 2006
30/4/2006 is a valid date
Please enter a date (dd mm yyyy) : 1 13 2006
Invalid month: 13
Please enter a date (dd mm yyyy) : 29 2 1899
Invalid day of month 29
If the year is a leap year, then February will have total of 29 days. Otherwise, it
will have 28 days. If the year is not a century year and is evenly divisible by 4,
then the year is a leap year. If the year is a century year (years whose last digits
are 00) and is evenly divisible by 400, then the year is a leap year. 
*/

int main()
{
    int day, month, year;
    bool isValidDate = true;
    cout<< "please enter the day, followed by the month, followed by the year \n";
    cin>> day >> month >> year;

    if (day > 30 || day < 1) {
        cout<< "invalid day \n";
        isValidDate = false;
    }

    if (month > 12 || month < 1) {
        cout<< "invalid month \n";
        isValidDate = false;
    }

    if (year < 0) {
        cout<< "invalid year \n";
        isValidDate = false;


    }



    bool isLeapYear, isCenturyYear;


    if (year % 100 == 0) {
        isCenturyYear: true;
    }

    if (!isCenturyYear && year % 4 == 0) {
        isLeapYear = true;
    }

      if (month == 2 && day > 28) {
        cout<< "invalid day \n";
        isValidDate = false;

    }


    if (isLeapYear) {
        if (month == 2 && day > 29) {
            cout<< "invalid day \n";
            isValidDate = false;
        }
    }

    if (isValidDate) {
        cout<< "valid date";
    }
    return 0;
}