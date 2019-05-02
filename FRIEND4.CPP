#include<iostream.h>
#include<conio.h>
class Complex
{
   float r,i;
 public:
  void getvalue(float real,float imag);
  void show(Complex C);
  friend Complex sum(Complex C1,Complex C2);
};
void Complex::getvalue(float real,float imag)
{
  r=real;
  i=imag;
}
void Complex show(Complex C)
{
  cout<<" "<<C.r<<" +j "<<C.i;
}
Complex sum(Complex C1,Complex C2)   // Friend Function
{
  Complex C3;
  C3.r=C1.r+C2.r;
  C3.i=C1.i+C2.i;
  return C3;
}
void main()
{
  Complex c1,c2,c3;
  clrscr();
  c1.getvalue(2,5);
  c2.getvalue(4,8);
  c3=sum(c1,c2);   // Calling of friend function
  cout<<"\n c1 :- ";c1.show(c1);
  cout<<"\n c2 :- ";c2.show(c2);
  cout<<"\n c3 :- ";c3.show(c3);
  getch();
}










