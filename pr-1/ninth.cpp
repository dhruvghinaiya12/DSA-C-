// profit and loss

#include <iostream>
using namespace std;
int main()
{

    int cp, sp, profit, loss;
    cout << "enter selling price and cost price:" << endl;

    cin >> cp >> sp;

if(cp>0 && sp>0){
 if (sp > cp)
    {
        profit = sp - cp;
        cout << "profit is: " << profit << endl;
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        cout << "loss is: " << loss << endl;
    }
    else
    {
        cout << "no profit no loss" << endl;
    }
}
   else{
    cout<<"Cost price and selling price must be non-negative";
   }

    return 0;
}