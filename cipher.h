#pragma once

class Cipher{

private:
	char*  key;
	int size = 5;
	int** cipher_array;
	void DeleteRepLetters();
	int CountLetters(char* word);
	bool IsLetterInArr(char ch);
	void FillArr(char* arr);

public: 
	Cipher();
	Cipher(char* key);
	void AddKey(char* key);
	char* Encode(char*);
	char* Decode(char*);
};

