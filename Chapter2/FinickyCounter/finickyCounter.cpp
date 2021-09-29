//Finicky counter

#include <iostream>

int main() {
	int count = 0;
	while (true) {
		count += 1;

		if (count == 5) {
			continue;
		}
		
		if (count > 10) {
			break;
		}
		std::cout << count << std::endl;
	}
	
	return 0;
}