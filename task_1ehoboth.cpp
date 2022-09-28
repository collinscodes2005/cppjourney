#include<iostream>
using namespace std;
int main()
{
    int u = 3;
    int v;
    int *pu;  /* pointer to an integer */
    int *pv;  /* pointer to an integer */
    pu = &u; /* assign address of u to pu */
    v = *pu;  /* assign value of u to v */
    pv = &v; /* assign address of v to pv */
    cout<<"\n  "<<u<<"  "<<&u<<""<< pu<<""<< *pu;
    cout<<"\n"<<"\n"<<v<<&v<<pv<<*pv;
	    return 0;
}

