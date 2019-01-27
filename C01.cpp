#include<iostream>
#include<cmath>

using namespace std;
double x,y,c;
int recursion(double mini, double maxi)
{
    double middle=(maxi+mini)/2;
    double hx=sqrt(abs(pow(x,2)-pow(middle,2)));
    double hy=sqrt(abs(pow(y,2)-pow(middle,2)));
    if(maxi-mini<0.001)
    {
        cout<<maxi<<endl;
        return maxi;
    }
    if(c>hx*hy/(hy+hx))
    {
        recursion(mini,middle);
    }
    if(c<hx*hy/(hy+hx))
    {
        recursion(middle,maxi);
    }

}
int main()
{
    cout.precision(5);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++)
    {
        double mini=0,maxi;
        cin>>x>>y>>c;
        maxi=min(x,y);

        recursion(mini,maxi);

    }
    return 0;
}
