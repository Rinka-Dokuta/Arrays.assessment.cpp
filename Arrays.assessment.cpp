#include<iostream> 
using namespace std;
int main() {
	string DiverseBeats[] = { "Tusa", "Rockstar", "Tangerine", " "}; //Make an array
	DiverseBeats[0] = "Tusa";
	DiverseBeats[1] = "Rockstar";
	DiverseBeats[2] = "Tangeaarine";
	DiverseBeats[3] = "Happier";

	//Replace "Tusa" with "Save Your Tears"
	DiverseBeats[0] = "Save Your Tears";

	for (int i = 0; i < 1; i++) { //Print the 3rd title
		cout << DiverseBeats[3] << " ";
	}

	for (int i = 0; i < 4; i++) { //using a for loop and an if statement, check if "Blinding Lights" is on the list
		if (DiverseBeats[i] == "Blinding Lights")
			cout << "Found Blinding Lights!" << endl;
	}

	for (int i = 0; i < 4; i++) { //Print the whole list
		cout << DiverseBeats[i] << " ";
	}
}
