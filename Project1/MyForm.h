#pragma once

#include<iostream>

void v_check_beg(FILE *pfile);
void l_check_beg(FILE *pfile);
void v_check_mid(FILE *pfile);
void l_check_mid(FILE *pfile);
void cmp_beg(FILE *pfile);
void cmp_mid(FILE *pfile);

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 156);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Run Test";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(13, 12);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2500, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(259, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::UnScroool);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 500;
			this->trackBar1->Location = System::Drawing::Point(13, 38);
			this->trackBar1->Maximum = 2500;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(259, 45);
			this->trackBar1->SmallChange = 250;
			this->trackBar1->TabIndex = 2;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::Scroool);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(14, 317);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(259, 44);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(13, 76);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(57, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Vector";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(13, 100);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(42, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"List";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(52, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Begin";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(88, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(56, 17);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->Text = L"Middle";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(122, 69);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(150, 48);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Insert Mode";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(279, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 480);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(141, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Reset results";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 301);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Progress";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 491);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Tester";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 float iter = trackBar1->Value;
				 if (checkBox1->Checked && checkBox2->Checked)
				 {
					 if (radioButton1->Checked)
					 {
						 FILE *pfile;
						 pfile = fopen("cmp_beg.csv", "a+");
						 for (int i = 0; i < iter; i++)
						 {
							 cmp_beg(pfile);
							 progressBar1->Value = (i / iter) * 100;
						 }
						 fclose(pfile);
						 std::string command = "python cmp_beg_plot.py ";
						 system(command.c_str());
						 progressBar1->Value = 100;
						 pictureBox1->ImageLocation = "cmp_beg.png";
						 pictureBox1->Load();
					 }
					 if (radioButton2->Checked)
					 {
						 FILE *pfile;
						 pfile = fopen("cmp_mid.csv", "a+");
						 for (int i = 0; i < iter; i++)
						 {
							 cmp_mid(pfile);
							 progressBar1->Value = (i / iter) * 100;
						 }
						 fclose(pfile);
						 std::string command = "python cmp_mid_plot.py ";
						 system(command.c_str());
						 progressBar1->Value = 100;
						 pictureBox1->ImageLocation = "cmp_mid.png";
						 pictureBox1->Load();
					 }
				 }
				 else
				 {
					 if (checkBox1->Checked)
					 {
						 if (radioButton1->Checked)
						 {
							 FILE *pfile;
							 pfile = fopen("v_beg.csv", "a+");
							 for (int i = 0; i < iter; i++)
							 {
								 v_check_beg(pfile);
								 progressBar1->Value = (i / iter) * 100;
							 }
							 fclose(pfile);
							 std::string command = "python v_beg_plot.py ";
							 system(command.c_str());
							 progressBar1->Value = 100;
							 pictureBox1->ImageLocation = "v_beg.png";
							 pictureBox1->Load();
						 }
						 if (radioButton2->Checked)
						 {
							 FILE *pfile;
							 pfile = fopen("v_mid.csv", "a+");
							 for (int i = 0; i < iter; i++)
							 {
								 v_check_mid(pfile);
								 progressBar1->Value = (i / iter) * 100;
							 }
							 fclose(pfile);
							 std::string command = "python v_mid_plot.py ";
							 system(command.c_str());
							 progressBar1->Value = 100;
							 pictureBox1->ImageLocation = "v_mid.png";
							 pictureBox1->Load();
						 }
					 }

					 if (checkBox2->Checked)
					 {
						 if (radioButton1->Checked)
						 {
							 FILE *pfile;
							 pfile = fopen("l_beg.csv", "a+");
							 for (int i = 0; i < iter; i++)
							 {
								 l_check_beg(pfile);
								 progressBar1->Value = (i / iter) * 100;
							 }
							 fclose(pfile);
							 std::string command = "python l_beg_plot.py ";
							 system(command.c_str());
							 progressBar1->Value = 100;
							 pictureBox1->ImageLocation = "l_beg.png";
							 pictureBox1->Load();
						 }
						 if (radioButton2->Checked)
						 {
							 FILE *pfile;
							 pfile = fopen("l_mid.csv", "a+");
							 for (int i = 0; i < iter; i++)
							 {
								 l_check_mid(pfile);
								 progressBar1->Value = (i / iter) *100;
							 }
							 fclose(pfile);
							 std::string command = "python l_mid_plot.py ";
							 system(command.c_str());
							 progressBar1->Value = 100;
							 pictureBox1->ImageLocation = "l_mid.png";
							 pictureBox1->Load();
						 }
					 }
				 }
				 
				 
	}

	private: System::Void Scroool(System::Object^  sender, System::EventArgs^  e)
	{
				 numericUpDown1->Value = trackBar1->Value;
	}

	private: System::Void UnScroool(System::Object^  sender, System::EventArgs^  e)
	{
				 int n = (int)numericUpDown1->Value;
				 trackBar1->Value = n;
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		FILE *v_beg, *v_mid, *l_beg, *l_mid, *d_beg, *d_mid;
		v_beg = fopen("v_beg.csv", "w");
		fwrite("N,T\n", sizeof(char), 4, v_beg);
		fclose(v_beg);
		v_mid = fopen("v_mid.csv", "w");
		fwrite("N,T\n", sizeof(char), 4, v_mid);
		fclose(v_mid);
		l_beg = fopen("l_beg.csv", "w");
		fwrite("N,T\n", sizeof(char), 4, l_beg);
		fclose(l_beg);
		l_mid = fopen("l_mid.csv", "w");
		fwrite("N,T\n", sizeof(char), 4, l_mid);
		fclose(l_mid);
		d_beg = fopen("cmp_beg.csv", "w");
		fwrite("N,V,L\n", sizeof(char), 6, d_beg);
		fclose(d_beg);
		d_mid = fopen("cmp_mid.csv", "w");
		fwrite("N,V,L\n", sizeof(char), 6, d_mid);
		fclose(d_mid);
	}
}
;
}