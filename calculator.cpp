# include <iostream>
using namespace std;
int main() {
    char c;		float N1, N2;
    cout<<"		Abdul Sami  K20ES030"<<endl;
    cout << "Enter Operator from these: ( +, -, *, / ):";
    cin >> c;
    cin >> N1 >> N2;
    switch(c) {
        case '+':
            cout << N1<< " + " << N2 << " = " << N1 + N2;
            break;
        case '-':
            cout << N1 << " - " << N2<< " = " << N1- N2;
            break;
        case '*':
            cout << N1 << " * " << N2 << " = " << N1 * N2;
            break;
        case '/':
            cout << N1 << " / " << N2 << " = " << N1 / N2;
            break;
        default:
            cout << "Error! Its not in Calculation";
            break;
    }
    return 0;
}

