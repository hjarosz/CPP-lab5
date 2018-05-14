#include "Property.h"

std::ostream& operator<<(std::ostream& os, Property& obj){
	obj.print(os);
	return os;
}
