#include<string>
#include<fstream>
#include<iostream>
#include<iomanip>
int main(){
	std::cout << std::fixed << std::setprecision(17);
    std::cout << "how much times do you want to write it down?\n";
    long long unsigned int amount;
    std::cin >> amount;
	std::cin.ignore(1, '\n');
    std::cout << "what do you want to write down?\n";
    std::string output;
    std::getline(std::cin, output);
    std::ofstream outFile("output.txt");
    int i = 0;
	if(amount>10000){
		int i2 = 0;
		double prcnt10k = 1000000.0/amount;
		double current_prcnt = 0;
		while(i < amount){
 	       outFile << ++i << ". " << output << "\n";
		   i2++;
		   if(i2==10000){
			   i2 = 0;
			   current_prcnt+=prcnt10k;
			   std::cout << current_prcnt << "%\n";
    }
	}
	if(amount%10000!=0||current_prcnt<100){
	std::cout << "100.00000000000000000%";
	return 0;
	}
	return 0;
	}
    while(i < amount){
        outFile << ++i << ". " << output << "\n";
    }
    std::cout << "100.00000000000000000%";
}