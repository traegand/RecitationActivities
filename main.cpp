#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
 * The following problems are all sourced from codingbat.com
 */

 /*
  * The parameter weekday is true if it is a weekday, and the parameter vacation is true if we are on vacation.
  * We sleep in if it is not a weekday or we're on vacation. Return true if we sleep in.
  */
bool SleepIn(bool weekday, bool vacation) {
   
}

/*
 * Given an int n, return true if it is within 10 of 100 or 200.
 * Note: abs(num) computes the absolute value of a number.
 */
bool NearHundred(int n) {
    
}

/*
 * Given two int values, return their sum. Unless the two values are the same, then return double their sum.
 */
int SumDouble(int a, int b) {
    
}


/*
 * Given an array of ints, we'll say that a triple is a value appearing 3 times in a row in the vector.
 * Return true if the vector does not contain any triples.
 */
bool NoTriples(vector<int> nums) {
    
}

/*
 * Given 3 int values, a b c, return their sum. However, if one of the values is the same as another of the values,
 * it does not count towards the sum.
 */
int LoneSum(int a, int b, int c) {
   
}

/*
 *Given 2 int values greater than 0, return whichever value is nearest to 21 without going over.
 *Return 0 if they both go over.
 */

int Blackjack(int a, int b) {
    
}

/*
 * Find the difference between the largest element and the smallest element in an array.
 */

int BigDiff(int nums[], int size) {
    
}

/*
 * shift every element in a vector left. So if you had the vector {1,2,3,4} it would become
 * {2,3,4,1} return the new vector.
 */

vector<int> ShiftVectorLeft(vector<int> vec) {
    
}

/*
 *Return an array that contains the exact same numbers as the given array, but rearranged so that all the even numbers
 *come before all the odd numbers. Other than that, the numbers can be in any order.
 *You may modify and return the given array, or make a new array.
 */

vector<int> EvenOdd(vector<int> nums) {
    

}

/*
 *Given a non-empty array, return true if there is a place to split the array so that the sum of the numbers
 *on one side is equal to the sum of the numbers on the other side.
 */
bool CanBalance(vector<int> vec) {
    
}

/*
 * TESTING FUNCTIONS BELOW, DO NOT MODIFY. Just Run the program to run the tests.
 */

bool RunTest(bool expected, bool actual) {
    return expected == actual;
}
bool RunTest(vector<int> expected, vector<int> actual) {
    return equal(expected.begin(), expected.end(), actual.begin(), actual.end());
}
bool RunTest(int expected, int actual) {
    return expected == actual;
}
bool RunTestEvenOdd(int expectedOddIndex, int expectedSize, vector<int> actual) {
    if (actual.size() != expectedSize) return false;
    for (int i = 0; i < actual.size(); ++i) {
        if (actual.at(i) % 2 == 1) {
            if (i == expectedOddIndex) return true;
            else return false;
        }
    }
    return true;
}

string SleepInTests() {
    if (RunTest(true, SleepIn(false, false))
        && RunTest(false, SleepIn(true, false))
        && RunTest(true, SleepIn(false, true))
        && RunTest(true, SleepIn(true, true))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string NearHundredTests() {
    if (RunTest(true, NearHundred(93))
        && RunTest(true, NearHundred(90))
        && RunTest(false, NearHundred(89))
        && RunTest(true, NearHundred(110))
        && RunTest(false, NearHundred(111))
        && RunTest(false, NearHundred(121))
        && RunTest(false, NearHundred(-101))
        && RunTest(false, NearHundred(-209))
        && RunTest(true, NearHundred(190))
        && RunTest(true, NearHundred(209))
        && RunTest(false, NearHundred(0))
        && RunTest(false, NearHundred(5))
        && RunTest(false, NearHundred(-50))
        && RunTest(true, NearHundred(191))
        && RunTest(false, NearHundred(189))
        && RunTest(true, NearHundred(200))
        && RunTest(true, NearHundred(210))
        && RunTest(false, NearHundred(211))
        && RunTest(false, NearHundred(290))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string SumDoubleTests() {
    if (RunTest(3, SumDouble(1, 2))
        && RunTest(5, SumDouble(3,2))
        && RunTest(8, SumDouble(2,2))
        && RunTest(-1, SumDouble(-1,0))
        && RunTest(12, SumDouble(3,3))
        && RunTest(0, SumDouble(0,0))
        && RunTest(1, SumDouble(0,1))
        && RunTest(7, SumDouble(3,4))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string NoTriplesTests() {
    if (RunTest(true, NoTriples({ 1, 1, 2, 2, 1 }))
        && RunTest(false, NoTriples({ 1, 1, 2, 2, 2, 1 }))
        && RunTest(false, NoTriples({ 1, 1, 1, 2, 2, 2, 1 }))
        && RunTest(true, NoTriples({ 1, 1, 2, 2, 1, 2, 1 }))
        && RunTest(true, NoTriples({ 1, 2, 1 }))
        && RunTest(false, NoTriples({ 1, 1, 1 }))
        && RunTest(true, NoTriples({ 1, 1 }))
        && RunTest(true, NoTriples({1}))
        && RunTest(true, NoTriples({}))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string LoneSumTests() {
    if (RunTest(6, LoneSum(1,2,3))
        && RunTest(2, LoneSum(3,2,3))
        && RunTest(0, LoneSum(3,3,3))
        && RunTest(9, LoneSum(9,2,2))
        && RunTest(9, LoneSum(2,9,2))
        && RunTest(9, LoneSum(2,2,9))
        && RunTest(14, LoneSum(2,9,3))
        && RunTest(9, LoneSum(4,2,3))
        && RunTest(3, LoneSum(1,3,1))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string BlackJackTests() {
    if (RunTest(21, Blackjack(19,21))
        && RunTest(21, Blackjack(19, 21))
        && RunTest(21, Blackjack(21, 19))
        && RunTest(19, Blackjack(19, 22))
        && RunTest(19, Blackjack(22, 19))
        && RunTest(0, Blackjack(22, 50))
        && RunTest(0, Blackjack(22, 22))
        && RunTest(1, Blackjack(33, 1))
        && RunTest(2, Blackjack(1, 2))
        && RunTest(0, Blackjack(34, 33))
        && RunTest(19, Blackjack(17, 19))
        && RunTest(18, Blackjack(18, 17))
        && RunTest(16, Blackjack(16, 23))
        && RunTest(4, Blackjack(3, 4))
        && RunTest(3, Blackjack(3, 2))
        && RunTest(21, Blackjack(21, 20))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string BigDiffTests() {
    int arr0[4] = { 10, 3, 5, 6 };
    int arr1[4] = { 7, 2, 10, 9 };
    int arr2[4] = { 2, 10, 7, 2 };
    int arr3[2] = { 2, 10 };
    int arr4[2] = { 10, 2 };
    int arr5[2] = { 10, 0 };
    int arr6[2] = { 2, 3 };
    int arr7[2] = { 2, 2 };
    int arr8[1] = { 2 };
    int arr9[6] = { 5, 1, 6, 1, 9, 9 };
    int arr10[4] = { 7, 6, 8, 5 };
    int arr11[7] = { 7, 7, 6, 8, 5, 5, 6 };

    if (RunTest(7, BigDiff(arr0, 4))
        && RunTest(8, BigDiff(arr1, 4))
        && RunTest(8, BigDiff(arr2, 4))
        && RunTest(8, BigDiff(arr3, 2))
        && RunTest(8, BigDiff(arr4, 2))
        && RunTest(10, BigDiff(arr5, 2))
        && RunTest(1, BigDiff(arr6, 2))
        && RunTest(0, BigDiff(arr7, 2))
        && RunTest(0, BigDiff(arr8, 1))
        && RunTest(8, BigDiff(arr9, 6))
        && RunTest(3, BigDiff(arr10, 4))
        && RunTest(3, BigDiff(arr11, 7))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string ShiftVectorLeftTests() {
    if (RunTest({ 2, 5, 3, 6 }, ShiftVectorLeft({ 6, 2, 5, 3 }))
        && RunTest({ 2,1 }, ShiftVectorLeft({ 1, 2 }))
        && RunTest({ 1 }, ShiftVectorLeft({ 1 }))
        && RunTest({}, ShiftVectorLeft({}))
        && RunTest({ 1, 2, 2, 4, 1 }, ShiftVectorLeft({ 1, 1, 2, 2, 4 }))
        && RunTest({ 1, 1, 1 }, ShiftVectorLeft({ 1, 1, 1 }))
        && RunTest({ 2, 3, 1 }, ShiftVectorLeft({ 1, 2, 3 }))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string EvenOddTests() {
    if (RunTestEvenOdd(3, 7, EvenOdd({ 1, 0, 1, 0, 0, 1, 1 }))
        && RunTestEvenOdd(1, 3, EvenOdd({ 3, 3, 2 }))
        && RunTestEvenOdd(0, 3, EvenOdd({ 2, 2, 2 }))
        && RunTestEvenOdd(2, 3, EvenOdd({ 3, 2, 2 }))
        && RunTestEvenOdd(2, 5, EvenOdd({ 1, 1, 0, 1, 0 }))
        && RunTestEvenOdd(0, 1, EvenOdd({ 1 }))
        && RunTestEvenOdd(1, 2, EvenOdd({ 1,2 }))
        && RunTestEvenOdd(1, 2, EvenOdd({ 2,1 }))
        && RunTestEvenOdd(0, 0, EvenOdd({}))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}

string CanBalanceTests() {
    if (RunTest(true, CanBalance({ 1,1,1,2,1 }))
        && RunTest(false, CanBalance({ 2,1,1,2,1 }))
        && RunTest(true, CanBalance({ 10,10 }))
        && RunTest(true, CanBalance({ 10,0,1,-1,10 }))
        && RunTest(true, CanBalance({ 1,1,1,1,4 }))
        && RunTest(false, CanBalance({ 2,1,1,1,4 }))
        && RunTest(false, CanBalance({ 2,3,4,1,2 }))
        && RunTest(true, CanBalance({ 1,2,3,1,0,2,3 }))
        && RunTest(false, CanBalance({ 1, 2, 3, 1, 0, 1, 3 }))
        && RunTest(false, CanBalance({ 1 }))
        && RunTest(true, CanBalance({ 1,1,1,2,1 }))) {
        return "ALL TESTS PASSED";
    }
    return "TESTS FAILED";
}


int main() {

    cout << "SleepIn() Tests: " << SleepInTests() << endl;
    cout << "NearHundred() Tests: " << NearHundredTests() << endl;
    cout << "SumDouble() Tests: " << SumDoubleTests() << endl;
    cout << "NoTriples() Tests: " << NoTriplesTests() << endl;
    cout << "LoneSum() Tests: " << LoneSumTests() << endl;
    cout << "Blackjack() Tests: " << BlackJackTests() << endl;
    cout << "ShiftVectorLeft() Tests: " << ShiftVectorLeftTests() << endl;
    cout << "EvenOdd() Tests: " << EvenOddTests() << endl;
    cout << "CanBalance() Tests: " << CanBalanceTests() << endl;
    

    return 0;
}
