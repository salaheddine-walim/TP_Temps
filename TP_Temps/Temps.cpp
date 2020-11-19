#include "Temps.h"
#include <iostream>
#include <string>

Temps::Temps()
{
	this->heure = 0;
	this->minute = 0;
	this->seconde = 0;
}

Temps::Temps(int h, int m, int s)
{
	this->heure = h;
	this->minute = m;
	this->seconde = s;
}

std::string Temps::fr()
{
	std::string h, m, s;
	h = this->heure < 10 ? "0" + std::to_string(this->heure) : std::to_string(this->heure);
	m = this->minute < 10 ? "0" + std::to_string(this->minute) : std::to_string(this->minute);
	s = this->seconde < 10 ? "0" + std::to_string( this->seconde) : std::to_string(this->seconde);

	return "Heure francaise : " + h + " :" + m + " :" + s ;

}

void Temps::eng()
{
	std::string h,m;
	if (this->heure >= 12) {
		m = "PM";
		switch (this->heure) {
		case 12:
			h = "12"; break;
		case 13:
			h = "01"; break;
		case 14:
			h = "02"; break;
		case 15:
			h = "03"; break;
		case 16:
			h = "04"; break;
		case 17:
			h = "05"; break;
		case 18:
			h = "06"; break;
		case 19:
			h = "07"; break;
		case 20:
			h = "08"; break;
		case 21:
			h = "09"; break;
		case 22:
			h = "10"; break;
		case 23:
			h = "11"; break;
		}
		std::cout <<"Heure Anglaise : "<< h <<" :" << this->minute<<" :" << this->seconde<<"PM" << std::endl;
	}
	else if(this->heure!=0){
		m = "AM";
		std::cout << "Heure Anglaise : "<<Temps::fr()<<m << std::endl;
	}
	else {
		h = "12";
		std::cout <<"Heure Anglaise : " << h << " :" << this->minute << " :" << this->seconde << "AM" << std::endl;
	}
	
}
