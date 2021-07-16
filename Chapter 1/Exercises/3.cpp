// 3. Write a program that gets three game scores from the user and displays the average.

#include<iostream>
using namespace std;

int main() {
    int score1, score2, score3;
    cin>>score1>>score2>>score3;
    cout << "A Média é: "<<(score1+score2+score3)/3.0<< endl;
    return 0;
}