#include <iostream>
#include <string>
#include "Contact.h"

using namespace std;

Contact::Contact(){
	contactName = "";
	phoneNum = 0;
}

string Contact::getContactName(){
	return contactName;
}

void Contact::setContactName(string name){
	contactName = name;
}

int Contact::getPhoneNumber(){
	return phoneNum;
}

void Contact::setPhoneNumber(int number){
	phoneNum = number;
}
