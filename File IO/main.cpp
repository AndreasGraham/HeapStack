#include <iostream>
#include <fstream>
#include <string>
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

	
	while (true) {
		fstream file;				//fstream can be used for reading and writing, ofstream used only for writing to
		//file.open("createme.txt");
		cout << "OPEN A SAVE FILE" << endl;
		string a = "";
		//int b = 0;
		cin >> a;
		file.open(a);
		if (file.fail()) {
			std::cerr << "File not found!" << std::endl;
			return false;
		}
		std::string buffer;
		while (std::getline(file, buffer)) { // this is for reading from a file
			/*for (unsigned i = 0; i < buffer.length(); i++) {
				if (i % 3 == 0 || i % 7 == 0) {						 reads from a file anc changes some chars to 0
					buffer[i] = '0';
				}
			}*/
			std::cout << buffer << std::endl;
		}

		/*cout << "What is your name?" << endl;
		cin >> name;
		file << name << endl;						// used for writing to a file
		cout << "What is your age?" << endl;
		cin >> age;
		file << age;*/

		//file.clear();
		file.close();
		//cout << "Would you like to open another file?" << endl;

	}
	while (true) {};
}