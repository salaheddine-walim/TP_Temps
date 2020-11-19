#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Temps
{
private:
	int heure;
	int minute;
	int seconde;
public :
	Temps();
	Temps(int, int, int);
	string fr();
	void eng();
};

