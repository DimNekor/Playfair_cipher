#include "cipher.h"

Cipher::Cipher(){
	key = (char*)" ";
	alphabet = new int*[size];
	for (int i = 0; i < size; i++){
		alphabet[i] = new int[size];
	}
}

int Cipher::CountLetters(char*& word){
	char ch = ' ';
	int i = 0;
	while (ch != '\0'){
		ch = word[i];
		i++;
	}
	return i;
}
		

bool Cipher::IsLetterInArr(char ch, char* arr){
	int len = CountLetters(arr);
	for (int i = 0; i < len; i++){
		if (arr[i] == ch)
			return true;
	}
	return false;
}

char* Cipher::FillArr(char*& arr, int size){
	char* temp = new char[size];
	for (int i = 0; i < size; i++)
		temp[i] = '1';
	return temp;
}

char* Cipher::DeleteRepLetters(){
   std::cout << ".1. " << key << std::endl;
	int key_len = CountLetters(key);
   std::cout << key_len << std::endl;
	char* temp = new char[key_len];
	temp = FillArr(temp, key_len);
   std::cout << temp<< std::endl;
	int j = 0;
   for (int i = 0; i < key_len; i++){
      if (!IsLetterInArr(key[i], temp)){
		   temp[j] = key[i];
			j++;
		}
	}
   std::cout << temp << std::endl;
   char ch;
   int i = 0;
   while (ch != '1'){
      ch = temp[i];
      i++;
   }
   temp[i-1] = '\0';
   std::cout << temp << std::endl;
   std::cout << "Hi" << std::endl;
   return temp;
}

Cipher::Cipher(char* new_key){
	Cipher();
   delete [] key;
	key =(char*)new_key;
   std::cout << ".2. " << key << std::endl;
   key = DeleteRepLetters();
   std::cout << key << std::endl;
}

void Cipher::AddKey(char*& word){
   key = word;
   key = DeleteRepLetters();
}

char* Cipher::GetKey(){
   return key;
   //std::cout << "return key" << std::endl;
}
