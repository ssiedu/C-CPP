#include<iostream.h>
#include<conio.h>
class ABC;   // Forward Declaration
class XYZ
{
  int x;
 friend void max(XYZ m,ABC n);    // Friend of class XYZ
 public:
  void getvalue()
  {
    cout<<"\n Enter the value of x :- ";
    cin>>x;
  }
  void show()
  {
    cout<<"\n Value of x :- "<<x;
  }

};
class ABC
{
  int a;
 public:
   void getvalue()
   {
     cout<<"\n Enter the value of a :- ";
     cin>>a;
   }
   void show()
   {
     cout<<"\n Value of a :- "<<a;
   }
   friend void max(XYZ m,ABC n);   // Friend of class ABC
};
void max(XYZ m,ABC n)
{
  if(m.x>n.a)
    cout<<"\n Maximum No. :- "<<m.x;
  else
    cout<<"\n Maximum No. :- "<<n.a;
}
void main()
{
  XYZ xyz;
  ABC abc;
  clrscr();
  xyz.getvalue();
  abc.getvalue();
  xyz.show();
  abc.show();
  max(xyz,abc);         // Calling of friend function
  getch();
}


