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
 * @task 2
 * @compiler GCC
 *
 */
int main()
{
  long long  int x,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

   long long int year19;
   long long int month;
    long long int day;
     long long sex;

    cin>>x;
    n1=x/1000000000;
    n2=(x%1000000000/100000000);
    n3=(x%1000000000/10000000)%10;
    n4=(x%100000000/1000000)%10;
    n5=x%1000000/100000;
    n6=(x%100000/10000);
    n7=((x%(10000))/(1000));
    n8=((x%(1000))/(100));
    n9=((x%(100))/(10));
    n10=x%10;

month=(n3)*10 + n4;
day=(n5)*10 + n6;
    year19=1900+((n1)*10+n2);
    sex=n9;


    if(year19>=1900 && year19<1999){
       if(year19%4==0 && year19%100!=0){
            if(month>=1 && month<=12){
            if(month==1){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
            if(month==2){

                if(day>=1 && day<=29){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==3){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==4){

                if(day>=1 && day<=30){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==5){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            } if(month==6){

                if(day>=1 && day<=30){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==7){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==8){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==9){

                if(day>=1 && day<=30){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==10){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==11){

                if(day>=1 && day<=30){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==12){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
            }
            else{
                    cout<<"Bad input data!"<<"\n";
                }


       }
       else{
            if(month>=1 && month<=12){

            if(month==1 ){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
            if(month==2){

                if(day>=1 && day<=28){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==3){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==4){

                if(day>=1 && day<=30){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==5){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            } if(month==6){

                if(day>=1 && day<=30){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==7){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==8){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==9){

                if(day>=1 && day<=30){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==10){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==11){

                if(day>=1 && day<=30){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
             if(month==12){

                if(day>=1 && day<=31){
                    cout<<month<<"."<<day<<"."<<year19;
                    if(sex%2==0){
                        cout<<"."<<"M"<<"\n";
                    }
                    else{
                        cout<<"."<<"F"<<"\n";
                    }
                }
                else{
                    cout<<"Bad input data!"<<"\n";
                }
            }
            }
            else{
                    cout<<"Bad input data!"<<"\n";
                }



       }

    }


    return 0;
}
