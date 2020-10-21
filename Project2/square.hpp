#include <iostream>
using namespace std;
typedef unsigned short int ushort;

class Square
{
public:
  ushort GetSLength() const;
  void SqSetNewLen(ushort newSlen);
  int Sqperimeter();
  int SqArea();
  Square(ushort Slen);
  ~Square();
private:
  ushort sqLen;
};

//accessors
ushort Square :: GetSLength() const {return sqLen;}
void Square :: SqSetNewLen (ushort newSlen) {sqLen = newSlen;}
int Square :: Sqperimeter()
{
   ushort perimLen = sqLen;
  return perimLen * 4;
}
int Square :: SqArea()
{
  ushort areaLen = sqLen;
  return areaLen * areaLen;
}

//constructors and destructors
Square :: Square ( ushort Slen) {sqLen = Slen;}
Square :: ~Square(){}
