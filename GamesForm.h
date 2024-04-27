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
	/// Summary for GamesForm
	/// </summary>
	public ref class GamesForm : public System::Windows::Forms::Form
	{
	public:
		String^ connectionStr = "Data Source=LAPTOP-ABIJFMBV;Initial Catalog=Football_AssociationFinal;Integrated Security=True;"; // da el connection string 3ashan a3ml connect m3 el database W LAZM T5'YARO L BTA3K ENTA

		GamesForm(void)
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
		~GamesForm()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GamesForm::typeid));

			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(9, 15);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(482, 340);
			this->listBox1->TabIndex = 0;
			// 
			// GamesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 792);
			this->Controls->Add(this->listBox1);
			this->Name = L"GamesForm";
			this->Text = L"GamesForm";
			this->Load += gcnew System::EventHandler(this, &GamesForm::GamesForm_Load);
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void GamesForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			SqlConnection con(connectionStr);
			con.Open();
			String^ query = "SELECT * FROM FootballMatch";
			SqlCommand cmd(query, % con);
			SqlDataReader^ reader = cmd.ExecuteReader();
			while (reader->Read())
			{
				listBox1->Items->Add(reader->GetDateTime(1));
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
