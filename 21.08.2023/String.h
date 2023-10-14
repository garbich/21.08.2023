#pragma once
#include <iostream>
using namespace std;

class String
{
private:
	char* str = nullptr;  
	int size;            
	     

public:
	String();

	String(int);

	String(char*, int);

	String(String*);

	char* GetStr();

	void Print();

	int GetSize();

	
};