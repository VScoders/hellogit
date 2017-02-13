#include <iostream>
#include <string>
#include <vector>
#include "Contact.h"

using namespace std;

int main(){
	vector<Contact> contactInfo(4);
	int num;
	string name;
	
	int result;

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

	result = linearSearch(contactInfo,4250161);
	 if(result == -1){
		cout << "not found";
	}else{
		cout << "found at index " << result;
	}

	system ("pause");
	return 0;
}

int linearSearch(auto Data, auto key)
{
	for(int i=0; i < Data.size(); i++)
	{
		if (Data[i] == key)
		{
			return i;
		}
	}
	return -1;
}
