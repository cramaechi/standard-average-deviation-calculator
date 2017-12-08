#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void displayResults(int s1, int s2, int s3, int s4, double aD, double sD);
//Precondition: s1, s2, s3, s4, aD, and sD are all non-zero, non-negative
//numbers.
//Postcondition: Displays the average and standard deviation of the four
//scores.

//void clearScreen(); //Clears the console screen.

double computeADeviation(int s1, int s2, int s3, int s4);
//Precondition: Variables s1, s2, s3, and s4 are all non-zero, non-negative
//numbers.
//Returns the average deviation of the four scores.

double computeSDeviation(int s1, int s2, int s3, int s4);
//Precondition: s1, s2, s3, and s4 are all non-zero, non-negative numbers.
//Returns the standard deviation of the four scores.


int main(int argc, char* argv[])
{
    char ans;
    double aD = 0, sD = 0;
    int s1, s2, s3, s4;

    do
    {
        cout<<"Enter in four scores: ";
        cin>>s1;
        cin>>s2; 
        cin>>s3;
        cin>>s4;

        displayResults(s1,s2,s3,s4,aD,sD);

        cout<<"Start over? (y/n) ";
        cin>>ans;

        if(ans == 'Y' || ans == 'y')
            cout<<"\n\n";

    }while(ans == 'Y' || ans == 'y');

    return 0;
}

void displayResults(int s1, int s2, int s3, int s4, double aD, double sD)
{
    aD = computeADeviation(s1, s2, s3, s4);
    sD = computeSDeviation(s1, s2, s3, s4);

    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);

    cout<<"The average deviation of the four scores is: "<<aD<<"\n\n";
    cout<<"The standard deviation of the four scores is: "<<sD<<"\n";
}

/*
   void clearScreen()
   {
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   }
   */

double computeADeviation(int s1, int s2, int s3, int s4)
{
    int a = ((s1 + s2 + s3 + s4)/4.0);
    double aDeviation = abs(((s1-a)+(s2-a)+(s3-a)+(s4-a)/(4.0)));

    return aDeviation;
}

double computeSDeviation(int s1, int s2, int s3, int s4)
{
    int a = ((s1 + s2 + s3 + s4)/4.0);
    double sDeviation = sqrt(abs(pow(s1 - a, 2.0) + pow(s2 - a, 2.0) + pow(s3 - a, 2.0) + pow(s4 - a, 2.0)));

    return sDeviation;
}
