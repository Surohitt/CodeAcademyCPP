#include <iostream>

int main() {

	double earthWeight;
	std::cout<<"Hey there, enter your earth weight:\n";
	std::cin >> earthWeight;

	int planetIndex;
	std::cout<<"Pick one of the following planets to travel to using their corresponding index number:\n";
    std::cout<<"1:Mercury\n2:Venus\n3:Mars\n4:Jupiter\n5:Saturn\n";
 	std::cin>>planetIndex;
	std::string planet;

	double relativeGravity;
	switch(planetIndex){
		case 1:
			relativeGravity=0.38;
			planet = "Mercury";
			break;
		case 2:
			relativeGravity=0.91;
			planet = "Venus";
			break;
		case 3:
			relativeGravity=0.38;
			planet = "Mars";
			break;
		case 4:
			relativeGravity=2.34;
			planet = "Jupiter";
			break;
		case 5:
			relativeGravity=1.06;
			planet = "Saturn";
			break;
		default:
			relativeGravity=1;
			planet = "Unknown";
	}
	double newWeight;
	newWeight = relativeGravity*earthWeight;
	std::cout<<"Your weight on "<<planet<<" would be "<<newWeight<<"\n";
}
