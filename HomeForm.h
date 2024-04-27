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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(191, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(268, 81);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Clubs";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &HomeForm::button1_Click);
			// 
			// PlayersButton
			// 
			this->PlayersButton->BackColor = System::Drawing::Color::Silver;
			this->PlayersButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayersButton->Location = System::Drawing::Point(191, 354);
			this->PlayersButton->Name = L"PlayersButton";
			this->PlayersButton->Size = System::Drawing::Size(268, 81);
			this->PlayersButton->TabIndex = 2;
			this->PlayersButton->Text = L"Players";
			this->PlayersButton->UseVisualStyleBackColor = false;
			this->PlayersButton->Click += gcnew System::EventHandler(this, &HomeForm::PlayersButton_Click);
			// 
			// StaffButton
			// 
			this->StaffButton->BackColor = System::Drawing::Color::Silver;
			this->StaffButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StaffButton->Location = System::Drawing::Point(191, 503);
			this->StaffButton->Name = L"StaffButton";
			this->StaffButton->Size = System::Drawing::Size(268, 81);
			this->StaffButton->TabIndex = 3;
			this->StaffButton->Text = L"Staff";
			this->StaffButton->UseVisualStyleBackColor = false;
			this->StaffButton->Click += gcnew System::EventHandler(this, &HomeForm::StaffButton_Click);
			// 
			// StadiumsButton
			// 
			this->StadiumsButton->BackColor = System::Drawing::Color::Silver;
			this->StadiumsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StadiumsButton->Location = System::Drawing::Point(900, 503);
			this->StadiumsButton->Name = L"StadiumsButton";
			this->StadiumsButton->Size = System::Drawing::Size(268, 81);
			this->StadiumsButton->TabIndex = 6;
			this->StadiumsButton->Text = L"Stadiums";
			this->StadiumsButton->UseVisualStyleBackColor = false;
			this->StadiumsButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &HomeForm::StadiumsButton_MouseClick);
			// 
			// GamesButton
			// 
			this->GamesButton->BackColor = System::Drawing::Color::Silver;
			this->GamesButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GamesButton->Location = System::Drawing::Point(900, 354);
			this->GamesButton->Name = L"GamesButton";
			this->GamesButton->Size = System::Drawing::Size(268, 81);
			this->GamesButton->TabIndex = 5;
			this->GamesButton->Text = L"Games";
			this->GamesButton->UseVisualStyleBackColor = false;
			this->GamesButton->Click += gcnew System::EventHandler(this, &HomeForm::GamesButton_Click);
			// 
			// StandingsButton
			// 
			this->StandingsButton->BackColor = System::Drawing::Color::Silver;
			this->StandingsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StandingsButton->Location = System::Drawing::Point(900, 201);
			this->StandingsButton->Name = L"StandingsButton";
			this->StandingsButton->Size = System::Drawing::Size(268, 81);
			this->StandingsButton->TabIndex = 4;
			this->StandingsButton->Text = L"Standings";
			this->StandingsButton->UseVisualStyleBackColor = false;
			this->StandingsButton->Click += gcnew System::EventHandler(this, &HomeForm::StandingsButton_Click);
			// 
			// HomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 792);
			this->Controls->Add(this->StadiumsButton);
			this->Controls->Add(this->GamesButton);
			this->Controls->Add(this->StandingsButton);
			this->Controls->Add(this->StaffButton);
			this->Controls->Add(this->PlayersButton);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"HomeForm";
			this->Text = L"HomeForm";
			this->ResumeLayout(false);

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
};
}
