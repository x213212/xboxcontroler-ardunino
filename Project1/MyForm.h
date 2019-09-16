#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <commdlg.h>
#include <basetsd.h>
#include <objbase.h>

#ifdef USE_DIRECTX_SDK
#include <C:\Program Files (x86)\Microsoft DirectX SDK (June 2010)\include\xinput.h>
#pragma comment(lib,"xinput.lib")
#elif (_WIN32_WINNT >= 0x0602 /*_WIN32_WINNT_WIN8*/)
#include <XInput.h>
#pragma comment(lib,"xinput.lib")
#else
#include <XInput.h>
#pragma comment(lib,"xinput9_1_0.lib")
#endif

//-----------------------------------------------------------------------------
// Function-prototypes
//-----------------------------------------------------------------------------
LRESULT WINAPI MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
HRESULT UpdateControllerState();
void RenderFrame();


//-----------------------------------------------------------------------------
// Defines, constants, and global variables
//-----------------------------------------------------------------------------
#define MAX_CONTROLLERS 1 // XInput handles up to 4 controllers 
#define INPUT_DEADZONE  ( 0.24f * FLOAT(0x7FFF) )  // Default to 24% of the +/- 32767 range.   This is a reasonable default value but can be altered if needed.

struct CONTROLLER_STATE
{
	XINPUT_STATE state;
	bool bConnected;
};

CONTROLLER_STATE g_Controllers[MAX_CONTROLLERS];
WCHAR g_szMessage[4][1024] = { 0 };
HWND    g_hWnd;
bool    g_bDeadZoneOn = true;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 24);
			this->progressBar1->Maximum = 256;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(544, 23);
			this->progressBar1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(12, 65);
			this->progressBar2->Maximum = 256;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(544, 23);
			this->progressBar2->TabIndex = 4;
			this->progressBar2->Click += gcnew System::EventHandler(this, &MyForm::progressBar2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Location = System::Drawing::Point(10, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 12);
			this->label3->TabIndex = 5;
			this->label3->Text = L"LT";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 12);
			this->label4->TabIndex = 6;
			this->label4->Text = L"RT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 12);
			this->label5->TabIndex = 7;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 12);
			this->label6->TabIndex = 8;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 12);
			this->label7->TabIndex = 9;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 12);
			this->label8->TabIndex = 10;
			this->label8->Text = L"連接狀況";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(199, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 12);
			this->label9->TabIndex = 11;
			this->label9->Text = L"label9";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(199, 167);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 12);
			this->label10->TabIndex = 12;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(199, 193);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 12);
			this->label11->TabIndex = 13;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(199, 218);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 12);
			this->label12->TabIndex = 14;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(393, 143);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 12);
			this->label13->TabIndex = 15;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(393, 167);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(39, 12);
			this->label14->TabIndex = 16;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(393, 193);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 12);
			this->label15->TabIndex = 17;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(393, 218);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 12);
			this->label16->TabIndex = 18;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(14, 251);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 12);
			this->label17->TabIndex = 19;
			this->label17->Text = L"label17";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(14, 275);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 12);
			this->label18->TabIndex = 20;
			this->label18->Text = L"label18";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 394);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//-----------------------------------------------------------------------------
		HRESULT UpdateControllerState()
		{
			DWORD dwResult;
			for (DWORD i = 0; i < MAX_CONTROLLERS; i++)
			{
				// Simply get the state of the controller from XInput.
				dwResult = XInputGetState(i, &g_Controllers[i].state);

				if (dwResult == ERROR_SUCCESS){
					g_Controllers[i].bConnected = true;
					label1->Text = "1";
				}
				else{
					g_Controllers[i].bConnected = false;
					label1->Text = "0";
				}
			}

			return S_OK;
		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		UpdateControllerState();
		WORD wButtons = g_Controllers[0].state.Gamepad.wButtons;
		(wButtons & XINPUT_GAMEPAD_A) ? label2->Text = "A 鍵狀況:DOWN" : label2->Text = "A 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_B) ? label5->Text = "B 鍵狀況:DOWN" : label5->Text = "B 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_X) ? label6->Text = "X 鍵狀況:DOWN" : label6->Text = "X 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_Y) ? label7->Text = "Y 鍵狀況:DOWN" : label7->Text = "Y 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_LEFT_THUMB) ? label9->Text = "LEFT_THUMB 鍵狀況:DOWN" : label9->Text = "LEFT_THUMB 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_RIGHT_THUMB) ? label10->Text = "RIGHT_THUMB 鍵狀況:DOWN" : label10->Text = "RIGHT_THUMB 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_LEFT_SHOULDER) ? label11->Text = "LEFT_SHOULDER 鍵狀況:DOWN" : label11->Text = "LEFT_SHOULDER 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_RIGHT_SHOULDER) ? label12->Text = "RIGHT_SHOULDER 鍵狀況:DOWN" : label12->Text = "RIGHT_SHOULDER 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_START) ? label17->Text = "START 鍵狀況:DOWN" : label17->Text = "START 鍵狀況:UP";
		(wButtons & XINPUT_GAMEPAD_BACK) ? label18->Text = "BACK 鍵狀況:DOWN" : label18->Text = "BACK 鍵狀況:UP";
		if (g_Controllers[0].state.Gamepad.bLeftTrigger > 0)
			progressBar1->Value = ((g_Controllers[0].state.Gamepad.bLeftTrigger ));
		else
			progressBar1->Value = 0;
		if (g_Controllers[0].state.Gamepad.bRightTrigger  > 0)
			progressBar2->Value = ((g_Controllers[0].state.Gamepad.bRightTrigger));
		else
			progressBar2->Value = 0;

		label13->Text ="LX :"+ Convert::ToString(g_Controllers[0].state.Gamepad.sThumbLX);
		label14->Text ="LY :"+ Convert::ToString(g_Controllers[0].state.Gamepad.sThumbLY);
		label15->Text ="RX :" + Convert::ToString(g_Controllers[0].state.Gamepad.sThumbRX);
		label16->Text ="RX :" + Convert::ToString(g_Controllers[0].state.Gamepad.sThumbRY);
	}
private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void progressBar3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
