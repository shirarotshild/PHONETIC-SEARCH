/**
 * Demo program for Gimatriya calculation.
 * 
 * Date: 2020-02
 */

#include "PhoneticFinder.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	string text ="I play the piano with Jessica";
	//cout << phonetic::find(text, "Happi") << endl;   // should print "Dond"
	cout << phonetic::find(text, "Jessica") << endl; 
	
//	cout << phonetic::find(text, "worry") << endl;   // should print "vorri"
	//cout << phonetic::find(text, "Be") << endl;   // should print "be"
	//cout << phonetic::find(text, "happy") << endl;   // should print "haffy"
//	try {
		//cout << phonetic::find(text, "happ") << endl;   // should throw an exception - "happ" is not a full word in the sentence
	//} catch (exception ex) {
	// 	cout << "   caught exception: " << ex.what() << endl;  // should print "Did not find the word 'happ' in the text"
	//}
}
