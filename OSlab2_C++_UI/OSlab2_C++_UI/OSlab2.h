#pragma once

#include <Windows.h>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace OSlab2_C_UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for OSlab2
	/// </summary>
	public ref class OSlab2 : public System::Windows::Forms::Form
	{
	public:
		OSlab2(void)
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
		~OSlab2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;


	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button9;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(465, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Tabulate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OSlab2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Count of processes:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"4", L"8" });
			this->comboBox1->Location = System::Drawing::Point(217, 9);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(242, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &OSlab2::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectedIndex = 0;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(909, 74);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 32);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Set priority";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &OSlab2::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(909, 40);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 32);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Kill";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &OSlab2::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(802, 40);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 32);
			this->button3->TabIndex = 15;
			this->button3->Text = L"End";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &OSlab2::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->comboBox2->Location = System::Drawing::Point(732, 11);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(278, 24);
			this->comboBox2->TabIndex = 14;
			this->comboBox2->SelectedIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(556, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 25);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Choose priority:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(668, 39);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 32);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Suspend";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &OSlab2::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(561, 39);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 32);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Resume";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &OSlab2::button7_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Low", L"Below normal", L"Normal", L"Above normal",
					L"High", L"Realtime"
			});
			this->comboBox3->Location = System::Drawing::Point(732, 78);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(171, 24);
			this->comboBox3->TabIndex = 10;
			this->comboBox3->SelectedIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(556, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Choose process:";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(217, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 32);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Get Performance";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OSlab2::button2_Click);
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(96, 73);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(103, 32);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Merge all files";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &OSlab2::button8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(16, 112);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(994, 525);
			this->richTextBox1->TabIndex = 20;
			this->richTextBox1->Text = L"";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(356, 73);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(103, 32);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Clear text";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &OSlab2::button9_Click);
			// 
			// OSlab2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 649);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"OSlab2";
			this->Text = L"Function tabulate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

	// Data
	STARTUPINFO *si = new STARTUPINFO[8];
	PROCESS_INFORMATION *pi = new PROCESS_INFORMATION[8];
	int iLastTab = 3;

	// Functions for working with process
	void ResumeProc(int i)
	{
		if (!IsProcessRunning(pi[i].dwProcessId))
		{
			MessageBox::Show("Please, first start process " + i);
			return;
		}
		ResumeThread(pi[i].hThread);
	}

	void Suspend(int i)
		{
			if (!IsProcessRunning(pi[i].dwProcessId))
			{
				MessageBox::Show("Please, first start process " + i);
				return;
			}
			SuspendThread(pi[i].hThread);
		}

	void EndProcess(int i)
	{
		if (!IsProcessRunning(pi[i].dwProcessId))
		{
			MessageBox::Show("Please, first start process " + i);
			return;
		}
		CloseHandle(pi[i].hThread);
		CloseHandle(pi[i].hProcess);
	}

	void KillProcess(int i)
	{
		if (!IsProcessRunning(pi[i].dwProcessId))
		{
			MessageBox::Show("Please, first start process " + i);
			return;
		}
		TerminateThread(pi[i].hThread, 0);
		TerminateProcess(pi[i].hProcess, 0);
	}

	void ChangeProcessPriority(int i, int iPriorityKey)
	{
		if (!IsProcessRunning(pi[i].dwProcessId))
		{
			MessageBox::Show("Please, first start process " + i);
			return;
		}
		DWORD dwPriorityClass;
		switch (iPriorityKey)
		{
		case 0:
			dwPriorityClass = IDLE_PRIORITY_CLASS;
			break;
		case 1:
			dwPriorityClass = BELOW_NORMAL_PRIORITY_CLASS;
			break;
		case 2:
			dwPriorityClass = NORMAL_PRIORITY_CLASS;
			break;
		case 3:
			dwPriorityClass = ABOVE_NORMAL_PRIORITY_CLASS;
			break;
		case 4:
			dwPriorityClass = HIGH_PRIORITY_CLASS;
			break;
		case 5:
			dwPriorityClass = REALTIME_PRIORITY_CLASS;
			break;
		}
		SetPriorityClass(pi[i].hProcess, dwPriorityClass);
	}

	bool IsProcessRunning(DWORD dwProcessId)
	{
			HANDLE process = OpenProcess(SYNCHRONIZE, FALSE, dwProcessId);
			DWORD ret = WaitForSingleObject(process, 0);
			CloseHandle(process);
			return ret == WAIT_TIMEOUT;
	}

	bool IsAnyProcessRunning()
	{
		for (size_t i = 0; i < 8; ++i)
		{
			HANDLE process = OpenProcess(SYNCHRONIZE, FALSE, pi[i].dwProcessId);
			DWORD ret = WaitForSingleObject(process, 0);
			CloseHandle(process);
			if (ret == WAIT_TIMEOUT)
				return true;
		}
		return false;
	}

	// Tabulation
	System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int iCountP = int::Parse(this->comboBox1->SelectedItem->ToString());
		iLastTab = this->comboBox1->SelectedIndex;
		int n = 15;

		for (size_t i = 0; i < iCountP; ++i)
		{
			ZeroMemory(&si[i], sizeof(si[i]));
			si[i].cb = sizeof(si[i]);
			ZeroMemory(&pi[i], sizeof(pi[i]));
		}

		// Step and dif
		double a = -0.5, b = 0.5;
		double dStep = fabs(b - a) / (double)iCountP;

		// Starting processes
		for (size_t i = 0; i < iCountP; ++i)
		{
			// string with parameters for process
			char text[80] = " ";
			strcat(text, to_string(n).c_str());
			strcat(text, " ");
			strcat(text, to_string(a).c_str());
			strcat(text, " ");
			strcat(text, to_string(a + dStep).c_str());
			strcat(text, " \"");
			strcat(text, to_string(iCountP).c_str());
			strcat(text, "-");
			char c = (char)i + 48;
			strcat(text, &c);
			strcat(text, ".txt\" ");
			wchar_t wtext[40];
			mbstowcs(wtext, text, strlen(text) + 1);
			LPWSTR ptr = wtext;

			if (!(CreateProcess(L"C:\\Users\\saveu\\Documents\\Visual Studio 2017\\Projects\\OSlab2_C_Console\\Debug\\OSlab2_C_Console.exe",
				ptr,
				NULL,
				NULL,
				FALSE,
				0,
				NULL,
				NULL,
				&si[i],
				&pi[i])
				))
			{
				ExitProcess(2);
			}

			a += dStep;
			this->button2->Enabled = true;
			this->button8->Enabled = true;
		}

	}
	// Working with processses
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int iProcess = int::Parse(this->comboBox2->SelectedItem->ToString());
	EndProcess(iProcess);
}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	int iProcess = int::Parse(this->comboBox2->SelectedItem->ToString());
	KillProcess(iProcess);
}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	int iProcess = int::Parse(this->comboBox2->SelectedItem->ToString());
	Suspend(iProcess);
}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	int iProcess = int::Parse(this->comboBox2->SelectedItem->ToString());
	ResumeProc(iProcess);
}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	int iProcess = int::Parse(this->comboBox2->SelectedItem->ToString());

	int iPriority = this->comboBox3->SelectedIndex;

	ChangeProcessPriority(iProcess, iPriority);
}



	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		double dPerformance = 0.0;
		ifstream ifile;
		ifile.open("Performance.txt");
		while (!ifile.eof())
		{
			ifile >> dPerformance;
		}
		ifile.close();
		if (IsAnyProcessRunning())
		{
			MessageBox::Show("Process still running");
		}
		else
		{
			richTextBox1->Text += "Performance using " + this->comboBox1->SelectedItem->ToString() + " processes is: " + dPerformance.ToString() + " ms\n";
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (IsAnyProcessRunning())
		{
			MessageBox::Show("Process still running");
			return;
		}
		this->richTextBox1->Text += "Tabulated function using " + this->comboBox1->SelectedItem->ToString() + " processes:\n";
		this->richTextBox1->Text += "";
		for (size_t i = 0; i < int::Parse(this->comboBox1->SelectedItem->ToString()); ++i)
		{
			char sName[80] = "";
			strcat(sName, to_string(int::Parse(this->comboBox1->SelectedItem->ToString())).c_str());
			strcat(sName, "-");
			char c = (char)i + 48;
			strcat(sName, &c);
			strcat(sName, ".txt");
			ifstream is;
			is.open(sName);
			string str;
			if (is.is_open()) {
				while (!is.eof()) {
					getline(is, str);
					String^ newSystemString = gcnew String(str.c_str());
					this->richTextBox1->Text += newSystemString + "\n";
				}
			}
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->comboBox1->SelectedIndex != iLastTab) {
			this->button2->Enabled = false;
			this->button8->Enabled = false;
		}
		else {
			this->button2->Enabled = true;
			this->button8->Enabled = true;
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Text = "";
	}
};
}
