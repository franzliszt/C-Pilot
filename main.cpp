/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: stianreistadrogeberg
 *
 * Created on December 15, 2016, 4:26 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <stdbool.h>
#include <float.h>

#include "test.h"


using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

string msg(int age) {
    return (age < 18) ? "Your not allowed" : "You are old enough.";
}



void input() {
    cout << "\nPlease enter your first name and age(followed by enter):\n";
string first_name;
    int age = -1.0;
    cin >> first_name >> age;
    cout << "Your name is " << first_name + " Røgeberg" << " and you are " << age
            << " years old\n";
    cout << msg(age);
    cout << "age == " << age
         << "\nage+1 == " << age+1
            << "\nthree time age == " << 3 * age
            << "\ntwice n == " << age + age
            << "\nage squared == " << age * age
            << "\nhalf of age == " << age / 2
            << "\nsquare root of age == " << sqrt((double) age)
            << "\n"; 
}


void printAlpha() {
    char c = 'A';
    int temp = 26 + (int) c;
    while(c < temp) {
        cout << c++ << " ";
    }
}

void programOne() {
    int a = 1;
    int b = 1;
    
    cout << "Enter an integer: \n";
    cin>>a;
    cout << "Enter an integer: \n";
    cin>>b;
    printf("Product of %d * %d = %d", a, b, (a * b));
}

// EXERCISE 1: Basic of Programming in C

// 1
int sum(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += i;
    return sum;
}

// 2
void largestOfThreeNumbers(int a, int b, int c) {
    int largest = 0;
    
    if (a > b && a > c)
        largest = a;
    if (b > a && b > c)
        largest = b;
    if (c > a && c > b)
        largest = c;
    
    printf("Largest of %d, %d, %d is %d", a, b, c, largest);
}

// 3
int reverseNumber(int n) {
    int rev = 0;
    int rest;
    
    while (n != 0) {
        rest = n % 10;
        rev = rev * 10 + rest;
        n /= 10;
    }
    return rev;
}

// 4
void isPalindrome() {
    int rev = 0;
    int original;
    int input;
    
    do {
        printf("Enter integer (press -1 to quit): ");
        scanf("%d", &input);
        if (input < 0)
            break;
        original = input;
        int rev = reverseNumber(input);
        
        if (original == rev)
            printf("%d is a palindrome\n", original);
        else
            printf("%d is not a palindrome\n", original);
    } while (input != 0);
    
    printf("The end");
}

// 5
void grades(char grade) {
    string yourGrade = "";
    
    switch(grade) {
        case 'A':
            yourGrade = "Excellent";
            break;
        case 'B':
            yourGrade = "Very Good";
            break;
        case 'C':
            yourGrade = "Good";
            break;
        case 'D':
            yourGrade = "Satisfactory";
            break;
        case 'E':
            yourGrade = "Poor";
            break;
        case 'F':
            yourGrade = "Fail";
            break;
        default:
            yourGrade = "You have no grade";
            break;
    }
    cout << yourGrade << endl;
}

// exercise 4 for chapter 3
void readInput() {
    int val1 = 0;
    int val2 = 0;
    bool run = true;
    
    while (true) {
        cout << "\nEnter an integer (to quit press -1 and press enter): ";
        cin >> val1;
        if (val1 < 0) break;
        cout << "\nEnter another integer (to quit press -1 and press enter): ";
        cin >> val2;
        if (val2 < 0) break;
        cout << "Sum: " << (val1 + val2) << "\n"
                << "Smallest: " << ((val1 < val2) ? val1 : val2)
                << "\nAverage " << (val1 + val2) / 2 
                << "\nLargest: " << ((val1 > val2) ? val1 : val2)
                << "\nProduct: " << (val1 * val2)
                << "\nDifference: " << ((val1 < val2) ? (val2 - val1) : (val1 - val2));
    } 
    cout << "\n\nProgram is terminating... done!" << endl;
}

void sortingIntegers() {
    int a = 0, b = 0, c = 0;
    string output = "";
    
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    
    if (a > b && b > c)
        cout << c << ", " << b << ", " << a;
    if ( b > c && c > a)
        cout << a << ", " << c << ", " << b;
    if ( c > b && b > a)
        cout << a << ", " << b << ", " << c;
    if ( b > a && a > c)
        cout << c << ", " << a << ", " << b;
    if (c > a && a > b)
        cout << b << ", " << a << ", " << c;
}

// Assignment 1

void test();
// Oppgave 1
void largestOfSixNumbers() {
    int counter = 0;
    int userInput = 0;
    int largest = 0;
    
    while (counter < 6) {
        printf("Enter integer number %d: ", (counter + 1));
        scanf("%d", &userInput);
        if (userInput > largest)
            largest = userInput;
        counter++;
    }
    printf("\nThe largest number entered is %d.\n", largest);
}

// Oppgave 2
double convertToFarenheit(double celsius) {
    return (9 / 5) * celsius + 32;
}
double convertToCelsius(double farenheit) {
    return -1;
}

// Oppgave 3
void countEmptySpaces() {
    
}

// Oppgave 4
void numberOfWords() {
    
}

// Oppgave 5
void printPattern() {
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
}

// Oppgave 6
bool isEven(int n) {
    return (n % 2 == 0);
}

// Oppgave 7
void printPerfectNumbers(int start, int end);

// Oppgave 9
void printFibonacci(int n) {
    if (n <= 0)
        cout << "Enter an integer bigger than 0 " << endl;
    else {
        int first = 0;
        int second = 1;
        int next = 1;
        
        for (int i = 2; i < (n + 2); i++) {
            cout << next << " ";
            next = first + second;
            first = second;
            second = next;
        }
    }
}

// Oppgave 10
void swap_1(int a, int b) {
    
}

void swap_2(int& a, int& b) {
    
}

// pass by reference
void twice(int& a, int&b, int& c) {
    a *= 2;
    b *= 2;
    c *= 2;
}
int a = 10;

void test();

int main(int argc, char** argv) {
    test();
//    string s = "Learning and Playing";
//    cout << s.size()<< endl;
//    
//    string newWord = s.substr(9, 3); // and
//    int a = s.find("nin");
//    string b(8, 's');
//    cout << a << " and " << b << " and " << newWord << endl;
//    
//    int x = 1;
//    int y = 3;
//    int z = 7;
//    
//    cout << "x=" << x << " y=" << y << " z=" << z <<endl;
//    twice(x, y, z);
//    cout << "x=" << x << " y=" << y << " z=" << z <<endl;
//    
//    largestOfSixNumbers();
    int a = 20;
    cout << a;
    
    return 0;
}




    

