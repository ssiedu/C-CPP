#include<iostream.h>
#include<conio.h>
class Integer
{
  int x,y;
 public:

   Integer()    // inline constructor         // Default Constructor
   {
      x=0;
      y=0;
   }
   Integer(int a,int b);  // Parametrized Constructor
   void display()
   {
     cout<<"\n Value of x :-  "<<x;
     cout<<"\n Value of y :-  "<<y;
   }
};
Integer::Integer(int a,int b)        // Simple Constructor
{
  x=a;
  y=b;
}
void main()
{
  Integer I1;    // Implicitly Calling
  Integer I2=Integer(20,10); // Explicitly Calling
  Integer I3(5,9);  // Implicitly Calling
  clrscr();
  cout<<"\n\n Object I1 \n";
  I1.display();
  cout<<"\n\n Object I2 \n";
  I2.display();
  cout<<"\n\n Object I3 \n";
  I3.display();
  getch();
}










     \