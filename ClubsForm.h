#pragma once 

	//include the identifiers of other forms
#include "PlayersForm.h"
#include "StaffForm.h"
#include "StandingsForm.h"
#include "GamesForm.h"
#include "StadiumsForm.h"

namespace FootballAssociationDB {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; // 7ot dah by2olo en ana 3ayz a3ml connection m3 el database



	/// <summary>
	/// Summary for TeamsForm
	/// </summary>
	public ref class ClubsForm : public System::Windows::Forms::Form
	{
	public:
		String^ connectionStr = "Data Source=KassabLaptop;Initial Catalog=Football_Association;Integrated Security=True;";	 // da el connection string 3ashan a3ml connect m3 el database W LAZM T5'YARO L BTA3K ENTA
		ClubsForm(void)
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
		~ClubsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ EditButton;
	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::Button^ ViewButton;
	private: System::Windows::Forms::Label^ TittleLabel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ StadiumsButton;
	private: System::Windows::Forms::Button^ PlayersButton;
	private: System::Windows::Forms::Button^ GamesButton;
	private: System::Windows::Forms::Button^ StaffButton;
	private: System::Windows::Forms::Button^ StandingsButton;
	private: System::Windows::Forms::Label^ label1;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->EditButton = (gcnew System::Windows::Forms::Button());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->ViewButton = (gcnew System::Windows::Forms::Button());
			this->TittleLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->StadiumsButton = (gcnew System::Windows::Forms::Button());
			this->PlayersButton = (gcnew System::Windows::Forms::Button());
			this->GamesButton = (gcnew System::Windows::Forms::Button());
			this->StaffButton = (gcnew System::Windows::Forms::Button());
			this->StandingsButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(389, 88);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(955, 692);
			this->listBox1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->EditButton);
			this->panel1->Controls->Add(this->SearchButton);
			this->panel1->Controls->Add(this->ViewButton);
			this->panel1->Controls->Add(this->TittleLabel);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->StadiumsButton);
			this->panel1->Controls->Add(this->PlayersButton);
			this->panel1->Controls->Add(this->GamesButton);
			this->panel1->Controls->Add(this->StaffButton);
			this->panel1->Controls->Add(this->StandingsButton);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(356, 801);
			this->panel1->TabIndex = 8;
			// 
			// EditButton
			// 
			this->EditButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->EditButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditButton->ForeColor = System::Drawing::Color::Firebrick;
			this->EditButton->Location = System::Drawing::Point(234, 109);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(74, 63);
			this->EditButton->TabIndex = 11;
			this->EditButton->Text = L"✏️";
			this->EditButton->UseVisualStyleBackColor = false;
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->ForeColor = System::Drawing::Color::Firebrick;
			this->SearchButton->Location = System::Drawing::Point(140, 109);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(74, 63);
			this->SearchButton->TabIndex = 10;
			this->SearchButton->Text = L"🔍";
			this->SearchButton->UseVisualStyleBackColor = false;
			// 
			// ViewButton
			// 
			this->ViewButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ViewButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewButton->ForeColor = System::Drawing::Color::Firebrick;
			this->ViewButton->Location = System::Drawing::Point(46, 109);
			this->ViewButton->Name = L"ViewButton";
			this->ViewButton->Size = System::Drawing::Size(74, 63);
			this->ViewButton->TabIndex = 9;
			this->ViewButton->Text = L"👁️";
			this->ViewButton->UseVisualStyleBackColor = false;
			// 
			// TittleLabel
			// 
			this->TittleLabel->AutoSize = true;
			this->TittleLabel->BackColor = System::Drawing::Color::Transparent;
			this->TittleLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 28, System::Drawing::FontStyle::Bold));
			this->TittleLabel->ForeColor = System::Drawing::Color::Brown;
			this->TittleLabel->Location = System::Drawing::Point(101, 29);
			this->TittleLabel->Name = L"TittleLabel";
			this->TittleLabel->Size = System::Drawing::Size(143, 62);
			this->TittleLabel->TabIndex = 8;
			this->TittleLabel->Text = L"Clubs";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(46, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Clubs";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ClubsForm::button1_Click);
			// 
			// StadiumsButton
			// 
			this->StadiumsButton->BackColor = System::Drawing::Color::IndianRed;
			this->StadiumsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StadiumsButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->StadiumsButton->Location = System::Drawing::Point(46, 655);
			this->StadiumsButton->Name = L"StadiumsButton";
			this->StadiumsButton->Size = System::Drawing::Size(262, 63);
			this->StadiumsButton->TabIndex = 6;
			this->StadiumsButton->Text = L"Stadiums";
			this->StadiumsButton->UseVisualStyleBackColor = false;
			this->StadiumsButton->Click += gcnew System::EventHandler(this, &ClubsForm::StadiumsButton_Click);
			// 
			// PlayersButton
			// 
			this->PlayersButton->BackColor = System::Drawing::Color::IndianRed;
			this->PlayersButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayersButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->PlayersButton->Location = System::Drawing::Point(46, 307);
			this->PlayersButton->Name = L"PlayersButton";
			this->PlayersButton->Size = System::Drawing::Size(262, 63);
			this->PlayersButton->TabIndex = 2;
			this->PlayersButton->Text = L"Players";
			this->PlayersButton->UseVisualStyleBackColor = false;
			// 
			// GamesButton
			// 
			this->GamesButton->BackColor = System::Drawing::Color::IndianRed;
			this->GamesButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GamesButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->GamesButton->Location = System::Drawing::Point(46, 568);
			this->GamesButton->Name = L"GamesButton";
			this->GamesButton->Size = System::Drawing::Size(262, 63);
			this->GamesButton->TabIndex = 5;
			this->GamesButton->Text = L"Games";
			this->GamesButton->UseVisualStyleBackColor = false;
			this->GamesButton->Click += gcnew System::EventHandler(this, &ClubsForm::GamesButton_Click);
			// 
			// StaffButton
			// 
			this->StaffButton->BackColor = System::Drawing::Color::IndianRed;
			this->StaffButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StaffButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->StaffButton->Location = System::Drawing::Point(46, 394);
			this->StaffButton->Name = L"StaffButton";
			this->StaffButton->Size = System::Drawing::Size(262, 63);
			this->StaffButton->TabIndex = 3;
			this->StaffButton->Text = L"Staff";
			this->StaffButton->UseVisualStyleBackColor = false;
			this->StaffButton->Click += gcnew System::EventHandler(this, &ClubsForm::StaffButton_Click);
			// 
			// StandingsButton
			// 
			this->StandingsButton->BackColor = System::Drawing::Color::IndianRed;
			this->StandingsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StandingsButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->StandingsButton->Location = System::Drawing::Point(46, 481);
			this->StandingsButton->Name = L"StandingsButton";
			this->StandingsButton->Size = System::Drawing::Size(262, 63);
			this->StandingsButton->TabIndex = 4;
			this->StandingsButton->Text = L"Standings";
			this->StandingsButton->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(389, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Club Name /t Manager /t City /t Founded";
			// 
			// ClubsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 792);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listBox1);
			this->Name = L"ClubsForm";
			this->Text = L"ClubsForm";
			this->Load += gcnew System::EventHandler(this, &ClubsForm::ClubsForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void ClubsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			SqlConnection con(connectionStr);
			con.Open();
			String^ query = "SELECT * FROM club";
			SqlCommand cmd(query, % con);
			SqlDataReader^ reader = cmd.ExecuteReader();
			while (reader->Read())
			{
				// Add the name of the club to the list box
				listBox1->Items->Add(reader->GetString(1) + " Managed by: " + reader->GetString(2) + " Founded in the year: " + reader->GetInt32(4));
			}
			con.Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Form^ clubsForm = gcnew ClubsForm();
	clubsForm->ShowDialog();
	this->Show();
}
	
	private: System::Void StaffButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ staffForm = gcnew StaffForm();
		staffForm->ShowDialog();
		this->Show();
	}
//private: System::Void StandingsButton_Click(System::Object^ sender, System::EventArgs^ e) {
//	this->Hide();
//	Form^ standingsForm = gcnew StandingsForm();
//	standingsForm->ShowDialog();
//	this->Show();
//}


private: System::Void GamesButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Form^ gamesForm = gcnew GamesForm();
	gamesForm->ShowDialog();
	this->Show();
}
//private: System::Void PlayersButton_Click(System::Object^ sender, System::EventArgs^ e) {
//	this->Hide();
//	Form^ playersForm = gcnew PlayersForm();
//	playersForm->ShowDialog();
//	this->Show();
//}
	
private: System::Void StadiumsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Form^ stadiumsForm = gcnew StadiumsForm();
	stadiumsForm->ShowDialog();
	this->Show();
}
};
}
