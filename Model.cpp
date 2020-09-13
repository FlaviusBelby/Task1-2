#include <iostream>
using namespace std;

void square(int l){
	for (int i=0; i<l; i++){
		for (int j=0; j<l; j++){
			cout << "+  ";
		}
		cout << "\n";
	}
}

int main()
{
    int v,l;
    char n[20],f[20];
    cin >> v >> l >> n >> f;
    cout << "\nВариант 1: " << l%v <<"\n";
    cout << "Вариант 2: " << (n[0]-'0')%v <<"\n";
    cout << "Вариант 3: " << (f[0]-'0')%v << "\n";
	cout << "\n";
	square(l);
    return 0;
}