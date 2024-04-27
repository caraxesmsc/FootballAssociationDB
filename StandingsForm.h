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
	/// Summary for StandingsForm
	/// </summary>
	public ref class StandingsForm : public System::Windows::Forms::Form
	{
	public:
		String^ connectionStr = "Data Source=KassabLaptop;Initial Catalog=Football_Association;Integrated Security=True;"; // da el connection string 3ashan a3ml connect m3 el database W LAZM T5'YARO L BTA3K ENTA

		StandingsForm(void)
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
		~StandingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(440, 340);
			this->listBox1->TabIndex = 0;
			// 
			// StandingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 375);
			this->Controls->Add(this->listBox1);
			this->Name = L"StandingsForm";
			this->Text = L"StandingsForm";
			this->Load += gcnew System::EventHandler(this, &StandingsForm::StandingsForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StandingsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			SqlConnection con(connectionStr);
			con.Open();
			String^ query = "SELECT * FROM standing";
			SqlCommand cmd(query, % con);
			SqlDataReader^ reader = cmd.ExecuteReader();
			while (reader->Read())
			{
				// Add the name of the club to the list box
				listBox1->Items->Add(reader->GetInt32(5) + " Has: " + reader->GetInt32(1));
			}
			con.Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	};
}