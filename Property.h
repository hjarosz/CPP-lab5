#pragma once
#include <iostream>

class Property{
public:
	Property() {};
	virtual ~Property(){};

	//metoda do wypisywania
	virtual std::ostream& print(std::ostream& os) const{
		os<<"EMPTY";
		return os;
	}

	virtual Property* copy() const {};
};


//operator do wypisywania
std::ostream& operator<<(std::ostream& os, Property& obj);