#pragma once

namespace FootballAssociationDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for StaffForm
	/// </summary>
	public ref class StaffForm : public System::Windows::Forms::Form
	{
	public:
		// Kassab Connection
		//String^ connectionStr = "Data Source=KassabLaptop;Initial Catalog=Football_Association;Integrated Security=True;";	 // da el connection string 3ashan a3ml connect m3 el database W LAZM T5'YARO L BTA3K ENTA
		//Hossam Conenction
		String^ connectionStr = "Data Source=LAPTOP-ABIJFMBV;Initial Catalog=Football_AssociationDBFinal;Integrated Security=True;";

		StaffForm(void)
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
		~StaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ EditButton;


	private: System::Windows::Forms::Label^ TittleLabel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ StadiumsButton;
	private: System::Windows::Forms::Button^ PlayersButton;
	private: System::Windows::Forms::Button^ GamesButton;
	private: System::Windows::Forms::Button^ StaffButton;
	private: System::Windows::Forms::Button^ StandingsButton;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
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
			this->TittleLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->StadiumsButton = (gcnew System::Windows::Forms::Button());
			this->PlayersButton = (gcnew System::Windows::Forms::Button());
			this->GamesButton = (gcnew System::Windows::Forms::Button());
			this->StaffButton = (gcnew System::Windows::Forms::Button());
			this->StandingsButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::Brown;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(29, 104);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(176, 664);
			this->listBox1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->EditButton);
			this->panel1->Controls->Add(this->TittleLabel);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->StadiumsButton);
			this->panel1->Controls->Add(this->PlayersButton);
			this->panel1->Controls->Add(this->GamesButton);
			this->panel1->Controls->Add(this->StaffButton);
			this->panel1->Controls->Add(this->StandingsButton);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(356, 801);
			this->panel1->TabIndex = 8;
			// 
			// EditButton
			// 
			this->EditButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->EditButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditButton->ForeColor = System::Drawing::Color::Firebrick;
			this->EditButton->Location = System::Drawing::Point(41, 670);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(262, 63);
			this->EditButton->TabIndex = 11;
			this->EditButton->Text = L"🏠";
			this->EditButton->UseVisualStyleBackColor = false;
			this->EditButton->Click += gcnew System::EventHandler(this, &StaffForm::EditButton_Click);
			// 
			// TittleLabel
			// 
			this->TittleLabel->AutoSize = true;
			this->TittleLabel->BackColor = System::Drawing::Color::Transparent;
			this->TittleLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 28, System::Drawing::FontStyle::Bold));
			this->TittleLabel->ForeColor = System::Drawing::Color::Brown;
			this->TittleLabel->Location = System::Drawing::Point(109, 31);
			this->TittleLabel->Name = L"TittleLabel";
			this->TittleLabel->Size = System::Drawing::Size(127, 62);
			this->TittleLabel->TabIndex = 8;
			this->TittleLabel->Text = L"Staff";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(41, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Clubs";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// StadiumsButton
			// 
			this->StadiumsButton->BackColor = System::Drawing::Color::IndianRed;
			this->StadiumsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StadiumsButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->StadiumsButton->Location = System::Drawing::Point(41, 587);
			this->StadiumsButton->Name = L"StadiumsButton";
			this->StadiumsButton->Size = System::Drawing::Size(262, 63);
			this->StadiumsButton->TabIndex = 6;
			this->StadiumsButton->Text = L"Stadiums";
			this->StadiumsButton->UseVisualStyleBackColor = false;
			// 
			// PlayersButton
			// 
			this->PlayersButton->BackColor = System::Drawing::Color::IndianRed;
			this->PlayersButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayersButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->PlayersButton->Location = System::Drawing::Point(41, 239);
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
			this->GamesButton->Location = System::Drawing::Point(41, 500);
			this->GamesButton->Name = L"GamesButton";
			this->GamesButton->Size = System::Drawing::Size(262, 63);
			this->GamesButton->TabIndex = 5;
			this->GamesButton->Text = L"Games";
			this->GamesButton->UseVisualStyleBackColor = false;
			// 
			// StaffButton
			// 
			this->StaffButton->BackColor = System::Drawing::Color::DimGray;
			this->StaffButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StaffButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->StaffButton->Location = System::Drawing::Point(41, 326);
			this->StaffButton->Name = L"StaffButton";
			this->StaffButton->Size = System::Drawing::Size(262, 63);
			this->StaffButton->TabIndex = 3;
			this->StaffButton->Text = L"Staff";
			this->StaffButton->UseVisualStyleBackColor = false;
			// 
			// StandingsButton
			// 
			this->StandingsButton->BackColor = System::Drawing::Color::IndianRed;
			this->StandingsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StandingsButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->StandingsButton->Location = System::Drawing::Point(41, 413);
			this->StandingsButton->Name = L"StandingsButton";
			this->StandingsButton->Size = System::Drawing::Size(262, 63);
			this->StandingsButton->TabIndex = 4;
			this->StandingsButton->Text = L"Standings";
			this->StandingsButton->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Location = System::Drawing::Point(853, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 41);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Club";
			// 
			// listBox5
			// 
			this->listBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox5->ForeColor = System::Drawing::Color::Brown;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 20;
			this->listBox5->Location = System::Drawing::Point(803, 104);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(176, 664);
			this->listBox5->TabIndex = 28;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(655, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 41);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Role";
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->ForeColor = System::Drawing::Color::Brown;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 20;
			this->listBox4->Location = System::Drawing::Point(611, 104);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(176, 664);
			this->listBox4->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(437, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 41);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Birthdate";
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->ForeColor = System::Drawing::Color::Brown;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 20;
			this->listBox3->Location = System::Drawing::Point(420, 104);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(176, 664);
			this->listBox3->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(248, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 41);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Country";
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::Brown;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(228, 104);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(176, 664);
			this->listBox2->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(63, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 41);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Name";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Brown;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->listBox5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->listBox4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->listBox3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->listBox2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Location = System::Drawing::Point(352, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1019, 800);
			this->panel2->TabIndex = 30;
			// 
			// StaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 792);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"StaffForm";
			this->Text = L"StaffForm";
			this->Load += gcnew System::EventHandler(this, &StaffForm::StaffForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StaffForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			SqlConnection con(connectionStr);
			con.Open();
			String^ query = "execute GetStaffWithClubInfo;";
			SqlCommand cmd(query, % con);
			SqlDataReader^ reader = cmd.ExecuteReader();
			while (reader->Read())
			{
				//Name
				listBox1->Items->Add(reader->GetString(2) );
				//Country
				listBox2->Items->Add(reader->GetString(4));
				//date of birth
				listBox3->Items->Add(reader->GetDateTime(3).ToString("yyyy-MM-dd"));
				//role
				listBox4->Items->Add(reader->GetString(1));
				//club
				listBox5->Items->Add(reader->GetString(10));
			}
			con.Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void EditButton_Click(System::Object^ sender, System::EventArgs^ e) {
this->Hide();
	}
};
}
