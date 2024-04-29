#pragma once
#include "ClubsForm.h"
#include "StadiumsForm.h"
#include "StaffForm.h"
#include "StandingsForm.h"
#include "GamesForm.h"
#include "PlayersForm.h"

namespace FootballAssociationDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomeForm
	/// </summary>
	public ref class HomeForm : public System::Windows::Forms::Form
	{
	public:
		HomeForm(void)
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
		~HomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ PlayersButton;

	private: System::Windows::Forms::Button^ StaffButton;

	private: System::Windows::Forms::Button^ StadiumsButton;
	private: System::Windows::Forms::Button^ GamesButton;
	private: System::Windows::Forms::Button^ StandingsButton;
	private: System::Windows::Forms::Panel^ panel1;








	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PlayersButton = (gcnew System::Windows::Forms::Button());
			this->StaffButton = (gcnew System::Windows::Forms::Button());
			this->StadiumsButton = (gcnew System::Windows::Forms::Button());
			this->GamesButton = (gcnew System::Windows::Forms::Button());
			this->StandingsButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Brown;
			this->button1->Location = System::Drawing::Point(45, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Clubs";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &HomeForm::button1_Click);
			// 
			// PlayersButton
			// 
			this->PlayersButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->PlayersButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayersButton->ForeColor = System::Drawing::Color::Brown;
			this->PlayersButton->Location = System::Drawing::Point(45, 241);
			this->PlayersButton->Name = L"PlayersButton";
			this->PlayersButton->Size = System::Drawing::Size(262, 63);
			this->PlayersButton->TabIndex = 2;
			this->PlayersButton->Text = L"Players";
			this->PlayersButton->UseVisualStyleBackColor = false;
			this->PlayersButton->Click += gcnew System::EventHandler(this, &HomeForm::PlayersButton_Click);
			// 
			// StaffButton
			// 
			this->StaffButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->StaffButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StaffButton->ForeColor = System::Drawing::Color::Brown;
			this->StaffButton->Location = System::Drawing::Point(45, 328);
			this->StaffButton->Name = L"StaffButton";
			this->StaffButton->Size = System::Drawing::Size(262, 63);
			this->StaffButton->TabIndex = 3;
			this->StaffButton->Text = L"Staff";
			this->StaffButton->UseVisualStyleBackColor = false;
			this->StaffButton->Click += gcnew System::EventHandler(this, &HomeForm::StaffButton_Click);
			// 
			// StadiumsButton
			// 
			this->StadiumsButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->StadiumsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StadiumsButton->ForeColor = System::Drawing::Color::Brown;
			this->StadiumsButton->Location = System::Drawing::Point(45, 589);
			this->StadiumsButton->Name = L"StadiumsButton";
			this->StadiumsButton->Size = System::Drawing::Size(262, 63);
			this->StadiumsButton->TabIndex = 6;
			this->StadiumsButton->Text = L"Stadiums";
			this->StadiumsButton->UseVisualStyleBackColor = false;
			this->StadiumsButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &HomeForm::StadiumsButton_MouseClick);
			// 
			// GamesButton
			// 
			this->GamesButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->GamesButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GamesButton->ForeColor = System::Drawing::Color::Brown;
			this->GamesButton->Location = System::Drawing::Point(45, 502);
			this->GamesButton->Name = L"GamesButton";
			this->GamesButton->Size = System::Drawing::Size(262, 63);
			this->GamesButton->TabIndex = 5;
			this->GamesButton->Text = L"Games";
			this->GamesButton->UseVisualStyleBackColor = false;
			this->GamesButton->Click += gcnew System::EventHandler(this, &HomeForm::GamesButton_Click);
			// 
			// StandingsButton
			// 
			this->StandingsButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->StandingsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StandingsButton->ForeColor = System::Drawing::Color::Brown;
			this->StandingsButton->Location = System::Drawing::Point(45, 415);
			this->StandingsButton->Name = L"StandingsButton";
			this->StandingsButton->Size = System::Drawing::Size(262, 63);
			this->StandingsButton->TabIndex = 4;
			this->StandingsButton->Text = L"Standings";
			this->StandingsButton->UseVisualStyleBackColor = false;
			this->StandingsButton->Click += gcnew System::EventHandler(this, &HomeForm::StandingsButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->StadiumsButton);
			this->panel1->Controls->Add(this->PlayersButton);
			this->panel1->Controls->Add(this->GamesButton);
			this->panel1->Controls->Add(this->StaffButton);
			this->panel1->Controls->Add(this->StandingsButton);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(356, 801);
			this->panel1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 46, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(598, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(462, 102);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Welcome to";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 40, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(455, 415);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(757, 89);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Football Association DB";
			this->label3->Click += gcnew System::EventHandler(this, &HomeForm::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(704, 545);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Thanks to Dr Wafaa and Eng.Lara ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(688, 576);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(269, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Mohamed Hossam Abdelalim 21p0254";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(701, 596);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(243, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Youssef Ayman Mohamed 21P0010";
			this->label5->Click += gcnew System::EventHandler(this, &HomeForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(717, 616);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(218, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Arwa Faisal Mohamed 21p0073";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(747, 636);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(159, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Patrick ramez 21P0180";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(717, 656);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(218, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Monica Hany Makram 21P0173";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(709, 676);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(234, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Shahd Ashraf Mahmoud 2100480";
			// 
			// HomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 792);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"HomeForm";
			this->Text = L"HomeForm";
			this->Load += gcnew System::EventHandler(this, &HomeForm::HomeForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ clubsForm = gcnew ClubsForm();
		clubsForm->ShowDialog();
		this->Show();
	}
	private: System::Void StadiumsButton_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Hide();
		Form^ stadiumsForm = gcnew StadiumsForm();
		stadiumsForm->ShowDialog();
		this->Show();
	}
	private: System::Void StaffButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ staffForm = gcnew StaffForm();
		staffForm->ShowDialog();
		this->Show();
}
private: System::Void StandingsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ standingsForm = gcnew StandingsForm();
		standingsForm->ShowDialog();
		this->Show();
}


private: System::Void GamesButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Form^ gamesForm = gcnew GamesForm();
	gamesForm->ShowDialog();
	this->Show();
}
private: System::Void PlayersButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Form^ playersForm = gcnew PlayersForm();
	playersForm->ShowDialog();
	this->Show();
}
private: System::Void HomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
