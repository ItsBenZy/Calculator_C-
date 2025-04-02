#include <iostream>

using namespace std;

double hitung (char n ,float &x, float &y); //protype Func

int main()
{
    float a,b;
    char operand;
    
    cout << " | APLIKASI KALKULATOR |" << endl << endl;

    cout << "masukkan angka : ";
    cin >> a;

    while (true)
    {
        cout << "Masukkan Operator [+,-,*,/,=] : ";
        cin >> operand;

        if (operand == '=')
        {
            cout << "hasilnya adalah : " << a << endl;
            break;
        }else if (operand == '+' || operand == '-' || operand == '*' || operand == '/')
        {
            cout << "masukkan angka : ";
            cin >> b;

            hitung (operand,a,b);
        }else {
            cout << "WARNING!! , Operator yang anda masukkan salah" << endl;
        }
    }
    
    cin.get();
    return 0;
}

//func
double hitung (char n , float &x , float &y){
    switch (n){
    case '+': return x +=y;
    case '-': return x -=y;
    case '*': return x *=y;
    case '/': return x /=y;
    default: return x;
    }
}
