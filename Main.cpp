#include <iostream>
#include <string>
#include <vector>
#include "Contact.h"

using namespace std;

int main(){
	vector<Contact> contactInfo(4);
	int num;
	string name;

	for(int x = 0; x < contactInfo.size(); x++){
		cout << "Please Enter Contact Name: " << endl;
		cin >> name;

		cout << "Please Enter Phone Number: " << endl;
		cin >> num;

		contactInfo[x].setContactName(name);
		contactInfo[x].setPhoneNumber(num);
	}

	cout << endl << "All Contacts" << endl;

	for(int x = 0; x < contactInfo.size(); x++){
		cout << contactInfo[x].getContactName() << " : " << contactInfo[x].getPhoneNumber() << endl;
	}

	system ("pasue");
	return 0;
}
