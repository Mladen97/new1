#include <iostream>

using namespace std;
/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Mladen Filipov
 * @idnumber 45269
 * @task 10
 * @compiler GCC
 *
 */
int main()
{
    double a,b,c,a1,b1,c1,x,y,rangM,rangEM;
    cin>>a>>b>>c>>a1>>b1>>c1;
    double g,p,r,v;
   rangM=((a*b1)-(b*a1));
   rangEM=(((a*b1)+(b*c1))-((b*a1)+(c*b1)));
   g=(a*b1);
   p=(b*a1);
   r=(a*c1);
   v=(c*a1);

        if((g-p)!=0){
           x= ((c*b1) - (b*c1))/((a*b1)-(b*a1));
           y=((a*c1) - (c*a1))/((a*b1) - (b*a1));
           cout<<x<<" "<<y<<"\n";
       }
       else if((g-p)==0 && (r-v)==0){
        cout<<"Many solutions"<<"\n";
       }
else if((g-p)==0 && (r-v)!=0){
      cout<<"No solution"<<"\n";
}
    return 0;
}
