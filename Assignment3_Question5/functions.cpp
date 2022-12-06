/*
Jayden Wehr
functions.cpp

*/

#include "functions.h"
#include<iostream>
#include<map>
using namespace std;


void outputMapData(const map<string, string> m) {

	/*
	* The values in the map will be displayed in the form: {key: value}.
	* const_iterator is used so that the values in the map will not be modified.
	*/
	for (map<string, string>::const_iterator itr = m.begin(); itr != m.end(); ++itr) {

		cout << "{" << itr->first << ": " << itr->second << "}" << endl;
	}

}

void outputCapitalName(const map<string,string> m, string stateName) {

	//The state name and its capital may not be in the map so a bool is used to signal if we do find the state name.
	bool stateNameIsInMap = false;

	//Use a const_iterator to traverse through the map.
	for (map<string, string>::const_iterator itr = m.begin(); itr != m.end(); ++itr) {

		if (itr->first == stateName) {
			cout << itr->second << " ";
			stateNameIsInMap = true;
		}
	}

	//If the state name is not a map, then display a message that the state name was not able to be found.
	if (!stateNameIsInMap) {
		cout << "The state name and its corresponding capital was not found in the map." << endl;
	}

}

