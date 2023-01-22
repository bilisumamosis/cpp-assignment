#include <iostream>
using namespace std;

/*
C++ Assignment
Given by Mr. Yohans Samuel

Haramaya University - Department of Software Engineering

Section A
Group Members
Bilisuma Mosissa (2351/14)
Bonsa Baker (2407/14)
Barekegn Asefa (2249/14)
Biniyam Birhanu (2356/14)
*/

/* 1) Receive a number and determine whether it is odd or even. */
int main() {
    // this program not only checks if the number is even or odd but also if its an integer or not
    float number;
    cout<< "input a number" << endl;
    cin>> number;
    
    bool isInteger = number == int(number); //checks whether the number is an integer or not
    
    while (!(isInteger)) {
        cout<< "please input an integer" << endl;
        cin>> number;
        isInteger = number == int(number);
    }
    
    int intNumber = int(number); // storing the integer version of our number
    
    if (intNumber % 2 == 0) {
        cout<< number << " is even";
    } else {
        cout<< number << " is odd";
    }
    return 0;
}

/*
2) Obtain two numbers from the keyboard, and determine and display
which (if either) is the larger of the two numbers. 
*/

int main() {
    float num1, num2;
    cout<< "input the first number" << endl;
    cin>> num1;

    cout<< "input the second number" << endl;
    cin>> num1;

    if (num1 > num2) {
        cout<< num1 << " is larger than " << num2;
    } else {
        cout<< num2 << " is larger than " << num1;
    }


    return 0;
}


/*
3) Receive 3 numbers and display them in ascending order from smallest to
largest 
*/

int main() {
    float a, b, c; 
    cout<< "enter the first number" << endl;
    cin>> a;
    cout<< "enter the second number" << endl;
    cin>> b;
    cout<< "enter the third number" << endl;
    cin>> c; 


    if (a > b) {
        if (a > c) {
            if (b > c) {
                cout<< c << ", " << b << ", " << a;
            } else {
                cout << b << ", " << c << ", " << a;
            }
        } else {
            cout << b << ", " << a << ", " << c;
        }
    } else {
        if (b > c) {
            if (a > c) {
                cout << c << ", " << a << ", " << b;
            } else {
                cout << a << ", " << c << ", " << b;
            }
        } else {
            cout << a << ", " << b << ", " << c;
        }
    }

    return 0;
}

/*
4) Add the numbers from 1 to 100 and display the sum 
*/
int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << sum;
}



/*
5) Add the even numbers between 0 and any positive integer number
given by the user. 
*/
int main() {
    int number, sum = 0;
    cout<< "input a positive integer" << endl;
    cin >> number;

    for (int i = 2; i <= number - 1; i += 2) {
        sum += i;
    }
    cout << endl << sum;
    return 0;
}


/*
6) Find the average of two numbers given by the user. 
*/

int main() {
    float num1, num2, average;
    cout<< "input the first number" << endl;
    cin >> num1;
    cout<< "input the second number" << endl;
    cin >> num2;

    average = (num1 + num2) / 2;
    cout << average;

    return 0;
}


/*
7) Find the average, maximum, minimum, and sum of three numbers
given by the user. 
*/

int main() {
    float a, b, c, min, max, sum, average; 
    cout<< "enter the first number" << endl;
    cin>> a;
    cout<< "enter the second number" << endl;
    cin>> b;
    cout<< "enter the third number" << endl;
    cin>> c; 

    sum = a + b + c;
    average = sum / 3;

    if (a > b) {
        if (a > c) {
            if (b > c) {
                max = a;
                min = c;
            } else {
                max = a;
                min = b;
            }
        } else {
            max = c;
            min = b;
        }
    } else {
        if (b > c) {
            if (a > c) {
                max = b;
                min = c;
            } else {
                max = b;
                min = a;
            }
        } else {
            max = c;
            min = a;
        }
    }
    cout << "sum: " << sum << " average: " << average << endl;
    cout << "max: " << max << " min: " << min; 
    return 0;
}



/*
8) Find the area of a circle where the radius is provided by the user
*/

int main() {
    float pie = 3.14;
    float radius;
    cout << "input the radius" << endl;
    cin >> radius;

    float area = pie * radius * radius;

    cout << "the area is " << area;
    return 0;
}

/*
9) Swap the contents of two variables using a third variable. 
*/

int main() {
    float a = 1, b = 2, c;
    cout << "before swap: " << "a = " << a << " b = " << b << endl;

    c = a;
    a = b;
    b = c;

    cout << "after swap: " << "a = " << a << " b = " << b << endl;

    return 0;
}

/*
10) Swap the content of two variables without using a third variable. 
*/

int main() {
    float a = 1, b = 2;
    cout << "before swap: " << "a = " << a << " b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "after swap : " << "a = " << a << " b = " << b << endl;
}

/*
11) Read an integer value from the keyboard and display a message
indicating if this number is odd or even. 
*/

// repeated question

/*
12) read 10 integers from the keyboard in the range 0 - 100, and count how
many of them are larger than 50, and display this result 
*/

int main() {
    int number, counted = 0;
    for (int i = 0; i < 10; i++) {
        cout << "enter an integer between 0 and 100" << endl;
        cin >> number; 
        bool isInRange = (number > 0) && (number < 100); // checks if the number we inputed is in range
        while (!(isInRange)) {
            cout << "please enter an integer between 0 and 100" << endl;
            cin >> number;
            isInRange = (number > 0) && (number < 100);
        }
        
        if (number > 50) {
            counted++;
        }
    }

    cout << counted << " of them out of 10";
    return 0;
}

/*
13) Take an integer from the user and display the factorial of that number 
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