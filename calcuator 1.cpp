#include <iostream>

int main() {
	float num1, num2, result;
	char op;
	std::cout << "Please enter expession : ";
	std::cin >> num1 >> op >> num2;
	switch (op){
		case '+':
			result = num1 + num2;
			std::cout<<result;
			break;
		case '-':
			result = num1 - num2;
			std::cout<<result;
			break;
		case '*':
			result = num1 * num2;
			std::cout<<result;
			break;
		case'/':
			result = num1 / num2;
			std::cout<<result;
			break;
		
		
	}

}