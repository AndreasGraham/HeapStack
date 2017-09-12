#include <iostream>
#include <string>

void sum(int a, int b, int& c) { // the & sign is a reference to the actual value placed at C, not the copy. the memory for c is changed not just temporarily manipulated
	c = a + b;
}

void product(float a, float b, float& c) {
	c = a * b;
}

struct Weapon {
	int bluntDamage;
	int magicDamage;
	int bladeDamage;
};

void enhanceWeapon(Weapon& weap) { //allows you to directly manipulate this structs values
	weap.bluntDamage *= 2;
	weap.bladeDamage *= 2;
	weap.magicDamage *= 2;
}

void floatSwap(float& a, float& b) {
	float alpha = a;
	float beta = b;

	a = beta;
	b = alpha;
}

struct Aussiegochi
{
	float happiness;
	float hunger;
	float thirst;
	float sanity;
};

void feedAussie(Aussiegochi& aus) {
	aus.hunger += 2;
	aus.sanity += 2;
}

void waterAussie(Aussiegochi& aus) {
	aus.thirst -= 2;
}

void abuseAussie(Aussiegochi& aus) {
	aus.sanity -= 2;
}

void coddleAussie(Aussiegochi& aus) {
	aus.sanity += 2;
}

struct Track
{
	std::string trackName; //name of track
	float playtime;			// track runtime
};

struct Playlist {
	std::string playlistName; // name of playlist
	Track *tracklist; // pointer to array of tracks tracklist tracks[3]
	int trackCount;
};

void printPLaylist(const Playlist& pl) {
	std::cout << pl.playlistName << std::endl;
	for (int i = 0; i < pl.trackCount; i++) {
		std::cout << pl.tracklist[i].playtime / 60 <<"mins" <<std::endl;
		std::cout << pl.tracklist[i].trackName << std::endl;
		std::cout << "next song" << std::endl;
	}
}

void shufflePLaylist(Playlist& pl) {
	// need a dummy variable that holds trakcs
	Track a = pl.tracklist[0];
	Track b = pl.tracklist[1];
	Track c = pl.tracklist[2];

	pl.tracklist[0] = b;
	pl.tracklist[1] = c;
	pl.tracklist[2] = a;
	printPLaylist(pl);

}



int main() {
	int hotdog = 10; // private variable
	int& dinosaur = hotdog; // reference to hotdog
	int* dinosaurPTR = &hotdog; // pointer to hotdog reference

	int tacos = hotdog;
	hotdog = 15;

	//std::cout << hotdog << std::endl;
	//std::cout << dinosaur << std::endl;
	//std::cout << *dinosaurPTR << std::endl; // dereferences to access hotdog

	//std::cout << "tacos" << std::endl;
	//std::cout << tacos << std::endl;

	// references with functions!
	int valA = 1;
	int valB = 2;
	int valC = -1;

	std::cout << valC << std::endl;

	sum(valA, valB, valC);

	std::cout << valC << std::endl;

	// references with structs
	Weapon hammer;

	hammer.bladeDamage = 0;
	hammer.bluntDamage = 1000;
	hammer.magicDamage = 1000;

	enhanceWeapon(hammer);
	/*std::cout << hammer.bladeDamage << std::endl;
	std::cout << hammer.bluntDamage << std::endl;
	std::cout << hammer.magicDamage << std::endl;*/

	Weapon arsenal[3]; // would create an aray of weaponssss
		// can create references to access long dot notation shit

///////// closed activity

	int dog = 1;
	float cat = 2.0f;
	bool liar = true;
	char A = 'a';

	int& dogRef = dog;
	float& catRef = cat;
	bool& lairRef = liar;
	char& ARef = A;

	float jog = 2.0f;
	float naruto = 0;

	product(jog, cat, naruto);

	//std::cout << naruto << std::endl;

	/////// open 

	float a = 2;
	float b = 6;

	floatSwap(a, b);

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	Track FatBeats{"FatBeats", 120};
	Track SkinnyBeats{ "SkinnyBeats", 430 };
	Track MediumBeats{ "MediumBeats", 300 };

	Track trackList[3];
	trackList[0] = FatBeats;
	trackList[1] = SkinnyBeats;
	trackList[2] = MediumBeats;

	//Track * track = trackList; // pointers allow you to use an aray that you dont know the siaze at the time of making the function

	

	Playlist Beats{"Beats", trackList, 3};

	//printPLaylist(Beats);
	
	shufflePLaylist(Beats);
	system("pause");
}