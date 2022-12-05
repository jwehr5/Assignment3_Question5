#include<iostream>
#include<map>
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

	//Testing method outputCapitalName
	cout << "Calling outputCapitalName with Nebraska... ";
	outputCapitalName(stateDataMap, "Nebraska");
	cout << "[Should be Lincoln]" << endl;

	cout << "Calling outputCapitalName with Texas... ";
	outputCapitalName(stateDataMap, "Texas");
	cout << "[Should be Austin]" << endl;

	return 0;
}