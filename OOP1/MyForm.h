#pragma once
#include "FigureDeclarations.h"



namespace OOP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->DoubleBuffered = true;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Panel^ MainPanel;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


	private: System::Windows::Forms::ImageList^ imageFigures;
	private: System::Windows::Forms::Panel^ PanelFigures;
	private: System::Windows::Forms::Button^ BtnTriangle;

	private: System::Windows::Forms::Button^ BtnSquare;
	private: System::Windows::Forms::Button^ BtnLine;
	private: System::Windows::Forms::Button^ BtnCircle;
	private: System::Windows::Forms::Button^ BtnEllipse;
	private: System::Windows::Forms::Button^ BtnRectangle;
	private: System::Windows::Forms::Panel^ ÑolorPanel;
	private: System::Windows::Forms::Panel^ PenPanel;
	private: System::Windows::Forms::Panel^ ColorListPanel;
	private: System::Windows::Forms::Panel^ BrushPanel;
	private: System::Windows::Forms::Label^ PenLabelText;
	private: System::Windows::Forms::Label^ ColorLabelText;
	private: System::Windows::Forms::Label^ BrushLabelText;
	private: System::Windows::Forms::Button^ BtnRed;
	private: System::Windows::Forms::Button^ BtnGray;
	private: System::Windows::Forms::Button^ BtnBlack;
	private: System::Windows::Forms::Button^ BtnWhite;
	private: System::Windows::Forms::Button^ BtnBrown;
	private: System::Windows::Forms::Button^ BtnMaroon;
	private: System::Windows::Forms::Button^ BtnLime;
	private: System::Windows::Forms::Button^ BtnMagenta;
	private: System::Windows::Forms::Button^ BtnPurple;
	private: System::Windows::Forms::Button^ BtnAqua;
	private: System::Windows::Forms::Button^ BtnBlue;
	private: System::Windows::Forms::Button^ BtnGreen;
	private: System::Windows::Forms::Button^ BtnYellow;
	private: System::Windows::Forms::Button^ BtnOrange;
	private: System::Windows::Forms::Button^ BtnBrush;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ PenWidthLabel;
	private: System::Windows::Forms::Label^ DivLabel3;
	private: System::Windows::Forms::ToolStrip^ toolStripWidth;
	private: System::Windows::Forms::ToolStripButton^ Width3px;
	private: System::Windows::Forms::ToolStripButton^ Width5px;
	private: System::Windows::Forms::ToolStripButton^ Width7px;
	private: System::Windows::Forms::ToolStripButton^ Width9px;
	private: System::Windows::Forms::ImageList^ imageWidth;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ SaveBtn;
	private: System::Windows::Forms::PictureBox^ PaintBox;
	private: System::Windows::Forms::Panel^ FloodFillPanel;

	private: System::Windows::Forms::Button^ BtnFloodFill;
	private: System::Windows::Forms::Label^ FloodFillText;
	private: System::Windows::Forms::Button^ BtnHexagon;
	private: System::Windows::Forms::Label^ DivLabel4;
	private: System::Windows::Forms::Label^ DivLabel2;
	private: System::Windows::Forms::Label^ DivLabel1;
	private: System::Windows::Forms::Label^ FiguresLabelText;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ ClearFormLabelText;
	private: System::Windows::Forms::Button^ BtnClearForm;
	private: System::Windows::Forms::Button^ BtnPen;

		  
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->MainPanel = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->ClearFormLabelText = (gcnew System::Windows::Forms::Label());
			   this->BtnClearForm = (gcnew System::Windows::Forms::Button());
			   this->DivLabel4 = (gcnew System::Windows::Forms::Label());
			   this->DivLabel2 = (gcnew System::Windows::Forms::Label());
			   this->DivLabel1 = (gcnew System::Windows::Forms::Label());
			   this->FloodFillPanel = (gcnew System::Windows::Forms::Panel());
			   this->FloodFillText = (gcnew System::Windows::Forms::Label());
			   this->BtnFloodFill = (gcnew System::Windows::Forms::Button());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->toolStripWidth = (gcnew System::Windows::Forms::ToolStrip());
			   this->Width3px = (gcnew System::Windows::Forms::ToolStripButton());
			   this->Width5px = (gcnew System::Windows::Forms::ToolStripButton());
			   this->Width7px = (gcnew System::Windows::Forms::ToolStripButton());
			   this->Width9px = (gcnew System::Windows::Forms::ToolStripButton());
			   this->PenWidthLabel = (gcnew System::Windows::Forms::Label());
			   this->ÑolorPanel = (gcnew System::Windows::Forms::Panel());
			   this->ColorListPanel = (gcnew System::Windows::Forms::Panel());
			   this->BtnGray = (gcnew System::Windows::Forms::Button());
			   this->BtnBlack = (gcnew System::Windows::Forms::Button());
			   this->BtnWhite = (gcnew System::Windows::Forms::Button());
			   this->BtnBrown = (gcnew System::Windows::Forms::Button());
			   this->BtnMaroon = (gcnew System::Windows::Forms::Button());
			   this->BtnLime = (gcnew System::Windows::Forms::Button());
			   this->BtnMagenta = (gcnew System::Windows::Forms::Button());
			   this->BtnPurple = (gcnew System::Windows::Forms::Button());
			   this->BtnAqua = (gcnew System::Windows::Forms::Button());
			   this->BtnBlue = (gcnew System::Windows::Forms::Button());
			   this->BtnGreen = (gcnew System::Windows::Forms::Button());
			   this->BtnYellow = (gcnew System::Windows::Forms::Button());
			   this->BtnOrange = (gcnew System::Windows::Forms::Button());
			   this->BtnRed = (gcnew System::Windows::Forms::Button());
			   this->ColorLabelText = (gcnew System::Windows::Forms::Label());
			   this->BrushPanel = (gcnew System::Windows::Forms::Panel());
			   this->BtnBrush = (gcnew System::Windows::Forms::Button());
			   this->BrushLabelText = (gcnew System::Windows::Forms::Label());
			   this->PenPanel = (gcnew System::Windows::Forms::Panel());
			   this->BtnPen = (gcnew System::Windows::Forms::Button());
			   this->PenLabelText = (gcnew System::Windows::Forms::Label());
			   this->PanelFigures = (gcnew System::Windows::Forms::Panel());
			   this->FiguresLabelText = (gcnew System::Windows::Forms::Label());
			   this->BtnHexagon = (gcnew System::Windows::Forms::Button());
			   this->imageFigures = (gcnew System::Windows::Forms::ImageList(this->components));
			   this->BtnLine = (gcnew System::Windows::Forms::Button());
			   this->BtnCircle = (gcnew System::Windows::Forms::Button());
			   this->BtnEllipse = (gcnew System::Windows::Forms::Button());
			   this->BtnRectangle = (gcnew System::Windows::Forms::Button());
			   this->BtnSquare = (gcnew System::Windows::Forms::Button());
			   this->BtnTriangle = (gcnew System::Windows::Forms::Button());
			   this->DivLabel3 = (gcnew System::Windows::Forms::Label());
			   this->imageWidth = (gcnew System::Windows::Forms::ImageList(this->components));
			   this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			   this->SaveBtn = (gcnew System::Windows::Forms::ToolStripButton());
			   this->PaintBox = (gcnew System::Windows::Forms::PictureBox());
			   this->MainPanel->SuspendLayout();
			   this->panel2->SuspendLayout();
			   this->FloodFillPanel->SuspendLayout();
			   this->panel1->SuspendLayout();
			   this->toolStripWidth->SuspendLayout();
			   this->ÑolorPanel->SuspendLayout();
			   this->ColorListPanel->SuspendLayout();
			   this->BrushPanel->SuspendLayout();
			   this->PenPanel->SuspendLayout();
			   this->PanelFigures->SuspendLayout();
			   this->toolStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PaintBox))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // MainPanel
			   // 
			   this->MainPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->MainPanel->AutoSize = true;
			   this->MainPanel->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->MainPanel->Controls->Add(this->panel2);
			   this->MainPanel->Controls->Add(this->DivLabel4);
			   this->MainPanel->Controls->Add(this->DivLabel2);
			   this->MainPanel->Controls->Add(this->DivLabel1);
			   this->MainPanel->Controls->Add(this->FloodFillPanel);
			   this->MainPanel->Controls->Add(this->panel1);
			   this->MainPanel->Controls->Add(this->ÑolorPanel);
			   this->MainPanel->Controls->Add(this->PanelFigures);
			   this->MainPanel->Location = System::Drawing::Point(-1, 28);
			   this->MainPanel->Name = L"MainPanel";
			   this->MainPanel->Size = System::Drawing::Size(1468, 121);
			   this->MainPanel->TabIndex = 0;
			   // 
			   // panel2
			   // 
			   this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panel2->Controls->Add(this->ClearFormLabelText);
			   this->panel2->Controls->Add(this->BtnClearForm);
			   this->panel2->Location = System::Drawing::Point(1353, 3);
			   this->panel2->MinimumSize = System::Drawing::Size(74, 108);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(82, 108);
			   this->panel2->TabIndex = 24;
			   // 
			   // ClearFormLabelText
			   // 
			   this->ClearFormLabelText->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ClearFormLabelText->Location = System::Drawing::Point(-5, 65);
			   this->ClearFormLabelText->MinimumSize = System::Drawing::Size(61, 16);
			   this->ClearFormLabelText->Name = L"ClearFormLabelText";
			   this->ClearFormLabelText->Size = System::Drawing::Size(88, 39);
			   this->ClearFormLabelText->TabIndex = 8;
			   this->ClearFormLabelText->Text = L"Î÷èñòèòü ôîðìó";
			   this->ClearFormLabelText->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   // 
			   // BtnClearForm
			   // 
			   this->BtnClearForm->BackColor = System::Drawing::Color::White;
			   this->BtnClearForm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnClearForm.BackgroundImage")));
			   this->BtnClearForm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnClearForm->CausesValidation = false;
			   this->BtnClearForm->Location = System::Drawing::Point(19, 15);
			   this->BtnClearForm->Margin = System::Windows::Forms::Padding(3, 3, 3, 10);
			   this->BtnClearForm->MinimumSize = System::Drawing::Size(45, 44);
			   this->BtnClearForm->Name = L"BtnClearForm";
			   this->BtnClearForm->Padding = System::Windows::Forms::Padding(5);
			   this->BtnClearForm->Size = System::Drawing::Size(45, 44);
			   this->BtnClearForm->TabIndex = 22;
			   this->BtnClearForm->Tag = 2;
			   this->BtnClearForm->UseVisualStyleBackColor = false;
			   this->BtnClearForm->Click += gcnew System::EventHandler(this, &MyForm::BtnClearForm_Click);
			   // 
			   // DivLabel4
			   // 
			   this->DivLabel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->DivLabel4->Location = System::Drawing::Point(1250, 3);
			   this->DivLabel4->Name = L"DivLabel4";
			   this->DivLabel4->Size = System::Drawing::Size(2, 118);
			   this->DivLabel4->TabIndex = 26;
			   // 
			   // DivLabel2
			   // 
			   this->DivLabel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->DivLabel2->Location = System::Drawing::Point(1085, 0);
			   this->DivLabel2->Name = L"DivLabel2";
			   this->DivLabel2->Size = System::Drawing::Size(2, 118);
			   this->DivLabel2->TabIndex = 25;
			   // 
			   // DivLabel1
			   // 
			   this->DivLabel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->DivLabel1->Location = System::Drawing::Point(726, 1);
			   this->DivLabel1->Name = L"DivLabel1";
			   this->DivLabel1->Size = System::Drawing::Size(2, 118);
			   this->DivLabel1->TabIndex = 24;
			   // 
			   // FloodFillPanel
			   // 
			   this->FloodFillPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->FloodFillPanel->Controls->Add(this->FloodFillText);
			   this->FloodFillPanel->Controls->Add(this->BtnFloodFill);
			   this->FloodFillPanel->Location = System::Drawing::Point(1258, 3);
			   this->FloodFillPanel->MinimumSize = System::Drawing::Size(74, 108);
			   this->FloodFillPanel->Name = L"FloodFillPanel";
			   this->FloodFillPanel->Size = System::Drawing::Size(74, 108);
			   this->FloodFillPanel->TabIndex = 23;
			   // 
			   // FloodFillText
			   // 
			   this->FloodFillText->AutoSize = true;
			   this->FloodFillText->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FloodFillText->Location = System::Drawing::Point(3, 74);
			   this->FloodFillText->MinimumSize = System::Drawing::Size(61, 16);
			   this->FloodFillText->Name = L"FloodFillText";
			   this->FloodFillText->Size = System::Drawing::Size(61, 16);
			   this->FloodFillText->TabIndex = 8;
			   this->FloodFillText->Text = L"Çàëèâêà";
			   this->FloodFillText->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   // 
			   // BtnFloodFill
			   // 
			   this->BtnFloodFill->BackColor = System::Drawing::Color::White;
			   this->BtnFloodFill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnFloodFill.BackgroundImage")));
			   this->BtnFloodFill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->BtnFloodFill->CausesValidation = false;
			   this->BtnFloodFill->Location = System::Drawing::Point(14, 15);
			   this->BtnFloodFill->Margin = System::Windows::Forms::Padding(3, 3, 3, 10);
			   this->BtnFloodFill->MinimumSize = System::Drawing::Size(45, 44);
			   this->BtnFloodFill->Name = L"BtnFloodFill";
			   this->BtnFloodFill->Padding = System::Windows::Forms::Padding(5);
			   this->BtnFloodFill->Size = System::Drawing::Size(45, 44);
			   this->BtnFloodFill->TabIndex = 22;
			   this->BtnFloodFill->Tag = 2;
			   this->BtnFloodFill->UseVisualStyleBackColor = false;
			   this->BtnFloodFill->Click += gcnew System::EventHandler(this, &MyForm::BtnSelect_Click);
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->toolStripWidth);
			   this->panel1->Controls->Add(this->PenWidthLabel);
			   this->panel1->Location = System::Drawing::Point(1093, 3);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(154, 108);
			   this->panel1->TabIndex = 5;
			   // 
			   // toolStripWidth
			   // 
			   this->toolStripWidth->AutoSize = false;
			   this->toolStripWidth->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripWidth.BackgroundImage")));
			   this->toolStripWidth->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->toolStripWidth->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			   this->toolStripWidth->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->toolStripWidth->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			   this->toolStripWidth->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->Width3px, this->Width5px,
					   this->Width7px, this->Width9px
			   });
			   this->toolStripWidth->Location = System::Drawing::Point(0, 0);
			   this->toolStripWidth->Name = L"toolStripWidth";
			   this->toolStripWidth->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			   this->toolStripWidth->Size = System::Drawing::Size(154, 70);
			   this->toolStripWidth->TabIndex = 7;
			   // 
			   // Width3px
			   // 
			   this->Width3px->AutoSize = false;
			   this->Width3px->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Width3px.BackgroundImage")));
			   this->Width3px->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->Width3px->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Width3px.Image")));
			   this->Width3px->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->Width3px->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->Width3px->Name = L"Width3px";
			   this->Width3px->Size = System::Drawing::Size(154, 20);
			   this->Width3px->Tag = 5;
			   this->Width3px->ToolTipText = L"3px";
			   this->Width3px->Click += gcnew System::EventHandler(this, &MyForm::ToolWidthBtn_Click);
			   // 
			   // Width5px
			   // 
			   this->Width5px->AutoSize = false;
			   this->Width5px->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->Width5px->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Width5px.Image")));
			   this->Width5px->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->Width5px->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->Width5px->Name = L"Width5px";
			   this->Width5px->Size = System::Drawing::Size(154, 20);
			   this->Width5px->Tag = 7;
			   this->Width5px->ToolTipText = L"5px";
			   this->Width5px->Click += gcnew System::EventHandler(this, &MyForm::ToolWidthBtn_Click);
			   // 
			   // Width7px
			   // 
			   this->Width7px->AutoSize = false;
			   this->Width7px->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->Width7px->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Width7px.Image")));
			   this->Width7px->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->Width7px->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->Width7px->Name = L"Width7px";
			   this->Width7px->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->Width7px->Size = System::Drawing::Size(154, 20);
			   this->Width7px->Tag = 9;
			   this->Width7px->ToolTipText = L"7px";
			   this->Width7px->Click += gcnew System::EventHandler(this, &MyForm::ToolWidthBtn_Click);
			   // 
			   // Width9px
			   // 
			   this->Width9px->AutoSize = false;
			   this->Width9px->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Width9px.BackgroundImage")));
			   this->Width9px->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->Width9px->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Width9px.Image")));
			   this->Width9px->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->Width9px->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->Width9px->Name = L"Width9px";
			   this->Width9px->Size = System::Drawing::Size(154, 20);
			   this->Width9px->Tag = 11;
			   this->Width9px->ToolTipText = L"9px";
			   this->Width9px->Click += gcnew System::EventHandler(this, &MyForm::ToolWidthBtn_Click);
			   // 
			   // PenWidthLabel
			   // 
			   this->PenWidthLabel->AutoSize = true;
			   this->PenWidthLabel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->PenWidthLabel->Location = System::Drawing::Point(23, 75);
			   this->PenWidthLabel->Name = L"PenWidthLabel";
			   this->PenWidthLabel->Size = System::Drawing::Size(103, 16);
			   this->PenWidthLabel->TabIndex = 6;
			   this->PenWidthLabel->Text = L"Òîëùèíà ïåðà";
			   this->PenWidthLabel->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   // 
			   // ÑolorPanel
			   // 
			   this->ÑolorPanel->Controls->Add(this->ColorListPanel);
			   this->ÑolorPanel->Controls->Add(this->BrushPanel);
			   this->ÑolorPanel->Controls->Add(this->PenPanel);
			   this->ÑolorPanel->Location = System::Drawing::Point(13, 3);
			   this->ÑolorPanel->Name = L"ÑolorPanel";
			   this->ÑolorPanel->Size = System::Drawing::Size(706, 108);
			   this->ÑolorPanel->TabIndex = 4;
			   // 
			   // ColorListPanel
			   // 
			   this->ColorListPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->ColorListPanel->Controls->Add(this->BtnGray);
			   this->ColorListPanel->Controls->Add(this->BtnBlack);
			   this->ColorListPanel->Controls->Add(this->BtnWhite);
			   this->ColorListPanel->Controls->Add(this->BtnBrown);
			   this->ColorListPanel->Controls->Add(this->BtnMaroon);
			   this->ColorListPanel->Controls->Add(this->BtnLime);
			   this->ColorListPanel->Controls->Add(this->BtnMagenta);
			   this->ColorListPanel->Controls->Add(this->BtnPurple);
			   this->ColorListPanel->Controls->Add(this->BtnAqua);
			   this->ColorListPanel->Controls->Add(this->BtnBlue);
			   this->ColorListPanel->Controls->Add(this->BtnGreen);
			   this->ColorListPanel->Controls->Add(this->BtnYellow);
			   this->ColorListPanel->Controls->Add(this->BtnOrange);
			   this->ColorListPanel->Controls->Add(this->BtnRed);
			   this->ColorListPanel->Controls->Add(this->ColorLabelText);
			   this->ColorListPanel->Location = System::Drawing::Point(147, 9);
			   this->ColorListPanel->Name = L"ColorListPanel";
			   this->ColorListPanel->Size = System::Drawing::Size(539, 83);
			   this->ColorListPanel->TabIndex = 2;
			   // 
			   // BtnGray
			   // 
			   this->BtnGray->BackColor = System::Drawing::Color::Gray;
			   this->BtnGray->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnGray->CausesValidation = false;
			   this->BtnGray->Location = System::Drawing::Point(497, 3);
			   this->BtnGray->Name = L"BtnGray";
			   this->BtnGray->Padding = System::Windows::Forms::Padding(5);
			   this->BtnGray->Size = System::Drawing::Size(32, 32);
			   this->BtnGray->TabIndex = 21;
			   this->BtnGray->TabStop = false;
			   this->BtnGray->UseVisualStyleBackColor = false;
			   this->BtnGray->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnBlack
			   // 
			   this->BtnBlack->BackColor = System::Drawing::Color::Black;
			   this->BtnBlack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnBlack->CausesValidation = false;
			   this->BtnBlack->Location = System::Drawing::Point(459, 3);
			   this->BtnBlack->Name = L"BtnBlack";
			   this->BtnBlack->Padding = System::Windows::Forms::Padding(5);
			   this->BtnBlack->Size = System::Drawing::Size(32, 32);
			   this->BtnBlack->TabIndex = 20;
			   this->BtnBlack->TabStop = false;
			   this->BtnBlack->UseVisualStyleBackColor = false;
			   this->BtnBlack->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnWhite
			   // 
			   this->BtnWhite->BackColor = System::Drawing::Color::White;
			   this->BtnWhite->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnWhite->CausesValidation = false;
			   this->BtnWhite->Location = System::Drawing::Point(421, 3);
			   this->BtnWhite->Name = L"BtnWhite";
			   this->BtnWhite->Padding = System::Windows::Forms::Padding(5);
			   this->BtnWhite->Size = System::Drawing::Size(32, 32);
			   this->BtnWhite->TabIndex = 19;
			   this->BtnWhite->TabStop = false;
			   this->BtnWhite->UseVisualStyleBackColor = false;
			   this->BtnWhite->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnBrown
			   // 
			   this->BtnBrown->BackColor = System::Drawing::Color::Brown;
			   this->BtnBrown->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnBrown->CausesValidation = false;
			   this->BtnBrown->Location = System::Drawing::Point(383, 3);
			   this->BtnBrown->Name = L"BtnBrown";
			   this->BtnBrown->Padding = System::Windows::Forms::Padding(5);
			   this->BtnBrown->Size = System::Drawing::Size(32, 32);
			   this->BtnBrown->TabIndex = 18;
			   this->BtnBrown->TabStop = false;
			   this->BtnBrown->UseVisualStyleBackColor = false;
			   this->BtnBrown->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnMaroon
			   // 
			   this->BtnMaroon->BackColor = System::Drawing::Color::Maroon;
			   this->BtnMaroon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnMaroon->CausesValidation = false;
			   this->BtnMaroon->Location = System::Drawing::Point(345, 3);
			   this->BtnMaroon->Name = L"BtnMaroon";
			   this->BtnMaroon->Padding = System::Windows::Forms::Padding(5);
			   this->BtnMaroon->Size = System::Drawing::Size(32, 32);
			   this->BtnMaroon->TabIndex = 17;
			   this->BtnMaroon->TabStop = false;
			   this->BtnMaroon->UseVisualStyleBackColor = false;
			   this->BtnMaroon->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnLime
			   // 
			   this->BtnLime->BackColor = System::Drawing::Color::Lime;
			   this->BtnLime->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnLime->CausesValidation = false;
			   this->BtnLime->Location = System::Drawing::Point(307, 3);
			   this->BtnLime->Name = L"BtnLime";
			   this->BtnLime->Padding = System::Windows::Forms::Padding(5);
			   this->BtnLime->Size = System::Drawing::Size(32, 32);
			   this->BtnLime->TabIndex = 16;
			   this->BtnLime->TabStop = false;
			   this->BtnLime->UseVisualStyleBackColor = false;
			   this->BtnLime->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnMagenta
			   // 
			   this->BtnMagenta->BackColor = System::Drawing::Color::Magenta;
			   this->BtnMagenta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnMagenta->CausesValidation = false;
			   this->BtnMagenta->Location = System::Drawing::Point(269, 2);
			   this->BtnMagenta->Name = L"BtnMagenta";
			   this->BtnMagenta->Padding = System::Windows::Forms::Padding(5);
			   this->BtnMagenta->Size = System::Drawing::Size(32, 32);
			   this->BtnMagenta->TabIndex = 15;
			   this->BtnMagenta->TabStop = false;
			   this->BtnMagenta->UseVisualStyleBackColor = false;
			   this->BtnMagenta->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnPurple
			   // 
			   this->BtnPurple->BackColor = System::Drawing::Color::Purple;
			   this->BtnPurple->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnPurple->CausesValidation = false;
			   this->BtnPurple->Location = System::Drawing::Point(231, 2);
			   this->BtnPurple->Name = L"BtnPurple";
			   this->BtnPurple->Padding = System::Windows::Forms::Padding(5);
			   this->BtnPurple->Size = System::Drawing::Size(32, 32);
			   this->BtnPurple->TabIndex = 14;
			   this->BtnPurple->TabStop = false;
			   this->BtnPurple->UseVisualStyleBackColor = false;
			   this->BtnPurple->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnAqua
			   // 
			   this->BtnAqua->BackColor = System::Drawing::Color::Aqua;
			   this->BtnAqua->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnAqua->CausesValidation = false;
			   this->BtnAqua->Location = System::Drawing::Point(193, 2);
			   this->BtnAqua->Name = L"BtnAqua";
			   this->BtnAqua->Padding = System::Windows::Forms::Padding(5);
			   this->BtnAqua->Size = System::Drawing::Size(32, 32);
			   this->BtnAqua->TabIndex = 13;
			   this->BtnAqua->TabStop = false;
			   this->BtnAqua->UseVisualStyleBackColor = false;
			   this->BtnAqua->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnBlue
			   // 
			   this->BtnBlue->BackColor = System::Drawing::Color::Blue;
			   this->BtnBlue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnBlue->CausesValidation = false;
			   this->BtnBlue->Location = System::Drawing::Point(155, 2);
			   this->BtnBlue->Name = L"BtnBlue";
			   this->BtnBlue->Padding = System::Windows::Forms::Padding(5);
			   this->BtnBlue->Size = System::Drawing::Size(32, 32);
			   this->BtnBlue->TabIndex = 12;
			   this->BtnBlue->TabStop = false;
			   this->BtnBlue->UseVisualStyleBackColor = false;
			   this->BtnBlue->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnGreen
			   // 
			   this->BtnGreen->BackColor = System::Drawing::Color::Green;
			   this->BtnGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnGreen->CausesValidation = false;
			   this->BtnGreen->Location = System::Drawing::Point(117, 2);
			   this->BtnGreen->Name = L"BtnGreen";
			   this->BtnGreen->Padding = System::Windows::Forms::Padding(5);
			   this->BtnGreen->Size = System::Drawing::Size(32, 32);
			   this->BtnGreen->TabIndex = 11;
			   this->BtnGreen->TabStop = false;
			   this->BtnGreen->UseVisualStyleBackColor = false;
			   this->BtnGreen->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnYellow
			   // 
			   this->BtnYellow->BackColor = System::Drawing::Color::Yellow;
			   this->BtnYellow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnYellow->CausesValidation = false;
			   this->BtnYellow->Location = System::Drawing::Point(79, 3);
			   this->BtnYellow->Name = L"BtnYellow";
			   this->BtnYellow->Padding = System::Windows::Forms::Padding(5);
			   this->BtnYellow->Size = System::Drawing::Size(32, 32);
			   this->BtnYellow->TabIndex = 10;
			   this->BtnYellow->TabStop = false;
			   this->BtnYellow->UseVisualStyleBackColor = false;
			   this->BtnYellow->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnOrange
			   // 
			   this->BtnOrange->BackColor = System::Drawing::Color::Orange;
			   this->BtnOrange->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnOrange->CausesValidation = false;
			   this->BtnOrange->Location = System::Drawing::Point(41, 2);
			   this->BtnOrange->Name = L"BtnOrange";
			   this->BtnOrange->Padding = System::Windows::Forms::Padding(5);
			   this->BtnOrange->Size = System::Drawing::Size(32, 32);
			   this->BtnOrange->TabIndex = 9;
			   this->BtnOrange->TabStop = false;
			   this->BtnOrange->UseVisualStyleBackColor = false;
			   this->BtnOrange->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // BtnRed
			   // 
			   this->BtnRed->BackColor = System::Drawing::Color::Red;
			   this->BtnRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnRed->CausesValidation = false;
			   this->BtnRed->Location = System::Drawing::Point(3, 3);
			   this->BtnRed->Margin = System::Windows::Forms::Padding(3, 3, 3, 10);
			   this->BtnRed->Name = L"BtnRed";
			   this->BtnRed->Padding = System::Windows::Forms::Padding(5);
			   this->BtnRed->Size = System::Drawing::Size(32, 32);
			   this->BtnRed->TabIndex = 6;
			   this->BtnRed->UseVisualStyleBackColor = false;
			   this->BtnRed->Click += gcnew System::EventHandler(this, &MyForm::BtnColors_Click);
			   // 
			   // ColorLabelText
			   // 
			   this->ColorLabelText->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ColorLabelText->Location = System::Drawing::Point(226, 56);
			   this->ColorLabelText->Name = L"ColorLabelText";
			   this->ColorLabelText->Size = System::Drawing::Size(50, 14);
			   this->ColorLabelText->TabIndex = 8;
			   this->ColorLabelText->Text = L"Öâåò";
			   this->ColorLabelText->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   // 
			   // BrushPanel
			   // 
			   this->BrushPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->BrushPanel->Controls->Add(this->BtnBrush);
			   this->BrushPanel->Controls->Add(this->BrushLabelText);
			   this->BrushPanel->Location = System::Drawing::Point(86, 9);
			   this->BrushPanel->Name = L"BrushPanel";
			   this->BrushPanel->Size = System::Drawing::Size(55, 83);
			   this->BrushPanel->TabIndex = 1;
			   // 
			   // BtnBrush
			   // 
			   this->BtnBrush->BackColor = System::Drawing::Color::White;
			   this->BtnBrush->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnBrush->CausesValidation = false;
			   this->BtnBrush->Location = System::Drawing::Point(12, 6);
			   this->BtnBrush->Margin = System::Windows::Forms::Padding(3, 3, 3, 10);
			   this->BtnBrush->Name = L"BtnBrush";
			   this->BtnBrush->Padding = System::Windows::Forms::Padding(5);
			   this->BtnBrush->Size = System::Drawing::Size(32, 32);
			   this->BtnBrush->TabIndex = 22;
			   this->BtnBrush->Tag = 1;
			   this->BtnBrush->UseVisualStyleBackColor = false;
			   this->BtnBrush->Click += gcnew System::EventHandler(this, &MyForm::BtnSelect_Click);
			   // 
			   // BrushLabelText
			   // 
			   this->BrushLabelText->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BrushLabelText->Location = System::Drawing::Point(3, 41);
			   this->BrushLabelText->Name = L"BrushLabelText";
			   this->BrushLabelText->Size = System::Drawing::Size(50, 40);
			   this->BrushLabelText->TabIndex = 7;
			   this->BrushLabelText->Text = L"Öâåò êèñòè";
			   this->BrushLabelText->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   // 
			   // PenPanel
			   // 
			   this->PenPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->PenPanel->Controls->Add(this->BtnPen);
			   this->PenPanel->Controls->Add(this->PenLabelText);
			   this->PenPanel->Location = System::Drawing::Point(15, 9);
			   this->PenPanel->Name = L"PenPanel";
			   this->PenPanel->Size = System::Drawing::Size(55, 83);
			   this->PenPanel->TabIndex = 0;
			   // 
			   // BtnPen
			   // 
			   this->BtnPen->BackColor = System::Drawing::Color::Black;
			   this->BtnPen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnPen->CausesValidation = false;
			   this->BtnPen->Location = System::Drawing::Point(12, 6);
			   this->BtnPen->Name = L"BtnPen";
			   this->BtnPen->Padding = System::Windows::Forms::Padding(5);
			   this->BtnPen->Size = System::Drawing::Size(32, 32);
			   this->BtnPen->TabIndex = 23;
			   this->BtnPen->Tag = 0;
			   this->BtnPen->UseVisualStyleBackColor = false;
			   this->BtnPen->Click += gcnew System::EventHandler(this, &MyForm::BtnSelect_Click);
			   // 
			   // PenLabelText
			   // 
			   this->PenLabelText->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->PenLabelText->Location = System::Drawing::Point(3, 39);
			   this->PenLabelText->Name = L"PenLabelText";
			   this->PenLabelText->Size = System::Drawing::Size(50, 40);
			   this->PenLabelText->TabIndex = 6;
			   this->PenLabelText->Text = L"Öâåò ïåðà";
			   this->PenLabelText->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   // 
			   // PanelFigures
			   // 
			   this->PanelFigures->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->PanelFigures->Controls->Add(this->FiguresLabelText);
			   this->PanelFigures->Controls->Add(this->BtnHexagon);
			   this->PanelFigures->Controls->Add(this->BtnLine);
			   this->PanelFigures->Controls->Add(this->BtnCircle);
			   this->PanelFigures->Controls->Add(this->BtnEllipse);
			   this->PanelFigures->Controls->Add(this->BtnRectangle);
			   this->PanelFigures->Controls->Add(this->BtnSquare);
			   this->PanelFigures->Controls->Add(this->BtnTriangle);
			   this->PanelFigures->Location = System::Drawing::Point(734, 1);
			   this->PanelFigures->Name = L"PanelFigures";
			   this->PanelFigures->Size = System::Drawing::Size(345, 108);
			   this->PanelFigures->TabIndex = 1;
			   // 
			   // FiguresLabelText
			   // 
			   this->FiguresLabelText->AutoSize = true;
			   this->FiguresLabelText->Location = System::Drawing::Point(150, 73);
			   this->FiguresLabelText->Name = L"FiguresLabelText";
			   this->FiguresLabelText->Size = System::Drawing::Size(59, 17);
			   this->FiguresLabelText->TabIndex = 7;
			   this->FiguresLabelText->Text = L"Ôèãóðû";
			   // 
			   // BtnHexagon
			   // 
			   this->BtnHexagon->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BtnHexagon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnHexagon->CausesValidation = false;
			   this->BtnHexagon->ImageIndex = 6;
			   this->BtnHexagon->ImageList = this->imageFigures;
			   this->BtnHexagon->Location = System::Drawing::Point(289, 10);
			   this->BtnHexagon->Name = L"BtnHexagon";
			   this->BtnHexagon->Padding = System::Windows::Forms::Padding(5);
			   this->BtnHexagon->Size = System::Drawing::Size(40, 40);
			   this->BtnHexagon->TabIndex = 6;
			   this->BtnHexagon->TabStop = false;
			   this->BtnHexagon->UseVisualStyleBackColor = false;
			   this->BtnHexagon->Click += gcnew System::EventHandler(this, &MyForm::BtnFigures_Click);
			   // 
			   // imageFigures
			   // 
			   this->imageFigures->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageFigures.ImageStream")));
			   this->imageFigures->TransparentColor = System::Drawing::Color::Transparent;
			   this->imageFigures->Images->SetKeyName(0, L"triangle.png");
			   this->imageFigures->Images->SetKeyName(1, L"square.png");
			   this->imageFigures->Images->SetKeyName(2, L"rectangle.png");
			   this->imageFigures->Images->SetKeyName(3, L"ellipse.png");
			   this->imageFigures->Images->SetKeyName(4, L"circle.png");
			   this->imageFigures->Images->SetKeyName(5, L"line.png");
			   this->imageFigures->Images->SetKeyName(6, L"Hexagon.png");
			   this->imageFigures->Images->SetKeyName(7, L"widthimg.png");
			   // 
			   // BtnLine
			   // 
			   this->BtnLine->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BtnLine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnLine->CausesValidation = false;
			   this->BtnLine->ImageIndex = 5;
			   this->BtnLine->ImageList = this->imageFigures;
			   this->BtnLine->Location = System::Drawing::Point(243, 9);
			   this->BtnLine->Name = L"BtnLine";
			   this->BtnLine->Padding = System::Windows::Forms::Padding(5);
			   this->BtnLine->Size = System::Drawing::Size(40, 40);
			   this->BtnLine->TabIndex = 5;
			   this->BtnLine->TabStop = false;
			   this->BtnLine->UseVisualStyleBackColor = false;
			   this->BtnLine->Click += gcnew System::EventHandler(this, &MyForm::BtnFigures_Click);
			   // 
			   // BtnCircle
			   // 
			   this->BtnCircle->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BtnCircle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnCircle->CausesValidation = false;
			   this->BtnCircle->ImageIndex = 4;
			   this->BtnCircle->ImageList = this->imageFigures;
			   this->BtnCircle->Location = System::Drawing::Point(197, 9);
			   this->BtnCircle->Name = L"BtnCircle";
			   this->BtnCircle->Padding = System::Windows::Forms::Padding(5);
			   this->BtnCircle->Size = System::Drawing::Size(40, 40);
			   this->BtnCircle->TabIndex = 4;
			   this->BtnCircle->TabStop = false;
			   this->BtnCircle->UseVisualStyleBackColor = false;
			   this->BtnCircle->Click += gcnew System::EventHandler(this, &MyForm::BtnFigures_Click);
			   // 
			   // BtnEllipse
			   // 
			   this->BtnEllipse->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BtnEllipse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnEllipse->CausesValidation = false;
			   this->BtnEllipse->ImageIndex = 3;
			   this->BtnEllipse->ImageList = this->imageFigures;
			   this->BtnEllipse->Location = System::Drawing::Point(153, 9);
			   this->BtnEllipse->Name = L"BtnEllipse";
			   this->BtnEllipse->Padding = System::Windows::Forms::Padding(5);
			   this->BtnEllipse->Size = System::Drawing::Size(40, 40);
			   this->BtnEllipse->TabIndex = 3;
			   this->BtnEllipse->TabStop = false;
			   this->BtnEllipse->UseVisualStyleBackColor = false;
			   this->BtnEllipse->Click += gcnew System::EventHandler(this, &MyForm::BtnFigures_Click);
			   // 
			   // BtnRectangle
			   // 
			   this->BtnRectangle->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BtnRectangle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnRectangle->CausesValidation = false;
			   this->BtnRectangle->ImageIndex = 2;
			   this->BtnRectangle->ImageList = this->imageFigures;
			   this->BtnRectangle->Location = System::Drawing::Point(107, 9);
			   this->BtnRectangle->Name = L"BtnRectangle";
			   this->BtnRectangle->Padding = System::Windows::Forms::Padding(5);
			   this->BtnRectangle->Size = System::Drawing::Size(40, 40);
			   this->BtnRectangle->TabIndex = 2;
			   this->BtnRectangle->TabStop = false;
			   this->BtnRectangle->UseVisualStyleBackColor = false;
			   this->BtnRectangle->Click += gcnew System::EventHandler(this, &MyForm::BtnFigures_Click);
			   // 
			   // BtnSquare
			   // 
			   this->BtnSquare->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BtnSquare->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnSquare->CausesValidation = false;
			   this->BtnSquare->ImageIndex = 1;
			   this->BtnSquare->ImageList = this->imageFigures;
			   this->BtnSquare->Location = System::Drawing::Point(61, 9);
			   this->BtnSquare->Name = L"BtnSquare";
			   this->BtnSquare->Padding = System::Windows::Forms::Padding(5);
			   this->BtnSquare->Size = System::Drawing::Size(40, 40);
			   this->BtnSquare->TabIndex = 1;
			   this->BtnSquare->TabStop = false;
			   this->BtnSquare->UseVisualStyleBackColor = false;
			   this->BtnSquare->Click += gcnew System::EventHandler(this, &MyForm::BtnFigures_Click);
			   // 
			   // BtnTriangle
			   // 
			   this->BtnTriangle->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BtnTriangle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnTriangle->CausesValidation = false;
			   this->BtnTriangle->ImageIndex = 0;
			   this->BtnTriangle->ImageList = this->imageFigures;
			   this->BtnTriangle->Location = System::Drawing::Point(15, 9);
			   this->BtnTriangle->Name = L"BtnTriangle";
			   this->BtnTriangle->Padding = System::Windows::Forms::Padding(5);
			   this->BtnTriangle->Size = System::Drawing::Size(40, 40);
			   this->BtnTriangle->TabIndex = 0;
			   this->BtnTriangle->TabStop = false;
			   this->BtnTriangle->UseVisualStyleBackColor = false;
			   this->BtnTriangle->Click += gcnew System::EventHandler(this, &MyForm::BtnFigures_Click);
			   // 
			   // DivLabel3
			   // 
			   this->DivLabel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->DivLabel3->Location = System::Drawing::Point(1196, -2);
			   this->DivLabel3->Name = L"DivLabel3";
			   this->DivLabel3->Size = System::Drawing::Size(2, 118);
			   this->DivLabel3->TabIndex = 6;
			   // 
			   // imageWidth
			   // 
			   this->imageWidth->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageWidth.ImageStream")));
			   this->imageWidth->TransparentColor = System::Drawing::Color::Transparent;
			   this->imageWidth->Images->SetKeyName(0, L"9px.png");
			   // 
			   // toolStrip1
			   // 
			   this->toolStrip1->BackColor = System::Drawing::Color::Gray;
			   this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			   this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->SaveBtn });
			   this->toolStrip1->Location = System::Drawing::Point(0, 0);
			   this->toolStrip1->Name = L"toolStrip1";
			   this->toolStrip1->Size = System::Drawing::Size(1467, 27);
			   this->toolStrip1->TabIndex = 1;
			   this->toolStrip1->Text = L"toolStrip1";
			   // 
			   // SaveBtn
			   // 
			   this->SaveBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->SaveBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SaveBtn.Image")));
			   this->SaveBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->SaveBtn->Name = L"SaveBtn";
			   this->SaveBtn->Size = System::Drawing::Size(29, 24);
			   this->SaveBtn->ToolTipText = L"Ñîõðàíèòü";
			   this->SaveBtn->Click += gcnew System::EventHandler(this, &MyForm::SaveBtn_Click);
			   // 
			   // PaintBox
			   // 
			   this->PaintBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->PaintBox->Location = System::Drawing::Point(0, 145);
			   this->PaintBox->Name = L"PaintBox";
			   this->PaintBox->Size = System::Drawing::Size(1467, 325);
			   this->PaintBox->TabIndex = 2;
			   this->PaintBox->TabStop = false;
			   this->PaintBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PaintBox_Paint);
			   this->PaintBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PaintBox_MouseDown);
			   this->PaintBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PaintBox_MouseMove);
			   this->PaintBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PaintBox_MouseUp);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->ClientSize = System::Drawing::Size(1467, 470);
			   this->Controls->Add(this->PaintBox);
			   this->Controls->Add(this->toolStrip1);
			   this->Controls->Add(this->MainPanel);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MinimumSize = System::Drawing::Size(1316, 517);
			   this->Name = L"MyForm";
			   this->Text = L"Paint";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->MainPanel->ResumeLayout(false);
			   this->panel2->ResumeLayout(false);
			   this->FloodFillPanel->ResumeLayout(false);
			   this->FloodFillPanel->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->toolStripWidth->ResumeLayout(false);
			   this->toolStripWidth->PerformLayout();
			   this->ÑolorPanel->ResumeLayout(false);
			   this->ColorListPanel->ResumeLayout(false);
			   this->BrushPanel->ResumeLayout(false);
			   this->PenPanel->ResumeLayout(false);
			   this->PanelFigures->ResumeLayout(false);
			   this->PanelFigures->PerformLayout();
			   this->toolStrip1->ResumeLayout(false);
			   this->toolStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PaintBox))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	
	private:	
		
		Generic::List<ClFig::Figure^>^ FigList;
		
		Color PenColor;
		Color BrColor;
		float PenWidth;
		bool DrawMode = false;

		delegate ClFig::Figure^ CreateFigure(int, int); 
		delegate void SelectColor(Color);

		array<CreateFigure^>^ FuncArr;
		const int ArrSize = 7;
		ClFig::Figure^ CurrFigure = nullptr;
		ClFig::Closed^ MouseOnFigure = nullptr;

		const int MSize = 3;
		int index = 0;
		array<SelectColor^>^ ColArr;
		int ColIndex = 0;

		inline ClFig::Figure^ CreateTriangle(int x, int y) //0
		{
			return gcnew ClFig::Triangle(PenColor,BrColor,PenWidth, x, y);
		}
		inline ClFig::Figure^ CreateSquare(int x, int y) //1
		{
			return gcnew ClFig::Square(PenColor, BrColor, PenWidth, x, y);
		}
		inline ClFig::Figure^ CreateRectangle(int x, int y)//2
		{
			return gcnew ClFig::Rectangle(PenColor, BrColor, PenWidth, x, y);
		}
		inline ClFig::Figure^ CreateEllipse(int x, int y) //3
		{
			return gcnew ClFig::Ellipse(PenColor, BrColor, PenWidth, x, y);
		}
		inline ClFig::Figure^ CreateCircle(int x, int y) //4
		{
			return gcnew ClFig::Circle(PenColor, BrColor, PenWidth, x, y);
		}
		inline ClFig::Figure^ CreateLine(int x, int y) //5
		{
			return gcnew ClFig::Line(PenColor, PenWidth, x, y);
		}
		inline ClFig::Figure^ CreateHexagon(int x, int y) //6
		{
			return gcnew ClFig::Hexagon(PenColor, BrColor, PenWidth, x, y);
		}

		

		inline void SetPenColor(Color newColor)
		{
			PenColor = newColor;
			this->BtnPen->BackColor = newColor;
			BtnPen->Focus();
		}
		inline void SetBrushColor(Color newColor)
		{
			BrColor = newColor;
			this->BtnBrush->BackColor = newColor;
			BtnBrush->Focus();
		}
		inline void SetFloodFillColor(Color newColor)
		{
			this->BtnFloodFill->BackColor = newColor;
			BtnFloodFill->Focus();
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		BtnPen->Focus();
		PenColor = Color::Black;
		BrColor = Color::White;
		PenWidth = 5;

		FigList = gcnew Generic::List<ClFig::Figure^>();
		FuncArr = gcnew array<CreateFigure^>(ArrSize);
		FuncArr[0] = gcnew CreateFigure(this, &MyForm::CreateTriangle);
		FuncArr[1] = gcnew CreateFigure(this, &MyForm::CreateSquare);
		FuncArr[2] = gcnew CreateFigure(this, &MyForm::CreateRectangle);
		FuncArr[3] = gcnew CreateFigure(this, &MyForm::CreateEllipse);
		FuncArr[4] = gcnew CreateFigure(this, &MyForm::CreateCircle);
		FuncArr[5] = gcnew CreateFigure(this, &MyForm::CreateLine);
		FuncArr[6] = gcnew CreateFigure(this, &MyForm::CreateHexagon);
		ColArr = gcnew array<SelectColor^>(MSize);
		ColArr[0] = gcnew SelectColor(this, &MyForm::SetPenColor);
		ColArr[1] = gcnew SelectColor(this, &MyForm::SetBrushColor);
		ColArr[2] = gcnew SelectColor(this, &MyForm::SetFloodFillColor);
	}

    private: System::Void BtnFigures_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender; //type cast
		index = btn->ImageIndex; // get index
		DrawMode = true;

}

    private: System::Void BtnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		   Button^ btn = (Button^)sender;
		   ColIndex = (int)btn->Tag; 
		   DrawMode = false;		   
 }

	private: System::Void BtnColors_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender; //type cast
		ColArr[ColIndex](btn->BackColor); // get selected color either brush or pen
		DrawMode = false;
}
	
	private: System::Void ToolWidthBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ToolStripButton^ btn = (ToolStripButton^)sender; //type cast
	     PenWidth = (int)btn->Tag;
}

	private: System::Void SaveBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		SaveFileDialog^ sfd = gcnew SaveFileDialog();
		sfd->Filter = "Ðèñóíîê .bmp | *.bmp";
		sfd->InitialDirectory = "C:\\";
		if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ bmp = gcnew Bitmap(PaintBox->Width, PaintBox->Height);
			PaintBox->DrawToBitmap(bmp, PaintBox->ClientRectangle);
			bmp->Save(sfd->FileName);
		}
}
	private: System::Void PaintBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		for each (ClFig::Figure ^ p in FigList)
		{
			p->Draw(e->Graphics);
		}
}
	private: System::Void PaintBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		CurrFigure = nullptr; 
		MouseOnFigure = nullptr;
}


	private: System::Void PaintBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (BtnFloodFill->Focused)
		{
			ClFig::Closed^ m;

			for each ( auto p in FigList)
			{
				m = dynamic_cast<ClFig::Closed^>(p);
				if (m != nullptr)
			{
					if (m->CheckArea(e->X, e->Y)==true)
					MouseOnFigure = m;
				}
			}
			if (MouseOnFigure != nullptr)
			{
				MouseOnFigure->SetBrColor(BtnFloodFill->BackColor);
				PaintBox->Refresh();
			}
		
		}
		else if (DrawMode){
			CurrFigure = FuncArr[index](e->X, e->Y);
			FigList->Add(CurrFigure);
		}
}
	private: System::Void PaintBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (CurrFigure != nullptr)
		{
			CurrFigure->ReSet(e->X, e->Y); // change coords
			PaintBox->Refresh(); //repaint

		}
}

	private: System::Void BtnClearForm_Click(System::Object^ sender, System::EventArgs^ e) {
		FigList = gcnew Generic::List<ClFig::Figure^>();
		PaintBox->Refresh();
}

};
  
}
