
#include "library.h"

int main() {
    Adress adress("Huebes");
    cout << adress;

    PochtaAdress full_adress("249834 / ", "Kondrovo, ul. Pushkina, 33\n");
    cout << full_adress.printAdress();

    EmailAdress email_full_adress("250812 / ", "Moscow, Arbat, 1 / ", "putin@kremlin.ru\n");
    cout << email_full_adress.printAdress();

    string PolAdress = "";

    cout << "Input your adress: " << endl;
    getline(cin, PolAdress);
    adress.set_Adress(PolAdress);
    cout << adress;

    // здесь можно попробовать ввести и другие адреса в других "классах"
}
