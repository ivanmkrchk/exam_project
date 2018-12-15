#ifndef MAIN_WINDOW_FORM_H
#define MAIN_WINDOW_FORM_H

#include "MainHandler.h"
#include <map>
#include <string>
#include <vector>

namespace Exam
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindowForm
	/// </summary>
	public ref class MainWindowForm : public System::Windows::Forms::Form
	{
	private: MainHandler * handler;
	public:
		MainWindowForm ( void );

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindowForm ( );
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::NumericUpDown^  taskSize;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::ListBox^  resourcesList;


	private: System::Windows::Forms::Button^  detailsButton;



	private: System::Windows::Forms::Label^  info;





	private: System::Windows::Forms::ListBox^  programsList;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::FlowLayoutPanel^  panel;

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
		void InitializeComponent ( void )
		{
			this->button1 = (gcnew System::Windows::Forms::Button ( ));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker ( ));
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker ( ));
			this->label4 = (gcnew System::Windows::Forms::Label ( ));
			this->button5 = (gcnew System::Windows::Forms::Button ( ));
			this->taskSize = (gcnew System::Windows::Forms::NumericUpDown ( ));
			this->label3 = (gcnew System::Windows::Forms::Label ( ));
			this->resourcesList = (gcnew System::Windows::Forms::ListBox ( ));
			this->detailsButton = (gcnew System::Windows::Forms::Button ( ));
			this->info = (gcnew System::Windows::Forms::Label ( ));
			this->programsList = (gcnew System::Windows::Forms::ListBox ( ));
			this->label2 = (gcnew System::Windows::Forms::Label ( ));
			this->panel = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskSize))->BeginInit ( );
			this->SuspendLayout ( );
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point ( 352, 406 );
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size ( 309, 30 );
			this->button1->TabIndex = 0;
			this->button1->Text = L"calculate percents of usage for program";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler ( this, &MainWindowForm::button1_Click );
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point ( 464, 447 );
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size ( 194, 22 );
			this->dateTimePicker1->TabIndex = 1;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point ( 464, 475 );
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size ( 194, 22 );
			this->dateTimePicker2->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point ( 182, 27 );
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size ( 76, 17 );
			this->label4->TabIndex = 16;
			this->label4->Text = L"Resources";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point ( 464, 503 );
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size ( 194, 30 );
			this->button5->TabIndex = 18;
			this->button5->Text = L"median usages";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler ( this, &MainWindowForm::button5_Click );
			// 
			// taskSize
			// 
			this->taskSize->Location = System::Drawing::Point ( 464, 378 );
			this->taskSize->Name = L"taskSize";
			this->taskSize->Size = System::Drawing::Size ( 120, 22 );
			this->taskSize->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point ( 598, 378 );
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size ( 63, 17 );
			this->label3->TabIndex = 25;
			this->label3->Text = L"task size";
			// 
			// resourcesList
			// 
			this->resourcesList->FormattingEnabled = true;
			this->resourcesList->ItemHeight = 16;
			this->resourcesList->Location = System::Drawing::Point ( 185, 47 );
			this->resourcesList->Name = L"resourcesList";
			this->resourcesList->Size = System::Drawing::Size ( 141, 276 );
			this->resourcesList->TabIndex = 27;
			// 
			// detailsButton
			// 
			this->detailsButton->Location = System::Drawing::Point ( 26, 406 );
			this->detailsButton->Name = L"detailsButton";
			this->detailsButton->Size = System::Drawing::Size ( 300, 30 );
			this->detailsButton->TabIndex = 14;
			this->detailsButton->Text = L"Details";
			this->detailsButton->UseVisualStyleBackColor = true;
			this->detailsButton->Click += gcnew System::EventHandler ( this, &MainWindowForm::imageInfoButton_Click );
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->Location = System::Drawing::Point ( 533, 315 );
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size ( 0, 17 );
			this->info->TabIndex = 19;
			// 
			// programsList
			// 
			this->programsList->FormattingEnabled = true;
			this->programsList->ItemHeight = 16;
			this->programsList->Location = System::Drawing::Point ( 26, 47 );
			this->programsList->Name = L"programsList";
			this->programsList->Size = System::Drawing::Size ( 140, 276 );
			this->programsList->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point ( 23, 27 );
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size ( 69, 17 );
			this->label2->TabIndex = 32;
			this->label2->Text = L"Programs";
			// 
			// panel
			// 
			this->panel->AutoScroll = true;
			this->panel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->panel->Location = System::Drawing::Point ( 26, 451 );
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size ( 306, 183 );
			this->panel->TabIndex = 29;
			this->panel->WrapContents = false;
			// 
			// MainWindowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 8, 16 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size ( 691, 646 );
			this->Controls->Add ( this->label2 );
			this->Controls->Add ( this->programsList );
			this->Controls->Add ( this->panel );
			this->Controls->Add ( this->resourcesList );
			this->Controls->Add ( this->info );
			this->Controls->Add ( this->detailsButton );
			this->Controls->Add ( this->button1 );
			this->Controls->Add ( this->label3 );
			this->Controls->Add ( this->dateTimePicker1 );
			this->Controls->Add ( this->taskSize );
			this->Controls->Add ( this->dateTimePicker2 );
			this->Controls->Add ( this->button5 );
			this->Controls->Add ( this->label4 );
			this->Name = L"MainWindowForm";
			this->Text = L"MainWindowForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskSize))->EndInit ( );
			this->ResumeLayout ( false );
			this->PerformLayout ( );

		}
#pragma endregion

	private: System::Void button1_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		int index = programsList->SelectedIndex;
		if (index == -1) {
			info->Text = "No program chosen";
			return;
		}
		System::Decimal^ input = taskSize->Value;
		auto program = handler->getProgram ( index );
		std::vector<float> percents;
		handler->calcPercentsOfMaxResources ( handler->calcUsageOfResources ( program, (unsigned int)(*input) ), percents);
		fill_percents ( program->getResources(), percents );
	}

	private: System::Void fill_percents ( std::map<ComputationalResource*, int> & resources, std::vector<float> const & percents )
	{
		panel->Controls->Clear ( );
		auto iter = resources.begin ( );
		for (size_t i = 0; i < resources.size ( ); ++i) {
			std::string text = iter->first->getName ( ) + ": " + std::to_string ( percents[i] );
			Label ^ label = gcnew Label();
			label->Width = 10000;
			label->Text = gcnew String(text.c_str());
			panel->Controls->Add ( label );
			iter++;
		}
	}

	private: System::Void show ( std::vector<Program*> const & programs , std::vector<ComputationalResource*> const & objects )
	{
		resourcesList->Items->Clear ( );
		for (auto const & p : programs) {
			programsList->Items->Add ( gcnew String ( p->getName().c_str() ) );
		}

		for (auto const & object : objects) {
			resourcesList->Items->Add ( 
				gcnew String ((
					object->getName()
				).c_str ( )) 
			);
		}
	}

	private: void MainWindowForm::imageInfoButton_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		int selected_index = resourcesList->SelectedIndex;
		if (selected_index == -1) {
			info->Text = gcnew String ( "Resource not selected." );
			return;
		}
		auto const & r = handler->getResource( selected_index );
		fill_resource ( r );
	}

	private: void MainWindowForm::fill_resource ( ComputationalResource const * const & p )
	{
		panel->Controls->Clear ( );
		std::string text = p->getName ( ) +
		std::string ( " unit: " ) + std::to_string ( p->getUnit ( ) ) +
		std::string ( " max count: " ) + std::to_string ( p->getMaxCount ( ) );
	//	std::string text = "rgijdofnkldksfndms";
		auto label = gcnew Label ( );
		label->Text = gcnew String(text.c_str());
		label->Width = 10000;
		panel->Controls->Add(label);
	}


	private: System::Void button5_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		panel->Controls->Clear ( );
		auto from = dateTimePicker1->Value;
		auto to = dateTimePicker2->Value;
		long long t_from = from.ToFileTime ( );
		long long t_to = to.ToFileTime ( );
		int index = resourcesList->SelectedIndex;
		auto const & object = handler->getResource(index);
		if (index == -1) {
			info->Text = gcnew String ( "Resource not selected" );
			return;
		}
		uint32_t m = handler->calcMedianUsage ( object, t_from, t_to );
		Label ^ label = gcnew Label ( );
		label->Width = 10000;
		label->Text = gcnew String ( std::to_string ( m ).c_str ( ) );
		panel->Controls->Add(label);
	}

};
}
#endif