#include "Property_Int.h"
#include <iostream>

std::ostream& Property_Int::print(std::ostream& os) const{
	os<<this->m_x<<"i";
	return os;
}

void Property_Int::modulo(int data) {
	this->m_x=this->m_x%data;

}

 Property* Property_Int::copy() const{
 	Property_Int* tmp=new Property_Int;
 	tmp->m_x=this->m_x;
 	return tmp;
 }
