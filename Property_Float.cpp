#include "Property_Float.h"
#include <iostream>
#include <math.h>

std::ostream& Property_Float::print(std::ostream& os) const{
	os<<this->m_x<<"f";
	return os;
}

void Property_Float::inverse(){
	this->m_x=pow(this->m_x,-1);
}

Property* Property_Float::copy() const{
 	Property_Float* tmp=new Property_Float;
 	tmp->m_x=this->m_x;
 	return tmp;
 }
