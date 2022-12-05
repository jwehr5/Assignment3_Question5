#include "functions.h"
#include<iostream>
#include<map>
using namespace std;


void outputMapData(const map<string, string> m) {

	for (map<string, string>::const_iterator itr = m.begin(); itr != m.end(); ++itr) {

		cout << "The Capital of " << itr->first << " is " << itr->second << endl;
	}

}

void outputCapitalName(const map<string,string> m, string stateName) {

	for (map<string, string>::const_iterator itr = m.begin(); itr != m.end(); ++itr) {

		if (itr->first == stateName) {
			cout << itr->second << " ";
		}
	}


}

