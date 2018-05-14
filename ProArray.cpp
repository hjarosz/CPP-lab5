#include "ProArray.h"
#include <iostream>

void ProArray::set(int position, const Property& obj){
	delete this->m_tab[position];
	this->m_tab[position]=obj.copy();
}

void ProArray::printAll(){
	printf("\n");
	for(int i=0; i<this->m_size; ++i) std::cout<<*(this->m_tab[i])<<std::endl;

};