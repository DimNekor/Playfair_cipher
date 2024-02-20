#include "cipher.h"

Cipher::Cipher(){
	char* key = "";
	cipher_array = new int*[size]
	for (int i == 0; i < size; i++){
		cipher_array[i] = new int[size];
	}
}

int Cipher::CountLetters(char* word){
	char ch = '';
	int i = 0;
	while (ch != '\0'){
		ch = word[i];
		i++;
	}
	return i + 1;
}
		

bool Cipher::IsLetterInArr(char ch, char* arr){
	int len = CountLetters(arr);
	for (int i = 0; i < len; i++){
		if (arr[i] == ch)
			return true;
	}
	return false;
}

void Cipher::FillArr(char* arr){
	int len = CountLetters(arr);
	int temp = new char[len]
	for (int i = 0; i < len; i++)
		temp[i] = '1';
	return temp;
}

void Cipher::DeleteRepLetters(){
	int key_len = CountLetters(key);
	char* temp = new char[key_len];
	temp = FillArr(temp);
	j = 0;
       	for (int i = 0; i < key_len; i++){
		if (!IsLetterInArr(key[i], temp))
			temp[j] = key[i];
			j++;
		if (i == key_len - 2)
			temp[i+1] == key[i+1];
	}
	delete [] key;
	key = temp
}

Cipher::Cipher(char* key){
	Cipher();
	key = key;
}

void Cipher::AddKey(char* word){
	
