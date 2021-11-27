#include <iostream>

struct Data{
	int x;
	int y;
};

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main(){
	Data *DataPtr = new Data;

	DataPtr->x = 10;
	DataPtr->y = 20;

	uintptr_t iPtr = serialize(DataPtr);

	std::cout << "DataPtr: " << DataPtr << std::endl;
	std::cout << "intPtr: " << iPtr << std::endl;
	std::cout << "deserialize: " << deserialize(iPtr) << std::endl;
	std::cout << "serialize: " << serialize(DataPtr) << std::endl;

	Data *newPtr = deserialize(iPtr);

	std::cout << "\nnewPtr: " << newPtr << std::endl;
	std::cout << "newPtr->X: " << newPtr->x << std::endl;
	std::cout << "newPtr->Y: " << newPtr->y << std::endl;
	std::cout << "serialize newPTR: " << serialize(newPtr) << std::endl;

	newPtr->x += 30;
	std::cout << "\nnewPtr->X: " << newPtr->x << std::endl;
	std::cout << "oldPtr->X: " << DataPtr->x << std::endl;

	delete DataPtr;
}