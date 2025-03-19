#include <iostream>
using namespace std;

int main()
{
    int a,b,x,on,sum = 0,counter = 0;

    cin >> a;
    cin >> b;
    cin >> x;

    stack<int> AOb;
    stack<int> BOb;

    for(int i=0; i<a; i++)
    {
        cin >> on;
        AOb.push(on);
    }

    for(int i=0; i<b; i++)
    {

        cin >> on;
        BOb.push(on);

    }


    while(true)
    {
        if(sum < x)
        {
            if(AOb.top() <= BOb.top())
            {
                sum += AOb.top();
                if(sum <=x )
                {
                    AOb.pop();
                    counter =counter + 1;
                }

                else
                    break;
            }

            else
            {
                sum += BOb.top();
                if(sum <=x )
                {
                    BOb.pop();
                    counter =counter+1;
                }

                else
                    break;

            }
        }
        else
            break;
        cout << counter;


    }
