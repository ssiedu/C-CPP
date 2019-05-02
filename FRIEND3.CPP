#include<iostream.h>
#include<conio.h>
class Class_2;   // Forward Declaration
class Class_1
{
  int v1;
 public:
   void setvalue()
   {
     cout<<"\n Enter the value of v1 :- ";
     cin>>v1;
   }
   void display()
   {
     cout<<"\n Value of v1 :- "<<v1;
   }
  friend void Exchange(Class_1 &c1,Class_2 &c2);
};
class Class_2
{
  int v2;
 public:
   void setvalue()
   {
     cout<<"\n Enter the value of v2 :- ";
     cin>>v2;
   }
   void display()
   {
     cout<<"\n Value of v2 :- "<<v2;
   }
 protected:
  friend void Exchange(Class_1 &c1,Class_2 &c2);
};
void Exchange(Class_1 &c1,Class_2 &c2)
{
  int temp;
  temp=c1.v1;
  c1.v1=c2.v2;
  c2.v2=temp;
}
void main()
{
  Class_1 C1;
  Class_2 C2;
  clrscr();
  C1.setvalue();
  C2.setvalue();
  cout<<"\n Before Exchanage \n";
  C1.display();
  C2.display();
  Exchange(C1,C2);
  cout<<"\n After Exchange \n";
  C1.display();
  C2.display();
  getch();
}

























































																																																																																																																															      