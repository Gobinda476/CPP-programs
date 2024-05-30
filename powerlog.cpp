
#include<iostream>
using namespace std;

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

/* Driver code */
int main()
{
    int x;
    unsigned int y;
    cin>>x>>y;

    // Function call
    cout<<power(x, y)<<endl;
    return 0;
}
