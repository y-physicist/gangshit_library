//
// Created by yPhysicist on 21.06.2022.
//
#include <iostream>

#ifndef GANGSHIT_LIBRARY_LIBRARY_H
#define GANGSHIT_LIBRARY_LIBRARY_H

using namespace std;

class Adress {
public:
    Adress();
    Adress(string Adress);
    void set_Adress(string Adress);
    string get_Adress() const;
    friend ostream& operator<<(ostream& x, const Adress& y);

protected:
    string adress;
};

class PochtaAdress : protected Adress {
public:
    PochtaAdress();
    PochtaAdress(string Index, string string1);
    void set_Index(string Index);
    string get_Index() const;
    string printAdress();
protected:
    string index; // pochtaAdress = "index" + "Adress"
};

class EmailAdress : protected PochtaAdress {
public:
    EmailAdress();
    EmailAdress(string Index1, string string2, string Email);
    void set_Email(string Email);
    string get_Email() const;
    string printAdress();
private:
    string email;
};
#endif //GANGSHIT_LIBRARY_LIBRARY_H
