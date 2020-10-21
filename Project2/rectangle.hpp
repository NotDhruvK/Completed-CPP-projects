#include <iostream>
using namespace std;
typedef unsigned short int ushort;

class Rectangle
{
public:
  void SetNewSizes(ushort newLen, ushort newBre);
  void SetLength(ushort Length);
  void SetBredth(ushort Bredth);
  ushort GetLength() const;
  ushort GetBredth() const;
  int GetPerimeter();
  int GetArea();
  Rectangle(ushort length, ushort bredth);
  ~Rectangle();
private:
  ushort itslength, itsbredth;
};

// accessors
ushort Rectangle:: GetLength() const {return itslength;}
ushort Rectangle:: GetBredth() const {return itsbredth;}
int Rectangle :: GetArea()
{
  ushort length = itslength;
  ushort bredth = itsbredth;

  return length * bredth;
}
int Rectangle:: GetPerimeter()
{
  ushort length = itslength;
  ushort bredth = itsbredth;
  int perimeter = 2 * (length + bredth);
  return perimeter;
}
void Rectangle:: SetLength(ushort length) {itslength = length;}
void Rectangle :: SetBredth(ushort bredth) {itsbredth = bredth;}

void Rectangle:: SetNewSizes(ushort newLen, ushort newBre)
{
  itslength = newLen;
  itsbredth = newBre;
}

//constructors and destructors
Rectangle :: Rectangle(ushort length, ushort bredth)
{
  itslength = length;
  itsbredth = bredth;
}
Rectangle :: ~Rectangle(){}
