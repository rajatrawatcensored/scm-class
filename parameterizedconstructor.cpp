#include <iostream>
using namespace std;
class Line
{
public:
  double getLength(void);
  Line (double len);
private:
  double length;
};
Line :: Line (double len)
{
  cout<<"Length = "<<len<<endl;
  length = len;
}

double Line :: getLength(void)
{
  return length;
}

int main()
{
  Line line(10.0);
  cout<<"Length of Line ";
  cout<<line.getLength()<<endl;
  Line line1=Line(6.0);
  cout<<"Length of Line :";
  cout<<line.getLength()<<endl;
return 0;
}
