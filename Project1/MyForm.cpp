#include "MyForm.h"
#include <iostream>
#include <random>
#include <list>
#include <vector>
#include <ctime>
#include <fstream>
#include <string>


using namespace System;
using namespace System::Runtime::InteropServices;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(%form);
}

void v_check_beg()
{
	srand(time(NULL));
	std::fstream f;
	int iter = rand() % 50001 + 1000; //"good" random
	f.open("v_beg.csv", std::ios::in);
	int size = 0;
	f.seekg(0, f.end);
	size = f.tellg();
	f.seekg(0, f.beg);
	f.close();
	if (size < 0)
	{
		f.open("v_beg.csv", std::ios::out);
		const char s[5] = "x,y\n";
		f.write(s, 4);
		f.close();
	}
	clock_t begin = clock();
	for (int i = 0; i < iter; i++)
	{
		std::vector<int> v;
		v.insert(v.begin(), rand()%256);
	}
	clock_t end = clock();
	double elapsed_time = (double)(end - begin) / CLOCKS_PER_SEC;
	f.open("v_beg.csv", std::ios::app);
	String ^s = String::Concat(iter, Convert::ToString(","), elapsed_time, Convert::ToString("\n"));
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(s);
	char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
	std::cout << nativeString;
	f.write(nativeString, sizeof(nativeString)); //great writing
	f.close();
}

void l_check_beg()
{
	srand(time(NULL));
	std::fstream f;
	int iter = rand() % 50001 + 1000; //"good" random
	f.open("l_beg.csv", std::ios::in);
	int size = 0;
	f.seekg(0, f.end);
	size = f.tellg();
	f.seekg(0, f.beg);
	f.close();
	if (size < 0)
	{
		f.open("l_beg.csv", std::ios::out);
		const char s[5] = "x,y\n";
		f.write(s, 4);
		f.close();
	}
	clock_t begin = clock();
	for (int i = 0; i < iter; i++)
	{
		std::list<int> l;
		l.insert(l.begin(), rand() % 256);
	}
	clock_t end = clock();
	double elapsed_time = (double)(end - begin) / CLOCKS_PER_SEC;
	f.open("l_beg.csv", std::ios::app);
	String ^s = String::Concat(iter, Convert::ToString(","), elapsed_time, Convert::ToString("\n"));
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(s);
	char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
	std::cout << nativeString;
	f.write(nativeString, sizeof(nativeString)); //great writing
	f.close();
}

void v_check_mid()
{
	srand(time(NULL));
	std::fstream f;
	int iter = rand() % 50001 + 1000; //"good" random
	f.open("v_beg.csv", std::ios::in);
	int size = 0;
	f.seekg(0, f.end);
	size = f.tellg();
	f.seekg(0, f.beg);
	f.close();
	if (size < 0)
	{
		f.open("v_beg.csv", std::ios::out);
		const char s[5] = "x,y\n";
		f.write(s, 4);
		f.close();
	}
	clock_t begin = clock();
	for (int i = 0; i < iter; i++)
	{
		std::vector<int> v;
		v.insert(v.begin(), rand() % 256);
	}
	clock_t end = clock();
	double elapsed_time = (double)(end - begin) / CLOCKS_PER_SEC;
	f.open("v_beg.csv", std::ios::app);
	String ^s = String::Concat(iter, Convert::ToString(","), elapsed_time, Convert::ToString("\n"));
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(s);
	char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
	std::cout << nativeString;
	f.write(nativeString, sizeof(nativeString)); //great writing
	f.close();;
}

void l_check_mid()
{
	;
}