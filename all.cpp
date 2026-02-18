#include<iostream>
#include<limits>
#include<iomanip>
int main() {
	// your code goes here
	std::cout<<"   ====TEMPERATURE CONVERTER====  "<<std::endl;
	std::cout<<"Farenheit(F)=";
	double farenheit;
	
	while(!(std::cin>>farenheit)){
	    std::cin.clear();
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	    std::cout<<"Invalid input please enter the temperature"<<std::endl;
	    
	}
	double celsius,kelvin;
	celsius=(farenheit-32)*5/9;
	kelvin=273.15+celsius;
	std::cout<<std::endl;
	std::cout<<std::setw(10)<<"Farenheit(F) ";
	std::cout<<std::setw(10)<<"Celsius(C) ";
	std::cout<<std::setw(10)<<"Kelvin(K)";
	std::cout<<std::endl;
	
	std::cout<<std::fixed<<std::setprecision(2);
	std::cout<<std::setw(9)<<farenheit<<"F";
	std::cout<<std::setw(8)<<celsius<<"C";
	std::cout<<std::setw(8)<<kelvin<<"K";
   
	

}
