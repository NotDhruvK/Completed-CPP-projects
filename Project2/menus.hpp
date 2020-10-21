#include <iostream>
using namespace std;
typedef unsigned short int ushort;

ushort Welcomeing()
{
  cout << "\n\n\t \t \t \t \t Welcome to a shape drawer application."<< endl;
  cout << "\nONLY ENTER THE NUMBERS CORRESPONDING TO THE MENU."<<endl;
  cout << "\nChoose a shape of your choice.\n";
}

ushort Menu1()
{
  cout << "1. Rectangle"<< endl;
  cout << "2. Square" << endl;
  cout << "3. Exit" << endl;
  cout << "What is you choice?  " ;
  ushort Choice;
  cin >> Choice;
  return Choice;

}
 ushort Menu2() // rectangle inner menu
 {
   cout << "1. Draw your rectangle." << endl;
   cout << "2. Find perimeter." << endl;
   cout << "3. Find area." << endl;
   cout << "4. Set new length." << endl;
   cout << "5. Set new bredth." << endl;
   cout << "6. Set length and bredth together."<< endl;
   cout << "7. Go to main menu." << endl;
   cout << "What is you choice?  " ;
   ushort Choice;
   cin >> Choice;
   return Choice;
 }

 ushort Menu3() // menu for the insde of the Square
 {
   cout << "1. Draw your square." << endl;
   cout << "2. Find the perimeter." << endl;
   cout << "3. Find the area."<< endl;
   cout << "4. Set new side length." << endl;
   cout << "5. Go to main menu." << endl;
   cout << "What is you choice?  " ;
   ushort Choice;
   cin >> Choice;
   return Choice;
 }
