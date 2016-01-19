#include <iostream>

using namespace std;

static int fibo(int p)
{
    if (p == 1 || p == 0)
    {
        return 1;
    }
    else
    {
        return fibo(p-1) + fibo(p-2);
    }
}



int main(){

long i = 0;
long z = 10;

cout<<"1: Imprimir lista."<<endl;
cout<<"2: Buscar elemento."<<endl;
cin>>z;


    switch (z)
    {
    case 1:
        do
        {
            cin.clear();
            cout<<"Introduce limite >>> "<<endl;
            cin>>z;
        }while(cin.fail() == true);

        while(i < z)
        {
            cout<<"Lista de elementos hasta el indice "<<i<<endl;
            cout<<fibo(i)<<endl;
            i += 1;
        }
        break;

    case 2:

        i = 0;
        z = 10;

        do
        {
            cin.clear();
            cout<<"Introduce indice de elemento >>> "<<endl;
            cin>>z;
        }while(cin.fail() == true);
        cout<<"El elemento con indice "<<z<<" tiene un valor de "<<fibo(z)<<endl;
        break;

    default:
        cout<<"Dato no reconocido."<<endl;
    main();
    }
}
