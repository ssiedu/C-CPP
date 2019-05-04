#include<iostream.h>
#include<conio.h>
class Number
{
  int a,b,c;
public:
   Number()          // Constructor
   {
     a=10;
     b=20;
     c=30;
   }
 public:
  void display()
  {
    cout<<"\n Value of a :- "<<a;
    cout<<"\n Value of b :- "<<b;
    cout<<"\n Value of c :- "<<c;
  }
};
void main()
{
  Number N1;
  clrscr();
  cout<<"\n Object N1 \n";
  N1.display();
  Number N2;
  cout<<"\n Object N2 \n";
  N2.display();
  getch();
}



