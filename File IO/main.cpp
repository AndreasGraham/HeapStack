#include <iostream>
#include <fstream>
#include <string>
#include "entity.h"
using namespace std;




int main() {
	//fstream autoCreate;
	//autoCreate.open("createme.txt", std::ios::out);
	//if (autoCreate.fail()) {
	//	std::cout << "Something went wrong." << std::endl;
	//	return -1;
	//}

	////autoCreate.flush();
	//autoCreate.close();
	//while (true) {}

	////read from a file using string buffer; while(std::getline(file, buffer)){std::cout<< buffer << std::endl;} use file.clear() to reset error flags
	////file.seekp(0, std::ios_base::end); moves somthing

	// step one promp user for a file path
	// 2. check if it exists
	//3. if the file exists, print the contents of that file to the scree.
	// end each scenario by asking if they would like another file to open
	
	string name = "";
	int age = 0;


	fstream file;				//fstream can be used for reading and writing, ofstream used only for writing to
								//file.open("createme.txt");
	//cout << "OPEN A SAVE FILE" << endl;
	//string a = "";
	////int b = 0;
	//cin >> a;
	//file.open(a);

	file.open("createme.txt");


	if (file.fail()) {
		std::cerr << "File not found!" << std::endl;
		return false;
	}

	string arr[5];

	Entity entity[5];

	int HowManyEntities = 0;
	while (HowManyEntities < 5) 
	{
		std::string buffer;
		while (std::getline(file, buffer)) 
		{ // this is for reading from a file
			
			if (buffer[0] == '@')
			{
				std::cout << buffer << std::endl;
				break;
			}
				
		}

		std::getline(file, buffer);
		entity[HowManyEntities].hitpoints = stof(buffer);
		std::getline(file, buffer);
		entity[HowManyEntities].armor = stof(buffer);
		std::getline(file, buffer);
		entity[HowManyEntities].strength = stof(buffer);
		std::getline(file, buffer);
		entity[HowManyEntities].defense = stof(buffer);
		std::getline(file, buffer);
		entity[HowManyEntities].agility = stof(buffer);
		std::getline(file, buffer);
		entity[HowManyEntities].luck = stof(buffer);
		
		
		HowManyEntities++;

		/*cout << "What is your name?" << endl;
		cin >> name;
		file << name << endl;						// used for writing to a file
		cout << "What is your age?" << endl;
		cin >> age;
		file << age;*/

		//file.clear();
		
		//cout << "Would you like to open another file?" << endl;

	}

	file.close();
	while (true) {};
}