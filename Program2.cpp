/***************************************************************
CSCI 240    Program 2     Spring 2019	

Programmer Team:		Kurt Bruggeman and Lynn Kang

Section:		2 		

Date Due:		2/1/2019 	

Purpose: This program calculates the X and Y coordinates for 
the vertex of a parabola.
***************************************************************/
#include <iostream>		//tells C++ to bring in some code frome library iostream
#include <iomanip>		//This is used by setw and setprecision

using namespace std;	//needed to find cout instruction below 

int main(){				                        //execution starts with main, and at the end of the program we return an int

  double first, second, third, xvert, yvert;                      //int all needed modules

  cout << "Enter the first coefficient: " ;    //Cout stating to enter the first number
  cin >> first;														//Cin for the input of the first number
	
  cout << "Enter the second coefficient: " ;		//Cout stating to enter the second number
  cin >> second;													//Cin for the input of the second number
  
  cout << "Enter the third coefficient: " ;		//Cout stating to enter the third number
  cin >> third;													//Cin for the input of the third number

  xvert = - second / ( 2 * first);						//equation to solve the x coordinate
  yvert = ( first * xvert * xvert ) + ( second * xvert ) + third;	//equation to solve for the Y coordinate

  cout << "\n";                           //Outputs a blank line to seperate lines
  cout << "\n";                           //Outputs a blank line to seperate lines 
  cout << "-------------------------------" << endl;  //
  cout << "  Quadratic Equation Analyzer  " << endl; //cout's for banner display
  cout << "-------------------------------" << endl;//
  cout << "A Coefficient" << setw(18) << fixed << setprecision(3) << first << endl; //cout which shows the first inputed coefficent with 3 decimal places
  cout << "B Coefficient" << setw(18) << fixed << setprecision(3) << second << endl; //cout which shows the second inputed coefficent with 3 decimal places
  cout << "C Coefficient" << setw(18) << fixed << setprecision(3) << third << endl; //cout which shows the third inputed coefficent with 3 decimal places
  cout << "-------------------------------" << endl; //
  cout << "Vertex" << endl;							// cout's for banner display
  cout << "X Coordinate" << setw(19) << fixed << setprecision(3) << xvert << endl;  //cout to show the calculated x coordinate with 3 decimals
  cout << "Y Coordinate" << setw(19) << fixed << setprecision(3) << yvert << endl;  //cout to show the calculated y coordinate with 3 decimals
  
    return 0;		                            //set successful completion return code of 0 in computer

}
