/*

Create a function that takes two numbers as arguments and return their sum.

Examples

addition(3, 2) ➞ 5

addition(-3, -6) ➞ -9

addition(7, 3) ➞ 10
Notes

Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

int addition(int a, int b) {
	return(a+b);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that takes a number as an argument, add one to the number, and return the result.

Examples

addition(0) ➞ 1

addition(9) ➞ 10

addition(-3) ➞ -2
Notes

Do not test for overflow.
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

int addition(int a) {
	return a+1;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

Write a function that takes an integer minutes and converts it to seconds.

Examples

convert(5) ➞ 300

convert(3) ➞ 180

convert(2) ➞ 120
Notes

Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

int convert(int minutes) {
	return minutes*60;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

Write a function that takes the base and height of a triangle and return its area.

Examples

triArea(3, 2) ➞ 3

triArea(7, 4) ➞ 14

triArea(10, 10) ➞ 50
Notes

The area of a triangle is: (base * height) / 2
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

int triArea(int base, int height) {
	return height*base/2;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that takes voltage and current and returns the calculated power.

Examples

circuitPower(230, 10) ➞ 2300

circuitPower(110, 3) ➞ 330

circuitPower(480, 20) ➞ 9600
Notes

Requires basic calculation of electrical circuits (see Resources for info).

*/

int circuitPower(int voltage, int current) {
	return voltage*current;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers.

Examples

nextEdge(8, 10) ➞ 17

nextEdge(5, 7) ➞ 11

nextEdge(9, 2) ➞ 10
Notes

(side1 + side2) - 1 = maximum range of third edge.
The side lengths of the triangle are positive integers.
Don't forget to return the result.
*/

int nextEdge(int side1, int side2) {
	return (side1+side2)-1;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
There is a single operator in C++, capable of providing the remainder of a division operation. Two numbers are passed as parameters. The first parameter divided by the second parameter will have a remainder, possibly zero. Return that value.

Examples

remainder(1, 3) ➞ 1

remainder(3, 4) ➞ 3

remainder(-9, 45) ➞ -9

remainder(5, 5) ➞ 0
Notes

The tests only use positive and negative integers.
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

int remainder(int x, int y) {
	return x%y;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Fix the code in the code tab to pass this challenge (only syntax errors). Look at the examples below to get an idea of what the function should do.

Examples

squared(5) ➞ 25

squared(9) ➞ 81

squared(100) ➞ 10000
Notes

READ EVERY WORD CAREFULLY, CHARACTER BY CHARACTER!
Don't overthink this challenge; it's not supposed to be hard.
*/
int squared(int a) {
	return a * a;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that takes length and width and finds the perimeter of a rectangle.

Examples

findPerimeter(6, 7) ➞ 26

findPerimeter(20, 10) ➞ 60

findPerimeter(2, 9) ➞ 22
Notes

Don't forget to return the result.
If you're stuck, find help in the Resources tab.
If you're really stuck, find solutions in the Solutions tab.
*/
int findPerimeter(int length, int width) {
	return 2*(length+width);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that takes two integers and checks if they are equal.

Examples

isEqual(5, 6) ➞ false

isEqual(1, 1) ➞ true

isEqual(36, 35) ➞ false
Notes

N/A
*/
bool isEqual(int num1, int num2) {
	return num1 == num2;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that takes a number as its only argument and returns true if it's less than or equal to zero, otherwise return false.

Examples

lessThanOrEqualToZero(5) ➞ false

lessThanOrEqualToZero(0) ➞ true

lessThanOrEqualToZero(2) ➞ false
Notes

Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

bool lessThanOrEqualToZero(int num) {
	return num <= 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
In this challenge, a farmer is asking you to tell him how many legs can be counted among all his animals. The farmer breeds three species:

chickens = 2 legs
cows = 4 legs
pigs = 4 legs
The farmer has counted his animals and he gives you a subtotal for each species. You have to implement a function that returns the total number of legs of all the animals.

Examples

animals(2, 3, 5) ➞ 36

animals(1, 2, 3) ➞ 22

animals(5, 2, 8) ➞ 50
Notes

Don't forget to return the result.
The order of animals passed is animals(chickens, cows, pigs).
Remember that the farmer wants to know the total number of legs and not the total number of animals.

*/
int animals(int chickens, int cows, int pigs) {
	return chickens*2+cows*4+pigs*4;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that reverses a boolean value.

Examples

reverse(true) ➞ false

reverse(false) ➞ true
Notes

Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/
bool reverse(bool boolean) {
	return not boolean;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Given two numbers, return true if the sum of both numbers is less than 100. Otherwise return false.

Examples

lessThan100(22, 15) ➞ true
// 22 + 15 = 37

lessThan100(83, 34) ➞ false
// 83 + 34 = 117

lessThan100(3, 77) ➞ true
Notes

N/A
*/
bool lessThan100(int a, int b) {
	return (a+b) <100;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Write a function that takes two integers (hours, minutes), converts them to seconds, and adds them.

Examples

convert(1, 3) ➞ 3780

convert(2, 0) ➞ 7200

convert(0, 0) ➞ 0
Notes

Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

int convert(int hours, int minutes) {
	return (hours*60*60+minutes*60);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Emmy has written a function that returns a greeting to users. However, she's in love with Mubashir, and would like to greet him slightly differently. She added a special case in her function, but she made a mistake.

Can you help her?

Examples

greeting("Matt") ➞ "Hello, Matt!"

greeting("Helen") ➞ "Hello, Helen!"

greeting("Mubashir") ➞ "Hello, my Love!"
Notes

READ EVERY WORD CAREFULLY, CHARACTER BY CHARACTER!
Don't overthink this challenge; it's not supposed to be hard.
*/

std::string greeting(std::string name) 
{
	if(name == "Mubashir") {
    return "Hello, my Love!";
  }
	else
  return "Hello, " + name + "!";
  
}

//or

std::string greeting(std::string name) 
{
  return name == "Mubashir"?"Hello, my Love!":"Hello, " + name + "!";
}

//or

std::string greeting(std::string name) 
{if(name == "Mubashir") return "Hello, my Love!";
  return "Hello, " + name + "!";
  
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
An int boolean is same as a normal boolean, just 1 = true and 0 = false. Make a function that returns an int boolean opposite of an int boolean given (flip the int boolean).

Examples

flipIntBool(1) ➞ 0

flipIntBool(0) ➞ 1
Notes

N/A
*/

int flipIntBool(int baseIntBoolean) {
	if(baseIntBoolean == 1) return 0;
  return 1;
}

//or

int flipIntBool(int baseIntBoolean) {
	return !baseIntBoolean;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that returns true if an integer is evenly divisible by 5, and false otherwise.

Examples

divisibleByFive(5) ➞ true

divisibleByFive(-55) ➞ true

divisibleByFive(37) ➞ false
Notes

Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

bool divisibleByFive(int num) {
	return num % 5 == 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that takes a positive integer n, and returns the sum of all the cubed values from 1 to n.

For example, if n is 3:

sumCubes(3) ➞ 36
1 ** 3 + 2 ** 3 + 3 ** 3 = 36
Examples

sumCubes(7) ➞ 784

sumCubes(8) ➞ 1296

sumCubes(9) ➞ 2025
Notes

Input n will be a positive integer.
*/
unsigned long sumCubes(int n) {
	int num = 0;
  for (int e=1; e<=n; e++) {
    num += e*e*e; }
  return num;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
C++ has a logical operator &&, which can also be written as "and" (for users without & on their keyboard). The && operator is very useful, it takes in two values. For example, a&&b works like:

a is checked if it is true or false.
Same with b if a is true. If a is false, return false
Return true if a and b are true and false otherwise.
The && operator is equivalent to this function (it doesn't use any shortcuts so it is easier to understand for beginners):

bool AND(bool a, bool b){
  if (a == false) {
    return false; // stops function and returns false
  }
  else if (b == true){ // "a" must be true because it would return otherwise
    return true;
  } else {
    return false;
  }
}
So, && will only return true for true&&true.

Make a function using &&.

Examples

andAnd(true, false) ➞ false

andAnd(true, true) ➞ true

andAnd(false, true) ➞ false

andAnd(false, false) ➞ false
Notes

N/A
*/
bool andAnd(bool a, bool b){
	return a && b;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Given two integers, a and b, return true if a can be divided evenly by b. Return false otherwise.

Examples

dividesEvenly(98, 7) ➞ true
// 98/7 = 14

dividesEvenly(85, 4) ➞ false
// 85/4 = 21.25
Notes

a will always be greater than or equal to b.
*/
bool dividesEvenly(int a, int b) {
	a%b==0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Fix the code in the Code tab so the function returns true if and only if x is equal to 7. Try to debug code and pass all the tests.

Examples

isSeven(4) ➞ false

isSeven(9) ➞ false

isSeven(7) ➞ true
Notes

The bug can be hard to find, so look closely!
*/
bool isSeven(int x) {
	return x==7?true:false;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Given a Rubik's Cube with a side length of n, return the number of individual stickers that are needed to cover the whole cube.

Pictures of Rubik's Cubes

The Rubik's cube of side length 1 has 6 stickers.
The Rubik's cube of side length 2 has 24 stickers.
The Rubik's cube of side length 3 has 54 stickers.
Examples

howManyStickers(1) ➞ 6

howManyStickers(2) ➞ 24

howManyStickers(3) ➞ 54
Notes

Keep in mind there are 6 faces to keep track of.
Expect only positive whole numbers.
*/
int howManyStickers(int n) {
	return 6*(n*n);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Write a function that returns the string "something" joined with a space " " and the given argument a.

Examples

giveMeSomething("is better than nothing") ➞ "something is better than nothing"

giveMeSomething("Bob Jane") ➞ "something Bob Jane"

giveMeSomething("something") ➞ "something something"
Notes

Assume an input is given.

*/

#include <string>

std::string giveMeSomething(std::string a) {
	return "something "+a;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
The challenge is to try and fix this buggy code, given the inputs true and false. See the examples below for the expected output.

Examples

has_bugs(true) ➞ "sad days"

has_bugs(false) ➞ "it's a good day"
Notes

Don't overthink this challenge (look at the syntax and correct it).
*/

std::string has_bugs(bool buggy_code) {
	return buggy_code==true?"sad days":"it's a good day";	
}

//or
#define has_bugs(buggy_code) buggy_code?"sad days":"it's a good day"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Christmas Eve is almost upon us, so naturally we need to prepare some milk and cookies for Santa! Create a function that accepts a (year, month, day) of date and returns true if it's Christmas Eve (December 24th) and false otherwise. Keep in mind that month of Date is 0 based, meaning December is the 11th month while January is 0.

Examples

timeForMilkAndCookies(2013, 11, 24) ➞ true

timeForMilkAndCookies(2013, 0, 23) ➞ false

timeForMilkAndCookies(3000, 11, 24) ➞ true
Notes

Dates in C++ are zero based (see Resources).
All test cases contain valid dates.
*/

bool timeForMilkAndCookies(int year, int month, int day) {
	return month==11 && day==24;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Some basic arithmetic operators are +, -, *, /, and %. In this challenge you will be given three parameters, num1, num2, and an operator op. Use the operator on number 1 and 2.

Examples

operate(1, 2, "+") ➞ 3
// 1 + 2 = 3

operate(7, 10, "-") ➞ -3
// 7 - 10 = -3

operate(20, 10, "%") ➞ 0
// 20 % 10 = 0
Notes

There will not be any divisions by zero.
*/

int operate(int n, int m, char o) {
return o=='+'?n+m:o=='-'?n-m:o=='*'?n*m:o=='%'?n%m:n/m;
}

//or
char operate(int num1, int num2, char op) {
	switch(op){
			case('+'): return num1+num2; break;
			case('-'): return num1-num2; break;
			case('*'): return num1*num2; break;
			case('/'): return num1/num2; break;
		default: num1%num2; break;
	}
}

//or
int operate(int num1, int num2, char op) {
	if(op == '+') {return num1 + num2;}
	else if(op == '-') {return num1 - num2;}
	else if(op == '*') {return num1 * num2;}
	else if(op == '/') {return num1 / num2;}
	else return num1 % num2;
}

//or
int operate(int num1, int num2, char op) {
	if(op=='+')
		return num1+num2;
	if(op=='-')
		return num1-num2;
	if(op=='*')
		return num1*num2;
	if(op=='/')
		return num1/num2;
	return num1%num2;
}

//or
int operate(int num1, int num2, char op) {
	switch(op) {
		case '+': return num1 + num2;
		case '-': return num1 - num2;
		case '*': return num1 * num2;
		case '/': return num1 / num2;
		case '%': return num1 % num2;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Mubashir created an infinite loop! Help him by fixing the code in the code tab to pass this challenge. Look at the examples below to get an idea of what the function should do.

Examples

printArray(1) ➞ [1]

printArray(3) ➞ [1, 2, 3]

printArray(6) ➞ [1, 2, 3, 4, 5, 6]
Notes

READ EVERY WORD CAREFULLY, CHARACTER BY CHARACTER!
Don't overthink this challenge; it's not supposed to be hard.
*/
#include <numeric>
std::vector<int> printArray(int n){
  std::vector<int> newArray(n);
  std::iota(newArray.begin(), newArray.end(), 1);
  return newArray;
}
//or
std::vector<int> printArray(int n){
  std::vector<int> newArray;
  
  for(int i = 1; i <= n; i++){
    newArray.push_back(i);
  }
  
  return newArray;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Write a function that returns true if a year is a leap, otherwise return false.

A year is a "leap year" if it lasts 366 days, instead of 365 in a typical year. That extra day is added to the end of the shortest month, creating February 29.

A leap year occurs every four years, and will take place if the year is a multiple of four. The exception to this is a year at the beginning of a century (for example, 1900 or 2000), where the year must be divisible by 400 to be a leap year.

Look at the examples, and if you need help, look at the resources panel.

Examples

leapYear(1990) ➞ false

leapYear(1924) ➞ true

leapYear(2021) ➞ false
Notes

Do not overthink this challenge.
You can solve the problem with a few lines of code.
*/
bool leapYear(int year) {
	return (year%100)%4==0;
	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
I have a bucket containing an amount of navy blue paint and I'd like to paint as many walls as possible. Create a function that returns the number of complete walls that I can paint, before I need to head to the shops to buy more.

n is the number of square meters I can paint.
w and h are the widths and heights of a single wall in meters.
Examples

howManyWalls(100, 4, 5) ➞ 5

howManyWalls(10, 15, 12) ➞ 0

howManyWalls(41, 3, 6) ➞ 2
Notes

Don't count a wall if I don't manage to finish painting all of it before I run out of paint.
All walls will have the same dimensions.
All numbers will be positive integers.
*/
#include <cmath>
int howManyWalls(int n, int w, int h) {
	return std::floor(n/(w*h));
}
//or
#include<math.h>
int howManyWalls(int n, int w, int h) {
	return floor(n/(w*h));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Given a string, return true if its length is even or false if the length is odd.

Examples

oddOrEven("apples") ➞ true
// The word "apples" has 6 characters.
// 6 is an even number, so the program outputs true.

oddOrEven("pears") ➞ false
// "pears" has 5 letters, and 5 is odd.
// Therefore the program outputs false.

oddOrEven("cherry") ➞ true
Notes

N/A
*/


bool oddOrEven(std::string s) {
	return s.length()%2==0;
}

//or 
bool oddOrEven(std::string s) {return s.size() % 2 == 0;}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a program that will take two arrays of integers, a and b. Each array will consist of 3 positive integers, representing the dimensions of cuboids a and b. Find the difference of the cuboids' volumes.

For example, if the parameters passed are ([2, 2, 3], [5, 4, 1]), the volume of a is 12 and the volume of b is 20. Therefore, the function should return 8.

Examples

findDifference([ 28, 16, 29 ], [ 7, 8, 17 ]) ➞ 12040

findDifference([ 9, 22, 18 ], [ 16, 24, 10 ]) ➞ 276

findDifference([ 1, 9, 25 ], [ 10, 7, 9 ]) ➞ 405

findDifference([ 7, 6, 16 ], [ 26, 9, 26 ]) ➞ 5412
Notes

Each array element is greater than 0.
*/

# include <cstdlib>
int findDifference(std::vector<int> a, std::vector<int> b) {
	return abs(a[0]*a[1]*a[2] - b[0]*b[1]*b[2]);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Create a function that takes as a parameter an array of string numbers and returns an array of numbers.

Example:

["1", "3", "3.6"] ➞ [1, 3, 3.6]
Examples

toNumberArray(["9.4", "4.2"]) ➞ [9.4, 4.2]

toNumberArray(["1.4", "4.4", "5.7", "4.3", "9.8", "5.3", "8.7", "8.6", "9.8"])
➞ [1.4, 4.4, 5.7, 4.3, 9.8, 5.3, 8.7, 8.6, 9.8]

toNumberArray(["9.5", "8.8"]) ➞ [9.5, 8.8]
Notes

Note that you can receive decimal string numbers as well.
*/

std::vector<float> toNumberArray(std::vector<std::string> arr) {
	std::vector<float> nw;
  	for (int i = 0; i < arr.size(); i++)
		nw[i] = std::stof(arr[i]);
  	return nw;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Kinetic energy can be calculated with the following formula:

KE = 1/2mv²

m is mass in kg
v is velocity in m/s
KE is kinetic energy in J
Return the Kinetic Energy in Joules, given the mass and velocity. For the purposes of this challenge, round answers to the nearest integer.

Examples

kineticEnergy(60, 3) ➞ 270

kineticEnergy(45, 10) ➞ 2250

kineticEnergy(63.5, 7.35) ➞ 1715
Notes

Expect only positive numbers for inputs.
*/

#include <cmath>

int kineticEnergy(float m, float v) {
	return round(0.5*m*v*v);
}
