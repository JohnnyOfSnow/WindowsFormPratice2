#pragma once


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
	private: System::Windows::Forms::TextBox^  input_text;
	protected:
	private: System::Windows::Forms::TextBox^  input_textA;
	private: System::Windows::Forms::TextBox^  input_textB;
	private: System::Windows::Forms::Button^  number1;
	private: System::Windows::Forms::Button^  number2;
	private: System::Windows::Forms::Button^  number3;
	private: System::Windows::Forms::Button^  number4;
	private: System::Windows::Forms::Button^  number5;
	private: System::Windows::Forms::Button^  number6;
	private: System::Windows::Forms::Button^  number7;
	private: System::Windows::Forms::Button^  number8;
	private: System::Windows::Forms::Button^  number9;
	private: System::Windows::Forms::Button^  number0;
	private: System::Windows::Forms::Button^  clear_output;
	private: System::Windows::Forms::Button^  clear_A;
	private: System::Windows::Forms::Button^  clear_B;
	private: System::Windows::Forms::Button^  input_A;
	private: System::Windows::Forms::Button^  input_B;
	private: System::Windows::Forms::Button^  clear_All;
	private: System::Windows::Forms::Button^  exit;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btn_add;
	private: System::Windows::Forms::Button^  btn_sub;
	private: System::Windows::Forms::Button^  btn_mul;
	private: System::Windows::Forms::Button^  btn_div;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->input_text = (gcnew System::Windows::Forms::TextBox());
			this->input_textA = (gcnew System::Windows::Forms::TextBox());
			this->input_textB = (gcnew System::Windows::Forms::TextBox());
			this->number1 = (gcnew System::Windows::Forms::Button());
			this->number2 = (gcnew System::Windows::Forms::Button());
			this->number3 = (gcnew System::Windows::Forms::Button());
			this->number4 = (gcnew System::Windows::Forms::Button());
			this->number5 = (gcnew System::Windows::Forms::Button());
			this->number6 = (gcnew System::Windows::Forms::Button());
			this->number7 = (gcnew System::Windows::Forms::Button());
			this->number8 = (gcnew System::Windows::Forms::Button());
			this->number9 = (gcnew System::Windows::Forms::Button());
			this->number0 = (gcnew System::Windows::Forms::Button());
			this->clear_output = (gcnew System::Windows::Forms::Button());
			this->clear_A = (gcnew System::Windows::Forms::Button());
			this->clear_B = (gcnew System::Windows::Forms::Button());
			this->input_A = (gcnew System::Windows::Forms::Button());
			this->input_B = (gcnew System::Windows::Forms::Button());
			this->clear_All = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_sub = (gcnew System::Windows::Forms::Button());
			this->btn_mul = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// input_text
			// 
			this->input_text->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->input_text->Location = System::Drawing::Point(51, 27);
			this->input_text->Name = L"input_text";
			this->input_text->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->input_text->Size = System::Drawing::Size(352, 22);
			this->input_text->TabIndex = 0;
			this->input_text->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// input_textA
			// 
			this->input_textA->Location = System::Drawing::Point(51, 70);
			this->input_textA->Name = L"input_textA";
			this->input_textA->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->input_textA->Size = System::Drawing::Size(203, 22);
			this->input_textA->TabIndex = 1;
			// 
			// input_textB
			// 
			this->input_textB->Location = System::Drawing::Point(51, 114);
			this->input_textB->Name = L"input_textB";
			this->input_textB->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->input_textB->Size = System::Drawing::Size(203, 22);
			this->input_textB->TabIndex = 2;
			// 
			// number1
			// 
			this->number1->Location = System::Drawing::Point(51, 157);
			this->number1->Name = L"number1";
			this->number1->Size = System::Drawing::Size(60, 42);
			this->number1->TabIndex = 3;
			this->number1->Text = L"1";
			this->number1->UseVisualStyleBackColor = true;
			this->number1->Click += gcnew System::EventHandler(this, &MyForm::number1_Click);
			// 
			// number2
			// 
			this->number2->Location = System::Drawing::Point(132, 157);
			this->number2->Name = L"number2";
			this->number2->Size = System::Drawing::Size(60, 42);
			this->number2->TabIndex = 4;
			this->number2->Text = L"2";
			this->number2->UseVisualStyleBackColor = true;
			this->number2->Click += gcnew System::EventHandler(this, &MyForm::number2_Click);
			// 
			// number3
			// 
			this->number3->Location = System::Drawing::Point(213, 157);
			this->number3->Name = L"number3";
			this->number3->Size = System::Drawing::Size(60, 42);
			this->number3->TabIndex = 5;
			this->number3->Text = L"3";
			this->number3->UseVisualStyleBackColor = true;
			this->number3->Click += gcnew System::EventHandler(this, &MyForm::number3_Click);
			// 
			// number4
			// 
			this->number4->Location = System::Drawing::Point(51, 219);
			this->number4->Name = L"number4";
			this->number4->Size = System::Drawing::Size(60, 42);
			this->number4->TabIndex = 6;
			this->number4->Text = L"4";
			this->number4->UseVisualStyleBackColor = true;
			this->number4->Click += gcnew System::EventHandler(this, &MyForm::number4_Click);
			// 
			// number5
			// 
			this->number5->Location = System::Drawing::Point(132, 219);
			this->number5->Name = L"number5";
			this->number5->Size = System::Drawing::Size(60, 42);
			this->number5->TabIndex = 7;
			this->number5->Text = L"5";
			this->number5->UseVisualStyleBackColor = true;
			this->number5->Click += gcnew System::EventHandler(this, &MyForm::number5_Click);
			// 
			// number6
			// 
			this->number6->Location = System::Drawing::Point(213, 219);
			this->number6->Name = L"number6";
			this->number6->Size = System::Drawing::Size(60, 42);
			this->number6->TabIndex = 8;
			this->number6->Text = L"6";
			this->number6->UseVisualStyleBackColor = true;
			this->number6->Click += gcnew System::EventHandler(this, &MyForm::number6_Click);
			// 
			// number7
			// 
			this->number7->Location = System::Drawing::Point(51, 281);
			this->number7->Name = L"number7";
			this->number7->Size = System::Drawing::Size(60, 42);
			this->number7->TabIndex = 9;
			this->number7->Text = L"7";
			this->number7->UseVisualStyleBackColor = true;
			this->number7->Click += gcnew System::EventHandler(this, &MyForm::number7_Click);
			// 
			// number8
			// 
			this->number8->Location = System::Drawing::Point(132, 281);
			this->number8->Name = L"number8";
			this->number8->Size = System::Drawing::Size(60, 42);
			this->number8->TabIndex = 10;
			this->number8->Text = L"8";
			this->number8->UseVisualStyleBackColor = true;
			this->number8->Click += gcnew System::EventHandler(this, &MyForm::number8_Click);
			// 
			// number9
			// 
			this->number9->Location = System::Drawing::Point(213, 281);
			this->number9->Name = L"number9";
			this->number9->Size = System::Drawing::Size(60, 42);
			this->number9->TabIndex = 11;
			this->number9->Text = L"9";
			this->number9->UseVisualStyleBackColor = true;
			this->number9->Click += gcnew System::EventHandler(this, &MyForm::number9_Click);
			// 
			// number0
			// 
			this->number0->Location = System::Drawing::Point(51, 341);
			this->number0->Name = L"number0";
			this->number0->Size = System::Drawing::Size(60, 42);
			this->number0->TabIndex = 12;
			this->number0->Text = L"0";
			this->number0->UseVisualStyleBackColor = true;
			this->number0->Click += gcnew System::EventHandler(this, &MyForm::number0_Click);
			// 
			// clear_output
			// 
			this->clear_output->Location = System::Drawing::Point(132, 341);
			this->clear_output->Name = L"clear_output";
			this->clear_output->Size = System::Drawing::Size(141, 42);
			this->clear_output->TabIndex = 13;
			this->clear_output->Text = L"CE";
			this->clear_output->UseVisualStyleBackColor = true;
			this->clear_output->Click += gcnew System::EventHandler(this, &MyForm::clear_output_Click);
			// 
			// clear_A
			// 
			this->clear_A->Location = System::Drawing::Point(308, 62);
			this->clear_A->Name = L"clear_A";
			this->clear_A->Size = System::Drawing::Size(95, 30);
			this->clear_A->TabIndex = 14;
			this->clear_A->Text = L"清除A";
			this->clear_A->UseVisualStyleBackColor = true;
			this->clear_A->Click += gcnew System::EventHandler(this, &MyForm::clear_A_Click);
			// 
			// clear_B
			// 
			this->clear_B->Location = System::Drawing::Point(308, 108);
			this->clear_B->Name = L"clear_B";
			this->clear_B->Size = System::Drawing::Size(95, 30);
			this->clear_B->TabIndex = 15;
			this->clear_B->Text = L"清除B";
			this->clear_B->UseVisualStyleBackColor = true;
			this->clear_B->Click += gcnew System::EventHandler(this, &MyForm::clear_B_Click);
			// 
			// input_A
			// 
			this->input_A->Location = System::Drawing::Point(308, 157);
			this->input_A->Name = L"input_A";
			this->input_A->Size = System::Drawing::Size(95, 46);
			this->input_A->TabIndex = 16;
			this->input_A->Text = L"輸入A";
			this->input_A->UseVisualStyleBackColor = true;
			this->input_A->Click += gcnew System::EventHandler(this, &MyForm::input_A_Click);
			// 
			// input_B
			// 
			this->input_B->Location = System::Drawing::Point(308, 219);
			this->input_B->Name = L"input_B";
			this->input_B->Size = System::Drawing::Size(95, 46);
			this->input_B->TabIndex = 17;
			this->input_B->Text = L"輸入B";
			this->input_B->UseVisualStyleBackColor = true;
			this->input_B->Click += gcnew System::EventHandler(this, &MyForm::input_B_Click);
			// 
			// clear_All
			// 
			this->clear_All->Location = System::Drawing::Point(308, 281);
			this->clear_All->Name = L"clear_All";
			this->clear_All->Size = System::Drawing::Size(95, 102);
			this->clear_All->TabIndex = 18;
			this->clear_All->Text = L"全部清除";
			this->clear_All->UseVisualStyleBackColor = true;
			this->clear_All->Click += gcnew System::EventHandler(this, &MyForm::clear_All_Click);
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(445, 70);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(60, 66);
			this->exit->TabIndex = 19;
			this->exit->Text = L"離開";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 24;
			this->label1->Text = L"輸出";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 12);
			this->label2->TabIndex = 25;
			this->label2->Text = L"A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 12);
			this->label3->TabIndex = 26;
			this->label3->Text = L"B";
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(445, 159);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(60, 42);
			this->btn_add->TabIndex = 27;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_sub
			// 
			this->btn_sub->Location = System::Drawing::Point(445, 219);
			this->btn_sub->Name = L"btn_sub";
			this->btn_sub->Size = System::Drawing::Size(60, 42);
			this->btn_sub->TabIndex = 28;
			this->btn_sub->Text = L"-";
			this->btn_sub->UseVisualStyleBackColor = true;
			this->btn_sub->Click += gcnew System::EventHandler(this, &MyForm::btn_sub_Click);
			// 
			// btn_mul
			// 
			this->btn_mul->Location = System::Drawing::Point(445, 281);
			this->btn_mul->Name = L"btn_mul";
			this->btn_mul->Size = System::Drawing::Size(60, 42);
			this->btn_mul->TabIndex = 29;
			this->btn_mul->Text = L"*";
			this->btn_mul->UseVisualStyleBackColor = true;
			this->btn_mul->Click += gcnew System::EventHandler(this, &MyForm::btn_mul_Click);
			// 
			// btn_div
			// 
			this->btn_div->Location = System::Drawing::Point(445, 341);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(60, 42);
			this->btn_div->TabIndex = 30;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = true;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 395);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_mul);
			this->Controls->Add(this->btn_sub);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->clear_All);
			this->Controls->Add(this->input_B);
			this->Controls->Add(this->input_A);
			this->Controls->Add(this->clear_B);
			this->Controls->Add(this->clear_A);
			this->Controls->Add(this->clear_output);
			this->Controls->Add(this->number0);
			this->Controls->Add(this->number9);
			this->Controls->Add(this->number8);
			this->Controls->Add(this->number7);
			this->Controls->Add(this->number6);
			this->Controls->Add(this->number5);
			this->Controls->Add(this->number4);
			this->Controls->Add(this->number3);
			this->Controls->Add(this->number2);
			this->Controls->Add(this->number1);
			this->Controls->Add(this->input_textB);
			this->Controls->Add(this->input_textA);
			this->Controls->Add(this->input_text);
			this->Name = L"MyForm";
			this->Text = L"簡易計算基";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clear_A_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_textA->Text = "";
	}
	private: System::Void clear_B_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_textB->Text = "";
	}
	private: System::Void clear_All_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_textA->Text = "";
				 input_textB->Text = "";
				 input_text->Text = "";

	}
	private: System::Void input_A_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_textA->Text = input_text->Text;
				 input_text->Text = "";
	}
	private: System::Void input_B_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_textB->Text = input_text->Text;
				 input_text->Text = "";
	}
	private: System::Void number1_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 1;

	}
	private: System::Void number2_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 2;
	}
	private: System::Void number3_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 3;
	}
	private: System::Void number4_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 4;
	}
	private: System::Void number5_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 5;
	}
	private: System::Void number6_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 6;
	}
	private: System::Void number7_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 7;
	}
	private: System::Void number8_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 8;
	}
	private: System::Void number9_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 9;
	}
	private: System::Void number0_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text += 0;
	}
	private: System::Void clear_output_Click(System::Object^  sender, System::EventArgs^  e) {
				 input_text->Text = "";
	}
	private: System::Void btn_add_Click(System::Object^  sender, System::EventArgs^  e) {
				 int a = Convert::ToInt32(input_textA->Text);
				 int b = Convert::ToInt32(input_textB->Text);
				 int sum = a + b;
				 input_text->Text = Convert::ToString(sum);

	}

private: System::Void btn_sub_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a = Convert::ToInt32(input_textA->Text);
			 int b = Convert::ToInt32(input_textB->Text);
			 int sub = a - b;
			 
			input_text->Text = sub.ToString();
			
			 
			 
			 	
			 
}
private: System::Void btn_mul_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a = Convert::ToInt32(input_textA->Text);
			 int b = Convert::ToInt32(input_textB->Text);
			 int mul = a * b;
			 input_text->Text = Convert::ToString(mul);
}
private: System::Void btn_div_Click(System::Object^  sender, System::EventArgs^  e) {
			 double a = Convert::ToDouble(input_textA->Text);
			 double b = Convert::ToDouble(input_textB->Text);
			 double div = a / b;
			 input_text->Text = Convert::ToString(div);
}
private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
