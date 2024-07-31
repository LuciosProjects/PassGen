#pragma once

#include "Math.h"
#include "PG_Constants.h"

namespace PassGen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PassGenUI
	/// </summary>
	public ref class PassGenUI : public System::Windows::Forms::Form
	{
	public:
		PassGenUI(void)
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
		~PassGenUI()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ PassGenMSG;
	private: System::Windows::Forms::Label^ NumOfCharactersLabel;

	private: System::Windows::Forms::NumericUpDown^ PassLenNumric;
	internal: System::Windows::Forms::Button^ PassGenButton;
	private: System::Windows::Forms::Button^ AboutButton;

	private: System::Windows::Forms::Label^ ImportantMSGLabel;
	private: System::Windows::Forms::CheckBox^ OnlyUseCharsAndNums;




	internal:

	internal:

	private:



	protected:

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
			this->PassGenMSG = (gcnew System::Windows::Forms::TextBox());
			this->NumOfCharactersLabel = (gcnew System::Windows::Forms::Label());
			this->PassLenNumric = (gcnew System::Windows::Forms::NumericUpDown());
			this->PassGenButton = (gcnew System::Windows::Forms::Button());
			this->AboutButton = (gcnew System::Windows::Forms::Button());
			this->ImportantMSGLabel = (gcnew System::Windows::Forms::Label());
			this->OnlyUseCharsAndNums = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PassLenNumric))->BeginInit();
			this->SuspendLayout();
			// 
			// PassGenMSG
			// 
			this->PassGenMSG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassGenMSG->Location = System::Drawing::Point(100, 40);
			this->PassGenMSG->Name = L"PassGenMSG";
			this->PassGenMSG->ReadOnly = true;
			this->PassGenMSG->Size = System::Drawing::Size(400, 29);
			this->PassGenMSG->TabIndex = 0;
			this->PassGenMSG->Text = L"Welcome to password generator";
			this->PassGenMSG->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// NumOfCharactersLabel
			// 
			this->NumOfCharactersLabel->AutoSize = true;
			this->NumOfCharactersLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NumOfCharactersLabel->Location = System::Drawing::Point(170, 10);
			this->NumOfCharactersLabel->Name = L"NumOfCharactersLabel";
			this->NumOfCharactersLabel->Size = System::Drawing::Size(177, 25);
			this->NumOfCharactersLabel->TabIndex = 2;
			this->NumOfCharactersLabel->Text = L"# of characters:";
			// 
			// PassLenNumric
			// 
			this->PassLenNumric->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassLenNumric->Location = System::Drawing::Point(350, 10);
			this->PassLenNumric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->PassLenNumric->Name = L"PassLenNumric";
			this->PassLenNumric->Size = System::Drawing::Size(50, 26);
			this->PassLenNumric->TabIndex = 3;
			this->PassLenNumric->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PassGenButton
			// 
			this->PassGenButton->Location = System::Drawing::Point(240, 75);
			this->PassGenButton->Name = L"PassGenButton";
			this->PassGenButton->Size = System::Drawing::Size(120, 25);
			this->PassGenButton->TabIndex = 4;
			this->PassGenButton->Text = L"Generate Password";
			this->PassGenButton->UseVisualStyleBackColor = true;
			this->PassGenButton->Click += gcnew System::EventHandler(this, &PassGenUI::PassGenButton_Click);
			// 
			// AboutButton
			// 
			this->AboutButton->Location = System::Drawing::Point(1, 2);
			this->AboutButton->Name = L"AboutButton";
			this->AboutButton->Size = System::Drawing::Size(75, 20);
			this->AboutButton->TabIndex = 5;
			this->AboutButton->Text = L"About";
			this->AboutButton->UseVisualStyleBackColor = true;
			this->AboutButton->Click += gcnew System::EventHandler(this, &PassGenUI::AboutButton_Click);
			// 
			// ImportantMSGLabel
			// 
			this->ImportantMSGLabel->AutoSize = true;
			this->ImportantMSGLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImportantMSGLabel->Location = System::Drawing::Point(12, 107);
			this->ImportantMSGLabel->Name = L"ImportantMSGLabel";
			this->ImportantMSGLabel->Size = System::Drawing::Size(567, 20);
			this->ImportantMSGLabel->TabIndex = 7;
			this->ImportantMSGLabel->Text = L"Please write down and keep the generated password somewhere safe";
			this->ImportantMSGLabel->Visible = false;
			// 
			// OnlyUseCharsAndNums
			// 
			this->OnlyUseCharsAndNums->AutoSize = true;
			this->OnlyUseCharsAndNums->Location = System::Drawing::Point(16, 80);
			this->OnlyUseCharsAndNums->Name = L"OnlyUseCharsAndNums";
			this->OnlyUseCharsAndNums->Size = System::Drawing::Size(184, 17);
			this->OnlyUseCharsAndNums->TabIndex = 8;
			this->OnlyUseCharsAndNums->Text = L"Only use characters and numbers";
			this->OnlyUseCharsAndNums->UseVisualStyleBackColor = true;
			// 
			// PassGenUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 136);
			this->Controls->Add(this->OnlyUseCharsAndNums);
			this->Controls->Add(this->ImportantMSGLabel);
			this->Controls->Add(this->AboutButton);
			this->Controls->Add(this->PassGenButton);
			this->Controls->Add(this->PassLenNumric);
			this->Controls->Add(this->NumOfCharactersLabel);
			this->Controls->Add(this->PassGenMSG);
			this->Name = L"PassGenUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Random Password Generator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PassLenNumric))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void PassGenButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			System::Random RNG;
			System::Char TempChar;
			System::String^ PassStr("");

			int i, i_roll_idx, PassLen = this->PassLenNumric->Value.ToInt16(this->PassLenNumric->Value);

			if (this->OnlyUseCharsAndNums->Checked)
			{
				System::Double PoolSize = CHARSANDNUMSPOOLSIZE - 1;

				for (i = 0; i < PassLen; i++)
				{
					i_roll_idx = round((RNG.NextDouble() * PoolSize) + 0.5);

					TempChar = CharsAndNumsPool[i_roll_idx];
					PassStr += TempChar.ToString(TempChar);
				}
			}
			else
			{
				System::Double PoolSize = ALLCHARPOOLSIZE - 1;

				for (i = 0; i < PassLen; i++)
				{
					i_roll_idx = round((RNG.NextDouble() * PoolSize) + 0.5);

					TempChar = AllCharsPool[i_roll_idx];
					PassStr += TempChar.ToString(TempChar);
				}	
			}

			this->PassGenMSG->Text = PassStr;
			this->ImportantMSGLabel->Visible = true;
		}

		System::Void AboutButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			System::Double dVer(PG_VER);
			System::String ^SVer, ^SDate(PG_VERDATE);

			SVer = dVer.ToString();

			System::String^ MainMSG("This application was created by Orel Laufer");
			MainMSG += "\nVersion " + SVer + ", " + SDate;

			MessageBox::Show(MainMSG,"About",MessageBoxButtons::OK,MessageBoxIcon::Information);
		}
};
}
