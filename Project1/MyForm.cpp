#include "MyForm.h"
#include <iostream>
#include <list>
#include <vector>
#include <time.h>
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
	srand(time(NULL));
}

void v_check_beg(FILE *pfile)
{
	int iter = rand() % 50001+10000; 
	clock_t begin = clock();
	for (int i = 0; i < iter; i++)
	{
		std::vector<int> v;
		v.insert(v.begin(), rand()%256);
	}
	clock_t end = clock();
	double elapsed_time = (double)(end - begin) / CLOCKS_PER_SEC;
	String ^s = String::Concat(iter, Convert::ToString(","), elapsed_time, Convert::ToString("\n"));
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(s);
	char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
	std::cout << iter << std::endl;
	fwrite(nativeString, sizeof(char), 12, pfile);
}

void l_check_beg(FILE *pfile) //add write to different files + vizualisation
{
	;
}

void v_check_mid(FILE *pfile)
{
		;
}

void l_check_mid(FILE *pfile)
{
	;
}