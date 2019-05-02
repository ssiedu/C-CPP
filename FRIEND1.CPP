#include<iostream.h>
#include<conio.h>
class Sample
{
  int x,y;
 private:
 friend void mean(Sample s);
 public:
  void getvalue()
  {
    cout<<"\n Enter the value of x and y :- ";
    cin>>x>>y;
  }
  void display()
  {
    cout<<"\n Value of x :- "<<x;
    cout<<"\n value of y :- "<<y;
  }

};
void mean(Sample s)
{
  cout<<"\n Mean :- "<<(s.x+s.y)/2.0;
}
void main()
{
  Sample S;
  clrscr();
  S.getvalue();
  S.display();
  mean(S);
  getch();
}














































																																																																																																																															      