//
// Created by yPhysicist on 21.06.2022.
//
#include "library.h"

Adress::Adress() {
    adress = "";
}

Adress::Adress(string Adress) {
    adress = Adress;
}

void Adress::set_Adress(string Adress) {
    adress = Adress;
}

string Adress::get_Adress() const {
    return adress;
}

ostream& operator<<(ostream& x, const Adress& y) {

    return x << "Adress: " << y.get_Adress() << "\n";
}

PochtaAdress::PochtaAdress() {
    index = "";
}

PochtaAdress::PochtaAdress(string Index, string string1) : Adress(string1) {
    index = Index;
}

void PochtaAdress::set_Index(string Index) {
    index = Index;
}

string PochtaAdress::get_Index() const {
    return index;
}

string PochtaAdress::printAdress() {
    return index + adress;
}

EmailAdress::EmailAdress() {
    email = "";
}

EmailAdress::EmailAdress(string Index1, string string2, string Email) : PochtaAdress(Index1, string2) {
    email = Email;
}

void EmailAdress::set_Email(string Email) {
    email = Email;
}

string EmailAdress::get_Email() const {
    return email;
}

string EmailAdress::printAdress() {
    return index + adress + email;
}

