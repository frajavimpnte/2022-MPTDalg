#include <iostream>
#include "EOQ.hh"

using namespace std;

int main()
{
    cout << "EOQ constuctor default testing --------------------------" << endl;
    EOQ eoqDefault;

    eoqDefault.print();

    eoqDefault.setK(5.0f);
    eoqDefault.setH(0.08f);
    eoqDefault.setD(500.0f);

    eoqDefault.print();
    cout << "Solución " << eoqDefault.solve() << endl;

    cout << "EOQ con parametros testing --------------------------" << endl;
    EOQ eoqParams(5.0f, 0.08f, 500.0f);

    eoqParams.print();
    cout << "Solución " << eoqParams.solve() << endl;

    return 0;
}
