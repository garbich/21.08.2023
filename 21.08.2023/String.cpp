#include "String.h"


String::String(){
	str = new char[80]; 
	this->size = 80;          
	cin >> str;        
}

String::String(int size){
	str = new char[size + 1]; 
	this->size = size;  
	          
	cin >> str;               
	
}

String::String(char* str, int size){
	this->size = size; 
	this->str = str;   
	     
}

String::String(String* str){
	this->str = str->GetStr();       
	this->size = str->GetSize();     
	
}



char* String::GetStr(){
	return str;
}


void String::Print(){
	cout << str;
}

int String::GetSize(){
	return size;
}