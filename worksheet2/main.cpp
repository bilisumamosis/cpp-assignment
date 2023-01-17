#include <iostream>
using namespace std;


/* 1) Receive a number and determine whether it is odd or even. */
int main() {
    
    int number;
    cout<< "input a number" << endl;
    cin>> number;

    if (number % 2 == 0) {
        cout<< "it even";
    } else {
        cout<< "its odd";
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
    float num1, num2, num3; 
    cout<< "enter the first number" << endl;
    cin>> num1;
    cout<< "enter the second number" << endl;
    cin>> num2;
    cout<< "enter the third number" << endl;
    cin>> num3; 

    if (num1 > num2) {
        if (num1 > num3) {
            if (num2 > num3) {
                cout<< num3 << ", " << num2 << ", " << num1;
            } else {
                cout << num2 << ", " << num3 << ", " << num1;
            }
        } else {
            cout << num2 << ", " << num1 << ", " << num3;
        }
    } else {
        if (num2 > num3) {
            if (num1 > num3) {
                cout << num3 << ", " << num2 << ", " << num1;
            } else {
                cout << num1 << ", " << num3 << ", " << num2;
            }
        } else {
            cout << num1 << ", " << num1 << ", " << num3;
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
    int number;
    int sum = 0l
    cout<< "input a positive integer" << endl;
    cin >> number;

    for (int i = 2; i = number - 1; i += 2) {
        sum += number;
    }
    cout << sum;
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
    float num1, num2, num3, min, max, sum, average; 
    cout<< "enter the first number" << endl;
    cin>> num1;
    cout<< "enter the second number" << endl;
    cin>> num2;
    cout<< "enter the third number" << endl;
    cin>> num3; 

    sum = num1 + num2 + num3;
    average = sum / 3;

    if (num1 > num2) {
        if (num1 > num3) {
            if (num2 > num3) {
    
                max = num1;
                min = num3;
            } else {
                
                max = num1;
                min = num2;
            }
        } else {
            
            max = num3;
            min = num2;
        }
    } else {
        if (num2 > num3) {
            if (num1 > num3) {
                
                max = num1;
                min = num3;
            } else {
            
                max = num2;
                min = num1;
            }
        } else {
            
            max = num3;
            min = num1;
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
    cout << "input the radius";
    cin >> radius;

    float area = pie * radius * radius;

    cout << area;
    return 0;
}

/*
9) Swap the contents of two variables using a third variable. 
*/

int main() {
    float a = 1, b = 2, c;
    cout << "before: " << "a = " << a << " b = " << b << endl;

    c = a;
    a = b;
    b = c;

    cout << "after: " << "a = " << a << " b = " << b << endl;

    return 0;
}

/*
10) Swap the content of two variables without using a third variable. 
*/

int main() {
    float a = 1, b = 2;
    cout << "before: " << "a = " << a << " b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "after: " << "a = " << a << " b = " << b << endl;
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
        bool isInRange = false;
        cout << "enter an integer between 0 and 100" << endl;
        cin >> number; 
        while (!(number > 0 && number < 100)) {
            cout << "please enter an integer between 0 and 100" << endl;
            cin >> number;
        }
        
        if (number > 50) {
            counted++;
        }
    }

    cout << counted << " of them out of 10 were greater than 50";
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

    cout<< fact;

    return 0;
}