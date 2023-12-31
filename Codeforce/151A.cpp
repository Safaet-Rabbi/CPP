#include<iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_ml=k*l;
    int total_limes=c*d;
    int total_salt=p;

    int toast_drink=total_ml/(n*nl);
    int toast_lime=total_limes/n;
    int toast_salt=total_salt/(n*np);

    int min_toast=min(toast_drink,min(toast_lime,toast_salt));
    cout<<min_toast<<endl;
}
