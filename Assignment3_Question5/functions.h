/*
Jayden Wehr
functions.h

*/

#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H 
#include <iostream>
#include <map>
using namespace std;

/*
* outputMapData displays the keys and their corresponding value to the map, stateDataMap.
* 
* @param m This is the map whose keys and value will be displayed.
* @pre The map must not be empty.
*/
void outputMapData(const map<string, string> m);


/*
* outputCapitalName displays the capital name based on the given state name.
*
* @param m This is the map where we'll be looking for the capital name from the given state name.
* @param stateName This is the name of the state, the key that will help us the find its corresponding value which will be the capital.
* @pre The map must not be empty.
*/
void outputCapitalName(const map<string,string> m , string stateName);


#endif 

