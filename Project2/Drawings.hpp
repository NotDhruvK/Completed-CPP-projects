#include <iostream>
using namespace std;
typedef unsigned short int ushort;

void RectangleDrawerFinal();

void DrawerTop(ushort length)
{
    ushort forParam1;
    for (forParam1 = 0; forParam1 < length; forParam1 ++ )
    {
      if (forParam1 == 0)
        {cout << "  __  ";
        continue;}
      else
      {cout << "__  ";};
      continue;
    }
}

void DrawerMiddle(ushort length)
{
  ushort forParam2;
  for (forParam2 = 0; forParam2 < length; forParam2 ++)
  {
    if (forParam2 == 0)
    {
      cout << "|  ";
    }
    if (forParam2 == length - 1)
    {
      cout << "  |";
    }
    else
    {
      cout << "    ";
    }
  }
}

void DrawerBottom( ushort length)
{
  ushort forParam3;
  for (forParam3 = 0; forParam3 < length -1; forParam3 ++)
  {
    if (forParam3 == 0)
    {
      cout << "| __ ";
    }
    if (forParam3 == length - 2)
    {
      cout << " __ |";
    }
    else
    {
      cout << " __ ";
    }
  }
}

void RectangleDrawerFinal(ushort length, ushort bredth)
{
  DrawerTop(length);
  cout << "\n";
  for (ushort count = 0; count < bredth - 1; count++)
  {
    DrawerMiddle(length);
    cout << "\n";
  }
  DrawerBottom(length);
}

void SquareTop(ushort side)
{
  ushort forParam4;
  for (forParam4 = 0; forParam4 < side; forParam4 ++)
  {
    if(forParam4 == 0)
    {
      cout << " __";
    }
    else
    {
      cout << "__";
    }
  }
}

void SquareMiddle(ushort side)
{
  ushort forParam5;
  for(forParam5 = 0; forParam5 < side; forParam5++)
  {
    if (forParam5 == 0)
    {
      cout << "| ";
    }
    if (forParam5 == side - 1)
    {
      cout << " |";
    }
    else
    {
      cout << "  ";
    }
  }
}

void SquareBottom(ushort side)
{
  ushort forParam6;
  for (forParam6 = 0; forParam6 < side; forParam6++)
  {
    if (forParam6 == 0)
    {
      cout << "|_";
    }
    if (forParam6 == side - 1)
    {
      cout << "_|";
    }
    else
    {
      cout << "__";
    }
  }
}

void SquareDrawerFinal(ushort side)
{
  SquareTop(side);
  cout << "\n";
  for (ushort counte = 0; counte < side - 1; counte++)
  {
    SquareMiddle(side);
    cout<< "\n";
  }
  SquareBottom(side);
}
