#pragma once
#include "Property.h"

class Property_Int: public Property{
public:
	Property_Int() {};
	Property_Int(int data): m_x(data){};
	//virtual ~Property_Int(){};

	//metoda do wypisywania
	virtual std::ostream& print(std::ostream& os) const;

	//ustawia m_x na modulo data
	void modulo(int data);

	//metoda pomocnicza do wpisywania do tablicy
	virtual Property* copy()const;

	int m_x;

};
