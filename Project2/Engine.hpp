#include <iostream>
#include "rectangle.hpp"
#include "square.hpp"
#include "menus.hpp"
#include "Drawings.hpp"
typedef unsigned short int ushort;
using namespace std;

void RectangleMainEngine();
void SquareMainEngine();


void BaseEngine()
{
  Welcomeing();

  for (ushort counter = 1;;counter ++)
  {
    if (counter > 1)
    {
      cout << "\n";
      cout << "Which shape would you like to choose now?  " << endl;
    }
      ushort choice = Menu1() ;
      if (choice == 1)
      {
      RectangleMainEngine();
      continue;
      }
      if (choice == 2)
      {
        SquareMainEngine();
        continue;
      }
      if (choice == 3)
      {
        cout << "\nUnderstandable.\n Have a nice day.";
        break;
      }
    }
  }


void RectangleMainEngine()
{
  cout << "\nYou have chosen the rectangle."<< endl;
  cout << "Please enter the sides of the rectangle." << endl;
  cout << "Length : ";
  ushort length, bredth;
  cin >> length;
  cout <<"Bredth : ";
  cin >> bredth;
  Rectangle MyRectangle(length, bredth);

  cout << "\nYou have decided the sides of the rectangle."<< endl;
  while (true)
  {
    cout <<"\n";
    cout << "What would you like to do next?  " << endl;
    ushort choice3 = Menu2();
    if (choice3 == 1)
    {
      ushort lentouse = MyRectangle.GetLength();
      ushort bretouse = MyRectangle.GetBredth();
      RectangleDrawerFinal(lentouse, bretouse);
      cout << "\n";
    }
    if (choice3 == 2)
    {
      int recperimanswer = MyRectangle.GetPerimeter();
      cout<< "\nThe perimeter of the rectangle is " << recperimanswer
      << " units" << endl;
    }
    if (choice3 == 3)
    {
      int recareaanswer = MyRectangle.GetArea();
      cout << "\nThe area of the rectangle is " << recareaanswer
      << " units" << endl;
    }
    if (choice3 == 4)
    {
      ushort newlen;
      cout << "Please enter the new length: ";
      cin>> newlen;
      MyRectangle.SetLength(newlen);
      cout << "\nNew length set to " << newlen << " units." << endl;
    }
    if (choice3 == 5)
    {
      ushort newbre;
      cout << "Please enter the new bredth: ";
      cin>> newbre;
      MyRectangle.SetBredth(newbre);
      cout << "\nNew bredth set to " << newbre << " units." << endl;
    }
    if (choice3 == 6)
    {
      ushort newlen2, newbre2;
      cout << "Please enter the new length and bredth." <<endl
      << "New length: ";
      cin >> newlen2;
      cout << "New bredth: ";
      cin >> newbre2;
      MyRectangle.SetNewSizes(newlen2, newbre2);
      cout << "\nNew length and bredth set to " << newlen2 << " and"
      << newbre2 << " respectively." << endl;
    }
    if (choice3 == 7)
    {
      break;
    }
  }
}

void SquareMainEngine()
{
  cout << "\nYou have chosen the square."<< endl;
  cout << "Please enter the side of the square." << endl;
  cout << "Side : ";
  ushort side;
  cin >> side;
  Square MySquare(side);

  cout << "\nYou have decided the side of the square."<< endl;
  while (true)
  {
    cout <<"\n";
    cout << "What would you like to do next?  " << endl;
    ushort choice4 = Menu3();
    if (choice4 == 1)
    {
      ushort sidetouse = MySquare.GetSLength();
      SquareDrawerFinal(sidetouse);
      cout << "\n";
    }
    if (choice4 == 2)
    {
      int sqperimanswer = MySquare.Sqperimeter();
      cout<< "\nThe perimeter of the square is " << sqperimanswer
      << " units" << endl;
    }
    if (choice4 == 3)
    {
      int sqareaanswer = MySquare.SqArea();
      cout << "\nThe area of the square is " << sqareaanswer
      << " units" << endl;
    }
    if (choice4 == 4)
    {
      ushort newside;
      cout << "Please enter the new length of the side : ";
      cin>> newside;
      MySquare.SqSetNewLen(newside);
      cout << "\nNew length set to " << newside << " units." << endl;
    }
    if (choice4 == 5)
    {
      break;
    }
  }
}
