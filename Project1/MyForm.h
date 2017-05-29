#pragma once

#include<iostream>
void v_check_beg(FILE *pfile);
void l_check_beg(FILE *pfile);
void v_check_mid(FILE *pfile);
void l_check_mid(FILE *pfile);

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 156);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(13, 12);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2500, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
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
			this->progressBar1->Location = System::Drawing::Point(140, 12);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(449, 19);
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
			this->checkBox2->Size = System::Drawing::Size(48, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Listk";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(278, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(311, 241);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 291);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 float iter = trackBar1->Value;
				 FILE *pfile;
				 pfile = fopen("test.txt", "a+");
				 if (checkBox1->Checked)
				 {
					 if (radioButton1->Checked)
					 {
						 for (int i = 0; i < iter; i++)
						 {
							 v_check_beg(pfile);
							 progressBar1->Value = (i / iter) * 50;
						 }
					 }
					 if (radioButton2->Checked)
					 {
						 for (int i = 0; i < iter; i++)
						 {
							 v_check_mid(pfile);
							 progressBar1->Value = (i / iter) * 50;
						 }
					 }
				 }
				 
				 if (checkBox2->Checked)
				 {
					 if (radioButton1->Checked)
					 {
						 for (int i = 0; i < iter; i++)
						 {
							 l_check_beg(pfile);
							 progressBar1->Value = (i / iter) * 50+50;
						 }
					 }
					 if (radioButton2->Checked)
					 {
						 for (int i = 0; i < iter; i++)
						 {
							 l_check_mid(pfile);
							 progressBar1->Value = (i / iter) * 50+50;
						 }
					 }
				 }
				 fclose(pfile);
	}

	private: System::Void Scroool(System::Object^  sender, System::EventArgs^  e)
	{
				 numericUpDown1->Value = trackBar1->Value;
	}

	private: System::Void UnScroool(System::Object^  sender, System::EventArgs^  e)
	{
				 int keka = (int)numericUpDown1->Value;
				 trackBar1->Value = keka;
	}


















	}
;
}