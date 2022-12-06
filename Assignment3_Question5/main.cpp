/*
Jayden Wehr
main.cpp

*/

#include<iostream>
#include<map>
#include<string>
#include "functions.h"
using namespace std;

int main() {

	map<string, string> stateDataMap;

	//Add the pairs to the map.
	stateDataMap["Nebraska"] = "Lincoln";
	stateDataMap["New York"] = "Albany";
	stateDataMap["Ohio"] = "Columbus";
	stateDataMap["California"] = "Sacramento";
	stateDataMap["Massachusetts"] = "Boston";
	stateDataMap["Texas"] = "Austin";

	//Display map data
	outputMapData(stateDataMap);

	//Changing the capital of California to Los Angeles
	stateDataMap["California"] = "Los Angeles";

	cout << endl;

	//Testing method outputCapitalName

	//Get user input
	string userStateName;
	cout << "Enter a state name: ";
	getline(cin, userStateName);

	cout << "The capital of " << userStateName << " is: ";
	outputCapitalName(stateDataMap, userStateName);


	return 0;
}