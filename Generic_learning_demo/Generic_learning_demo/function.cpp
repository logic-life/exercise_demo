#include "function.h"
#include <string>


bool compareIsbn(const Sales_data& args1,const Sales_data& args2) {
	return args1.isbn().size() < args2.isbn().size();


}