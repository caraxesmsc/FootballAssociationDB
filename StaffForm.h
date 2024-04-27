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
		String^ connectionStr = "Data Source=KassabLaptop;Initial Catalog=Football_Association;Integrated Security=True;"; // da el connection string 3ashan a3ml connect m3 el database W LAZM T5'YARO L BTA3K ENTA

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
			this->listBox1->Size = System::Drawing::Size(574, 420);
			this->listBox1->TabIndex = 0;
			// 
			// StaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 441);
			this->Controls->Add(this->listBox1);
			this->Name = L"StaffForm";
			this->Text = L"StaffForm";
			this->Load += gcnew System::EventHandler(this, &StaffForm::StaffForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StaffForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			SqlConnection con(connectionStr);
			con.Open();
			String^ query = "SELECT * FROM staff";
			SqlCommand cmd(query, % con);
			SqlDataReader^ reader = cmd.ExecuteReader();
			while (reader->Read())
			{
				// Add the name of the club to the list box
				listBox1->Items->Add(reader->GetString(2) + " Works as: " + reader->GetString(1));
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
