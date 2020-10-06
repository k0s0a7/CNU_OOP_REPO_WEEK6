#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

class Animal {
private:
	std::string name;

public:
	Animal() {};
	Animal(std::string name) : name(name) {};

	void showName() {
		std::cout << "Name is " << name << std::endl;
	}

	Animal& operator+(const Animal& a) { 
		name += a.name;// 현재객체의 name에 저장된채로 넘김. this->name도 바뀜.
		return *this;
	}
};

int main() {
	Animal cat("Nabi");
	cat.showName();
	Animal dog("Jindo");
	dog.showName();

	Animal catDog = dog + cat;//개냥이 합성
	catDog.showName();
	dog.showName();
	
	getchar();
	return 0;
}