#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    cin.ignore();  // Bu, `cin` ilə `getline` arasında olan newline problemindən qaçmaq üçündür

    while (tests--) {
        string stroka;
        getline(cin, stroka);  // Bütün sətiri oxuyur
        int flag = 0;
        stack<char> s;

        // Stroka daxilində hər bir simvolu emal edirik
        for (int i = 0; i < stroka.length(); i++) {
            // Açıq mötərizələr stekə əlavə olunur
            if (stroka[i] == '(' || stroka[i] == '[') {
                s.push(stroka[i]);
            }
            // Bağlı mötərizələr uyğun gələndə stekdən çıxarılır
            else if (!s.empty() && ((stroka[i] == ')' && s.top() == '(') ||
                                    (stroka[i] == ']' && s.top() == '['))) {
                s.pop();
            } else {
                flag = 1;  // Uyğunsuzluq tapıldıqda flag qaldırılır
                break;
            }
        }

        // Stek boş deyilsə, skobkalar düzgün deyil
        if (!s.empty()) {
            flag = 1;
        }

        // Nəticəni çap edirik
        if (flag) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
