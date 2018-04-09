#pragma once
#include "repeater_tcp.h"
#include <iostream>
using namespace std;
namespace 转发器基地客户端 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// mainWnd 摘要
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
		
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	private: System::Windows::Forms::Label^  label4;
	public:
	private: System::Windows::Forms::TextBox^  textBox4;
			 Thread ^t;
		void Tcp_Recv() {
			t = gcnew Thread(gcnew ThreadStart(this, &mainWnd::handleRecv));
			t->Start();
			t->IsBackground = true;
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~mainWnd()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->richTextBox1->Location = System::Drawing::Point(0, 191);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(852, 334);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"发送";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainWnd::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(156, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(296, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(437, 25);
			this->textBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(165, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 15);
			this->label1->TabIndex = 5;
			this->label1->Text = L"我的mac地址";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(293, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"要发送的内容";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 15);
			this->label3->TabIndex = 8;
			this->label3->Text = L"目标mac地址";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(156, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 25);
			this->textBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(310, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 10;
			this->label4->Text = L"端口号";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(301, 133);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 25);
			this->textBox4->TabIndex = 9;
			// 
			// mainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(852, 525);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"mainWnd";
			this->Load += gcnew System::EventHandler(this, &mainWnd::mainWnd_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: void output(string &buff) {
			if (buff == "") {
				return;
			}
			richTextBox1->Text = richTextBox1->Text + gcnew String((buff+"\n").c_str());
		}

				void handleRecv() {
					char buff[1000];

					while (1) {
						string lh = R(4); 
						if (lh == "closed") {
							output(string("连接已断开"));
							TCPClose();
							return;
						}
						cout << "lh:" << lh << endl;
						string lb = R(8);
						cout << "lb:" << lb << endl;
						string head = R(atoi(lh.c_str()));

						string a = U2G(head.c_str());
						cout << U2G(head.c_str()).c_str() << endl;
						output(a);
						cout << "head:" << a.c_str() << endl;
						string body = R(atoi(lb.c_str()));
						cout << "body:" << body.c_str() << endl;
						output(body);
					}
				}


	private: System::Void mainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 string T_to_string(String^in)
			 {
				 int len = in->Length*2;
				 char *buff = new char[len + 1];
				 memset(buff, 0x00, len + 1);
				 snprintf(buff, len + 1, "%s", in);
				 string temp = buff;
				 delete[] buff;
				 return temp;
			 }
			 void reconnect() {
				 t->Abort();
				 TCPClose();
				 TCPStart(T_to_string(textBox4->Text));
				 Tcp_Recv();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	bool s = handleSend(T_to_string(textBox1->Text), T_to_string(textBox3->Text), T_to_string(textBox2->Text));
	if (!s) {
		reconnect();
	}
}
};
}
