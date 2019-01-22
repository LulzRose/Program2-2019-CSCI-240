/***************************************************************
CSCI 240    Program 2     Spring 2019	Coded in Geany on Debian

Programmer:		Kurt Bruggeman K̸̡̞̣̒ͩ̎͑͊̒̀ͦ͐̅͜ͅ.̶̷̭̫̭̥̥̞̓̒̿͗̋̽͒ͯ͐͑ͬ̐ͬͦͤ͊͗͟͞L̘̦̫̻͚̖̖͎̺̯̘̜̹̣̦̦͌͛̓̎͗́͢͡.̴̵̨̻̲̪̱͙̺̺̝ͩ̏̈͋ͬ̈́͐̿̔̋ͮͩͭ̓͐́̚͜M̶̵̵̡̻͎̯͖̊̍̇̀̈ͯ̋ͦ̃̽͊ͯ̉ͪ́͐ͮ̑̽́.̠̦͈̠͖ͨ͑ͪ̈́̆ͪ̌̿̓͒͗̄ͬ͌̀̀͠͝R̛͈̻̖͓̥͖͕̘̜̠̳̻̲̳̤̎̿̅͗ͤ͌ͤ̊ͭ.ͣ̄͋̓̋͑҉̵̦̹̖̭͖͙̩̙͍̫̞͙͚̪̠B̳̗̠̙̲ͪͪͬ̈ͤͣ̉̅̃̅̿̓̍ͯ͂͂͗ͤ́͘

Section:		2

Date Due:		2/1/2019 	(Completed 1/19/19)

Purpose: This program calculates the X and Y coordinates for 
the vertex of a parabola.

***************************************************************/
#include <iostream>		//tells C++ to bring in some code frome library iostream
#include <iomanip>		//This is unnecessary for this program I am unsure why it is a requirement

using namespace std;	//needed to find cout instruction below 



int main(){				                        //execution starts with main, and at the end of the program we return an int

  double first, second, third, xvert, yvert;                      //int all needed modules

  cout << "Enter the first coefficient: " ;    //Cout stating to enter the first number
  cin >> first;														//Cin for the input of the first number
	
  cout << "Enter the second coefficient: " ;		//Cout stating to enter the second number
  cin >> second;													//Cin for the input of the second number
  
  cout << "Enter the third coefficient: " ;		//Cout stating to enter the third number
  cin >> third;													//Cin for the input of the third number

  xvert = - second / ( 2 * first);
  yvert = ( first * xvert * xvert ) + ( second * xvert ) + third;

  cout << "\n";                           //Outputs a blank line to seperate equation types
  cout << "\n";                           //Outputs a blank line to seperate equation types
  cout << "-------------------------------" << endl;
  cout << "  Quadratic Equation Analyzer  " << endl;
  cout << "-------------------------------" << endl;
  cout << "A Coefficient             " << fixed << setprecision(3) << first << endl;
  cout << "B Coefficient             " << fixed << setprecision(3) << second << endl;
  cout << "C Coefficient             " << fixed << setprecision(3) << third << endl;
  cout << "-------------------------------" << endl;
  cout << "Vertex                         " << endl;
  cout << "X Coordinate             " << fixed << setprecision(3) << xvert << endl;  
  cout << "Y Coordinate             " << fixed << setprecision(3) << yvert << endl; 


  
    return 0;		                            //set successful completion return code of 0 in computer

}
