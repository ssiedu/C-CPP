#include<iostream.h>
#include<conio.h>
class Code
{
   int id;
 public:
   Code(){ }    //Default Constructor
   Code(int a)  // Parametrized Constructor
   {
     id=a;
   }
   Code(Code &x)        // Copy Constructor
   {
     id=x.id;
   }
  void display()
  {
    cout<<id;
  }
};
void main()
{
   Code A(100);
   Code B(A);
   Code D;
   D=A;
   Code C=D;
   clrscr();
   cout<<"\n Id of A :- ";A.display();
   cout<<"\n Id of B :- ";B.display();
   cout<<"\n Id of C :- ";C.display();
   cout<<"\n Id of D :- ";D.display();
   getch();
}




