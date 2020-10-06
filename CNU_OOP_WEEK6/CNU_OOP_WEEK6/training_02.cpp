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

	Animal operator+(Animal& a) {
		Animal temp;
		temp.name = this->name + a.name;
		return temp; //+연산자의 기능을 이름을 합치는데 사용할 함수로 overriding
	}

};

int main() {
	Animal cat("Nabi");
	cat.showName();
	Animal dog("Jindo");
	dog.showName();

	Animal catDog = dog + cat; //개냥이 합성
	catDog.showName();

	dog.showName();

	getchar();
	return 0;
}