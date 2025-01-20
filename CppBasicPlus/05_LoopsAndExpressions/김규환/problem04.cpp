
#include <iostream>

using namespace std;

int main()
{
    int customerA = 100000;

    int customerB = 100000;

    int month = 0;

    cout << "month" << " : " << "customerA" << " : " << "customerB" <<endl;

    while(true)
    {
        month  = month + 1;
        customerA = customerA + (100000*0.10);

        customerB = customerB + (customerB*0.05);

        cout << month << " : " << customerA << " : " << customerB <<endl;

        if(customerA<customerB)
        {   
            cout << "개월수 : " << month <<endl;
            break;
        }
    }

    return 0;
}
