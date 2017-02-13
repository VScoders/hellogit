#include <iostream>
#include <string>
#include <vector>
#include "Contact.h"

using namespace std;

int linearSearch(auto Data, auto key);//prototype

int main(){
	vector<Contact> contactInfo(4);
	int num;
	string name;
	vector<Contact> V;
	
	int result;

	for(int x = 0; x < contactInfo.size(); x++){
		cout << "Please Enter Contact Name: " << endl;
		cin >> name;

		cout << "Please Enter Phone Number: " << endl;
		cin >> num;

		contactInfo[x].setContactName(name);
		contactInfo[x].setPhoneNumber(num);
		V.push_back(contactInfo);
	}

	cout << endl << "All Contacts" << endl;

	for(int x = 0; x < contactInfo.size(); x++){
		cout << contactInfo[x].getContactName() << " : " << contactInfo[x].getPhoneNumber() << endl;
	}

	result = linearSearch(V,4250161);
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
		if (Data[i].getPhoneNumber() == key)
		{
			return i;
		}
	}
	return -1;
}
