#include "MorseTree.h"
#include <iostream>
#include <iomanip>
using namespace std;

void main() {
	MorseTree tree;
	tree.setUp();



	string decode = "_..  __.";
	string decode2 = "_.. . _._. ___ _.. . ._.";

	string encode = "ac";
	string encode2 = "encoder";


	cout << setw(15) << "MORSE CODE" << endl <<
		"====================" << endl << endl;

	cout << "Decoding: " << decode << " ==> ";
	tree.decode(decode);
	cout << "Decoding: " << decode2 << " ==> ";
	tree.decode(decode2);
	cout << endl;

	cout << "Encoding: " << encode << " ==> ";
	tree.encode(encode);
	cout << "Encoding: " << encode2 << " ==> ";
	tree.encode(encode2);



	

	system("pause");
	return;
}	