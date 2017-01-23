#include <iostream>
#include <string>
#ifndef CONTACT_H
#define CONTACT_H

using namespace std;

class Contact{
public:
	Contact();

	string getContactName();
	void setContactName(string name);

	string getPhoneNumber();
	void setPhoneNumber(int number);

private:
	string contactName;
	int phoneNum;

};
#endif
