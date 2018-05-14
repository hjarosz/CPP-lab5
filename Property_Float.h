#pragma once
#include "Property.h"

class Property_Float: public Property{
public:
	Property_Float() {};
	Property_Float(float data): m_x(data){};
	//virtual ~Property_Float(){};


	//metoda do wypisywania
	virtual std::ostream& print(std::ostream& os) const;

	//podnosci m_x do -1 potegi
	void inverse();


	//metoda pomocnicza do wpisywania do tablicy
	virtual Property* copy() const;
	
	float m_x;

};
