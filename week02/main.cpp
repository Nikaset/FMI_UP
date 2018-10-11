#include <iostream>

using namespace std;

int main()
/*{
    int a,b,c;
    cin >>a>>b;
    c=a;
    a=b;
    b=c;
    cout <<"Sled kato razmenihme reda na vashite chisla te sa "<<a<<" i " <<b;
    return 0;
}
*/

/*
{
    int a;
    cin>>a;
    if (a%2==0&&a%3==0&&a%5==0)
    {cout<<"Vasheto chislo se deli ednovremenno na 2, 3 i 5";}
    else
    {cout<<"Vasheto chislo ne se deli ednovremenno na 2,3, i 5";}
    return 0;
}
*/

/*
{
    int a,b;
    cout<<"Vuvedete 2 chisla"<<endl;
    cin>>a>>b;
    if (a%b==0)
        cout<<"Vtoroto chislo deli purvoto bez ostatuk";
    else
        cout<<"Vtoroto chislo ne e delitel na purvoto";
    return 0;
}
*/

/*
{
    double pi=3.1428,S,P;
    int r;
    cout<<"Vavede daljinata na radiusa na okrajnostta v santimetri"<<endl;
    cin>>r;
    S=pi*r*r;
    P=2*pi*r;
    cout<<"Radiusat na okrajnostta e "<<P<<"cm, a liceto e "<<S<<"sm^2.";
    return 0;
}
*/

{
    int a,b,c,d,e;
    cout<<"Vavedete polojitelno tricifreno chislo"<<endl;
    cin>>a;
    if (99<a&&a<1000)
        {
        b=a%100/10;
        c=a%10;
        d=a/100;
        e=b+c+d;
        cout<<e;
        }
        return 0;
}



















