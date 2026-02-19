#include<iostream>
#include<string>
#include<limits>
#include<iomanip>

int main() {
	// your code goes here
	std::string name;
	int customer_id;
	double balance;
	std::cout<<"Enter customer name: "<<std::endl;
	std::getline(std::cin,name);
	while(!(std::cin>>customer_id)||customer_id<1000||customer_id>99999){
	    std::cin.clear();
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	    std::cout<<"Invalid input please try again"<<std::endl;
	}
	while(!(std::cin>>balance)||balance<0){
	    std::cin.clear();
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	    std::cout<<"Invalid balance entered please try again"<<std::endl;
	}
	std::cout<<std::setfill('=')<<std::setw(40)<<""<<std::endl;
	std::cout<<std::left<<std::setfill(' ')<<"CUSTOMER INFORMATION"<<std::endl;
	std::cout<<std::setfill('=')<<std::setw(40)<<""<<std::endl;
	
	std::cout<<std::left;
	std::cout<<"Customer Name: "<<name<<std::endl;
	std::cout<<"Customer_id: "<<customer_id<<std::endl;
	std::cout<<"Balance: $"<<std::fixed<<std::setprecision(2)<<balance<<std::endl;
	//remove std::fixed you will understand what it does
	//similarly you can do it for other functions as well
	
	return 0;

}
