#pragma once
#include <iostream>
class Cipher{

private:
	char*  key;
	int size = 5;
	int** alphabet;
	char* DeleteRepLetters();
	int CountLetters(char*& word);
	bool IsLetterInArr(char ch, char* arr);
   int** FillAlphabet();
	char* FillArr(char*& arr, int size);

public: 
	Cipher();
	Cipher(char* key);
	void AddKey(char*& key);
	char* Encode(char*);
	char* Decode(char*);
   char* GetKey();
};

