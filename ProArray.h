#pragma once
#include "Property.h"
#include "Property_Int.h"
#include "Property_Float.h"

class ProArray: public Property{
public:
	//konstruktor inicjalizujacy tablice
	ProArray(int size){
		this->m_size=size;
		this->m_tab=new Property*[size];
		for(int i=0; i<m_size; ++i) m_tab[i]=new Property;
	}
	virtual ~ProArray(){
		for(int i=0; i<this->m_size; ++i) delete m_tab[i];
		delete [] this->m_tab;
	};
	
	//funkcje do ustawiania elementow tablicy
	void set(int position,const Property& obj);

	//wypisywanie tablicy !nie dziala i nie zwalnia pamieci
	void printAll();


	Property** m_tab;
	int m_size;

};
