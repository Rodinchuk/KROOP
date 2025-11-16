#pragma once

#include "Tile.h"

// Підключення просторів імен
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections::Generic; // Для List<>
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace KROOP {

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            // Ініціалізація списку для зберігання об'єктів плитки
            tiles = gcnew List<Tile^>();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // Список для зберігання даних про плитки
        List<Tile^>^ tiles;

        // --- Оголошення всіх візуальних компонентів ---
        System::ComponentModel::Container^ components;
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::GroupBox^ gbAddTile;
        System::Windows::Forms::Button^ btnAddTile;
        System::Windows::Forms::TextBox^ txtPrice;
        System::Windows::Forms::Label^ lblPrice;
        System::Windows::Forms::TextBox^ txtHeight;
        System::Windows::Forms::Label^ lblHeight;
        System::Windows::Forms::TextBox^ txtWidth;
        System::Windows::Forms::Label^ lblWidth;
        System::Windows::Forms::TextBox^ txtName;
        System::Windows::Forms::Label^ lblName;
        System::Windows::Forms::Button^ btnSort;
        System::Windows::Forms::GroupBox^ gbCalculations;
        System::Windows::Forms::Label^ lblLeftoverResult;
        System::Windows::Forms::Label^ lblLeftover;
        System::Windows::Forms::RadioButton^ rbBuyByM2;
        System::Windows::Forms::RadioButton^ rbBuyByPiece;
        System::Windows::Forms::Label^ lblCostResult;
        System::Windows::Forms::Label^ lblCost;
        System::Windows::Forms::Label^ lblTilesForWallResult;
        System::Windows::Forms::Label^ lblTilesForWall;
        System::Windows::Forms::TextBox^ txtWallHeight;
        System::Windows::Forms::Label^ lblWallHeight;
        System::Windows::Forms::TextBox^ txtWallWidth;
        System::Windows::Forms::Label^ lblWallWidth;
        System::Windows::Forms::Label^ lblTilesPerM2Result;
        System::Windows::Forms::Label^ lblTilesPerM2;
        System::Windows::Forms::Button^ btnCalculate;
        System::Windows::Forms::MenuStrip^ menuStrip1;
        System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->gbAddTile = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddTile = (gcnew System::Windows::Forms::Button());
            this->txtPrice = (gcnew System::Windows::Forms::TextBox());
            this->lblPrice = (gcnew System::Windows::Forms::Label());
            this->txtHeight = (gcnew System::Windows::Forms::TextBox());
            this->lblHeight = (gcnew System::Windows::Forms::Label());
            this->txtWidth = (gcnew System::Windows::Forms::TextBox());
            this->lblWidth = (gcnew System::Windows::Forms::Label());
            this->txtName = (gcnew System::Windows::Forms::TextBox());
            this->lblName = (gcnew System::Windows::Forms::Label());
            this->btnSort = (gcnew System::Windows::Forms::Button());
            this->gbCalculations = (gcnew System::Windows::Forms::GroupBox());
            this->lblLeftoverResult = (gcnew System::Windows::Forms::Label());
            this->lblLeftover = (gcnew System::Windows::Forms::Label());
            this->rbBuyByM2 = (gcnew System::Windows::Forms::RadioButton());
            this->rbBuyByPiece = (gcnew System::Windows::Forms::RadioButton());
            this->lblCostResult = (gcnew System::Windows::Forms::Label());
            this->lblCost = (gcnew System::Windows::Forms::Label());
            this->lblTilesForWallResult = (gcnew System::Windows::Forms::Label());
            this->lblTilesForWall = (gcnew System::Windows::Forms::Label());
            this->txtWallHeight = (gcnew System::Windows::Forms::TextBox());
            this->lblWallHeight = (gcnew System::Windows::Forms::Label());
            this->txtWallWidth = (gcnew System::Windows::Forms::TextBox());
            this->lblWallWidth = (gcnew System::Windows::Forms::Label());
            this->lblTilesPerM2Result = (gcnew System::Windows::Forms::Label());
            this->lblTilesPerM2 = (gcnew System::Windows::Forms::Label());
            this->btnCalculate = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->gbAddTile->SuspendLayout();
            this->gbCalculations->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->BackgroundColor = System::Drawing::Color::AliceBlue;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(16, 49);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->Size = System::Drawing::Size(841, 185);
            this->dataGridView1->TabIndex = 0;
            // 
            // gbAddTile
            // 
            this->gbAddTile->Controls->Add(this->btnAddTile);
            this->gbAddTile->Controls->Add(this->txtPrice);
            this->gbAddTile->Controls->Add(this->lblPrice);
            this->gbAddTile->Controls->Add(this->txtHeight);
            this->gbAddTile->Controls->Add(this->lblHeight);
            this->gbAddTile->Controls->Add(this->txtWidth);
            this->gbAddTile->Controls->Add(this->lblWidth);
            this->gbAddTile->Controls->Add(this->txtName);
            this->gbAddTile->Controls->Add(this->lblName);
            this->gbAddTile->Location = System::Drawing::Point(16, 241);
            this->gbAddTile->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->gbAddTile->Name = L"gbAddTile";
            this->gbAddTile->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->gbAddTile->Size = System::Drawing::Size(840, 123);
            this->gbAddTile->TabIndex = 1;
            this->gbAddTile->TabStop = false;
            this->gbAddTile->Text = L"Додати нову плитку";
            // 
            // btnAddTile
            // 
            this->btnAddTile->Location = System::Drawing::Point(665, 36);
            this->btnAddTile->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->btnAddTile->Name = L"btnAddTile";
            this->btnAddTile->Size = System::Drawing::Size(155, 69);
            this->btnAddTile->TabIndex = 8;
            this->btnAddTile->Text = L"Додати";
            this->btnAddTile->UseVisualStyleBackColor = true;
            this->btnAddTile->Click += gcnew System::EventHandler(this, &MyForm::btnAddTile_Click);
            // 
            // txtPrice
            // 
            this->txtPrice->Location = System::Drawing::Point(444, 80);
            this->txtPrice->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->txtPrice->Name = L"txtPrice";
            this->txtPrice->Size = System::Drawing::Size(204, 22);
            this->txtPrice->TabIndex = 7;
            // 
            // lblPrice
            // 
            this->lblPrice->AutoSize = true;
            this->lblPrice->Location = System::Drawing::Point(344, 83);
            this->lblPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblPrice->Name = L"lblPrice";
            this->lblPrice->Size = System::Drawing::Size(76, 16);
            this->lblPrice->TabIndex = 6;
            this->lblPrice->Text = L"Ціна за м2:";
            // 
            // txtHeight
            // 
            this->txtHeight->Location = System::Drawing::Point(444, 36);
            this->txtHeight->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->txtHeight->Name = L"txtHeight";
            this->txtHeight->Size = System::Drawing::Size(204, 22);
            this->txtHeight->TabIndex = 5;
            // 
            // lblHeight
            // 
            this->lblHeight->AutoSize = true;
            this->lblHeight->Location = System::Drawing::Point(344, 39);
            this->lblHeight->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblHeight->Name = L"lblHeight";
            this->lblHeight->Size = System::Drawing::Size(72, 16);
            this->lblHeight->TabIndex = 4;
            this->lblHeight->Text = L"Висота, м:";
            // 
            // txtWidth
            // 
            this->txtWidth->Location = System::Drawing::Point(105, 77);
            this->txtWidth->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->txtWidth->Name = L"txtWidth";
            this->txtWidth->Size = System::Drawing::Size(193, 22);
            this->txtWidth->TabIndex = 3;
            // 
            // lblWidth
            // 
            this->lblWidth->AutoSize = true;
            this->lblWidth->Location = System::Drawing::Point(8, 80);
            this->lblWidth->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblWidth->Name = L"lblWidth";
            this->lblWidth->Size = System::Drawing::Size(76, 16);
            this->lblWidth->TabIndex = 2;
            this->lblWidth->Text = L"Ширина, м:";
            // 
            // txtName
            // 
            this->txtName->Location = System::Drawing::Point(105, 33);
            this->txtName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->txtName->Name = L"txtName";
            this->txtName->Size = System::Drawing::Size(193, 22);
            this->txtName->TabIndex = 1;
            // 
            // lblName
            // 
            this->lblName->AutoSize = true;
            this->lblName->Location = System::Drawing::Point(8, 36);
            this->lblName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblName->Name = L"lblName";
            this->lblName->Size = System::Drawing::Size(52, 16);
            this->lblName->TabIndex = 0;
            this->lblName->Text = L"Назва:";
            // 
            // btnSort
            // 
            this->btnSort->Location = System::Drawing::Point(16, 372);
            this->btnSort->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->btnSort->Name = L"btnSort";
            this->btnSort->Size = System::Drawing::Size(840, 28);
            this->btnSort->TabIndex = 2;
            this->btnSort->Text = L"1. Порахувати та відсортувати плитки ШВИДКИМ алгоритмом за ціною однієї плитки";
            this->btnSort->UseVisualStyleBackColor = true;
            this->btnSort->Click += gcnew System::EventHandler(this, &MyForm::btnSort_Click);
            // 
            // gbCalculations
            // 
            this->gbCalculations->Controls->Add(this->lblLeftoverResult);
            this->gbCalculations->Controls->Add(this->lblLeftover);
            this->gbCalculations->Controls->Add(this->rbBuyByM2);
            this->gbCalculations->Controls->Add(this->rbBuyByPiece);
            this->gbCalculations->Controls->Add(this->lblCostResult);
            this->gbCalculations->Controls->Add(this->lblCost);
            this->gbCalculations->Controls->Add(this->lblTilesForWallResult);
            this->gbCalculations->Controls->Add(this->btnCalculate);
            this->gbCalculations->Controls->Add(this->lblTilesForWall);
            this->gbCalculations->Controls->Add(this->txtWallHeight);
            this->gbCalculations->Controls->Add(this->lblWallHeight);
            this->gbCalculations->Controls->Add(this->txtWallWidth);
            this->gbCalculations->Controls->Add(this->lblWallWidth);
            this->gbCalculations->Controls->Add(this->lblTilesPerM2Result);
            this->gbCalculations->Controls->Add(this->lblTilesPerM2);
            this->gbCalculations->Location = System::Drawing::Point(16, 407);
            this->gbCalculations->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->gbCalculations->Name = L"gbCalculations";
            this->gbCalculations->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->gbCalculations->Size = System::Drawing::Size(840, 271);
            this->gbCalculations->TabIndex = 3;
            this->gbCalculations->TabStop = false;
            this->gbCalculations->Text = L"Розрахунки (оберіть плитку в таблиці)";
            // 
            // lblLeftoverResult
            // 
            this->lblLeftoverResult->AutoSize = true;
            this->lblLeftoverResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblLeftoverResult->Location = System::Drawing::Point(313, 230);
            this->lblLeftoverResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblLeftoverResult->Name = L"lblLeftoverResult";
            this->lblLeftoverResult->Size = System::Drawing::Size(14, 17);
            this->lblLeftoverResult->TabIndex = 14;
            this->lblLeftoverResult->Text = L"-";
            // 
            // lblLeftover
            // 
            this->lblLeftover->AutoSize = true;
            this->lblLeftover->Location = System::Drawing::Point(20, 230);
            this->lblLeftover->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblLeftover->Name = L"lblLeftover";
            this->lblLeftover->Size = System::Drawing::Size(206, 16);
            this->lblLeftover->TabIndex = 13;
            this->lblLeftover->Text = L"5. Залишки та втрати в грошах:";
            // 
            // rbBuyByM2
            // 
            this->rbBuyByM2->AutoSize = true;
            this->rbBuyByM2->Location = System::Drawing::Point(183, 155);
            this->rbBuyByM2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->rbBuyByM2->Name = L"rbBuyByM2";
            this->rbBuyByM2->Size = System::Drawing::Size(158, 20);
            this->rbBuyByM2->TabIndex = 12;
            this->rbBuyByM2->Text = L"Продається по м.кв.";
            this->rbBuyByM2->UseVisualStyleBackColor = true;
            // 
            // rbBuyByPiece
            // 
            this->rbBuyByPiece->AutoSize = true;
            this->rbBuyByPiece->Checked = true;
            this->rbBuyByPiece->Location = System::Drawing::Point(24, 155);
            this->rbBuyByPiece->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->rbBuyByPiece->Name = L"rbBuyByPiece";
            this->rbBuyByPiece->Size = System::Drawing::Size(120, 20);
            this->rbBuyByPiece->TabIndex = 11;
            this->rbBuyByPiece->TabStop = true;
            this->rbBuyByPiece->Text = L"Купівля по-шт.";
            this->rbBuyByPiece->UseVisualStyleBackColor = true;
            // 
            // lblCostResult
            // 
            this->lblCostResult->AutoSize = true;
            this->lblCostResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblCostResult->Location = System::Drawing::Point(313, 194);
            this->lblCostResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblCostResult->Name = L"lblCostResult";
            this->lblCostResult->Size = System::Drawing::Size(14, 17);
            this->lblCostResult->TabIndex = 10;
            this->lblCostResult->Text = L"-";
            // 
            // lblCost
            // 
            this->lblCost->AutoSize = true;
            this->lblCost->Location = System::Drawing::Point(20, 194);
            this->lblCost->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblCost->Name = L"lblCost";
            this->lblCost->Size = System::Drawing::Size(167, 16);
            this->lblCost->TabIndex = 9;
            this->lblCost->Text = L"4. Розрахувати вартість:";
            // 
            // lblTilesForWallResult
            // 
            this->lblTilesForWallResult->AutoSize = true;
            this->lblTilesForWallResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->lblTilesForWallResult->Location = System::Drawing::Point(313, 118);
            this->lblTilesForWallResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblTilesForWallResult->Name = L"lblTilesForWallResult";
            this->lblTilesForWallResult->Size = System::Drawing::Size(14, 17);
            this->lblTilesForWallResult->TabIndex = 8;
            this->lblTilesForWallResult->Text = L"-";
            // 
            // lblTilesForWall
            // 
            this->lblTilesForWall->AutoSize = true;
            this->lblTilesForWall->Location = System::Drawing::Point(20, 118);
            this->lblTilesForWall->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblTilesForWall->Name = L"lblTilesForWall";
            this->lblTilesForWall->Size = System::Drawing::Size(167, 16);
            this->lblTilesForWall->TabIndex = 7;
            this->lblTilesForWall->Text = L"3. К-сть плиток для стіни:";
            // 
            // txtWallHeight
            // 
            this->txtWallHeight->Location = System::Drawing::Point(317, 69);
            this->txtWallHeight->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->txtWallHeight->Name = L"txtWallHeight";
            this->txtWallHeight->Size = System::Drawing::Size(99, 22);
            this->txtWallHeight->TabIndex = 6;
            // 
            // lblWallHeight
            // 
            this->lblWallHeight->AutoSize = true;
            this->lblWallHeight->Location = System::Drawing::Point(205, 73);
            this->lblWallHeight->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblWallHeight->Name = L"lblWallHeight";
            this->lblWallHeight->Size = System::Drawing::Size(93, 16);
            this->lblWallHeight->TabIndex = 5;
            this->lblWallHeight->Text = L"Висота стіни:";
            // 
            // txtWallWidth
            // 
            this->txtWallWidth->Location = System::Drawing::Point(97, 69);
            this->txtWallWidth->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->txtWallWidth->Name = L"txtWallWidth";
            this->txtWallWidth->Size = System::Drawing::Size(99, 22);
            this->txtWallWidth->TabIndex = 4;
            // 
            // lblWallWidth
            // 
            this->lblWallWidth->AutoSize = true;
            this->lblWallWidth->Location = System::Drawing::Point(20, 73);
            this->lblWallWidth->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblWallWidth->Name = L"lblWallWidth";
            this->lblWallWidth->Size = System::Drawing::Size(61, 16);
            this->lblWallWidth->TabIndex = 3;
            this->lblWallWidth->Text = L"Ширина:";
            // 
            // lblTilesPerM2Result
            // 
            this->lblTilesPerM2Result->AutoSize = true;
            this->lblTilesPerM2Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->lblTilesPerM2Result->Location = System::Drawing::Point(313, 34);
            this->lblTilesPerM2Result->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblTilesPerM2Result->Name = L"lblTilesPerM2Result";
            this->lblTilesPerM2Result->Size = System::Drawing::Size(14, 17);
            this->lblTilesPerM2Result->TabIndex = 2;
            this->lblTilesPerM2Result->Text = L"-";
            // 
            // lblTilesPerM2
            // 
            this->lblTilesPerM2->AutoSize = true;
            this->lblTilesPerM2->Location = System::Drawing::Point(20, 34);
            this->lblTilesPerM2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblTilesPerM2->Name = L"lblTilesPerM2";
            this->lblTilesPerM2->Size = System::Drawing::Size(159, 16);
            this->lblTilesPerM2->TabIndex = 1;
            this->lblTilesPerM2->Text = L"2. К-сть плиток в 1 м.кв.:";
            // 
            // btnCalculate
            // 
            this->btnCalculate->Location = System::Drawing::Point(665, 34);
            this->btnCalculate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->btnCalculate->Name = L"btnCalculate";
            this->btnCalculate->Size = System::Drawing::Size(155, 69);
            this->btnCalculate->TabIndex = 0;
            this->btnCalculate->Text = L"Розрахувати";
            this->btnCalculate->UseVisualStyleBackColor = true;
            this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(870, 28);
            this->menuStrip1->TabIndex = 4;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->saveToolStripMenuItem,
                    this->openToolStripMenuItem
            });
            this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
            this->fileToolStripMenuItem->Size = System::Drawing::Size(59, 24);
            this->fileToolStripMenuItem->Text = L"Файл";
            // 
            // saveToolStripMenuItem
            // 
            this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
            this->saveToolStripMenuItem->Size = System::Drawing::Size(155, 26);
            this->saveToolStripMenuItem->Text = L"Зберегти";
            this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
            // 
            // openToolStripMenuItem
            // 
            this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
            this->openToolStripMenuItem->Size = System::Drawing::Size(155, 26);
            this->openToolStripMenuItem->Text = L"Відкрити";
            this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::RoyalBlue;
            this->ClientSize = System::Drawing::Size(870, 690);
            this->Controls->Add(this->gbCalculations);
            this->Controls->Add(this->btnSort);
            this->Controls->Add(this->gbAddTile);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->Name = L"MyForm";
            this->Text = L"KROOP - Розрахунок плитки";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->gbAddTile->ResumeLayout(false);
            this->gbAddTile->PerformLayout();
            this->gbCalculations->ResumeLayout(false);
            this->gbCalculations->PerformLayout();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        // Функція для оновлення даних у таблиці (DataGridView)
        void RefreshGrid()
        {
            dataGridView1->DataSource = nullptr;
            // Створюємо тимчасовий список для прив'язки, щоб DataGridView оновився
            BindingSource^ bs = gcnew BindingSource();
            bs->DataSource = tiles;
            dataGridView1->DataSource = bs;
            dataGridView1->Columns["Width"]->HeaderText = "Ширина, м";
            dataGridView1->Columns["Height"]->HeaderText = "Висота, м";
            dataGridView1->Columns["Name"]->HeaderText = "Найменування";
            dataGridView1->Columns["PricePerM2"]->HeaderText = "Ціна за м.кв.";
            dataGridView1->Refresh();
        }

        // Обробник натискання на кнопку "Додати"
        System::Void btnAddTile_Click(System::Object^ sender, System::EventArgs^ e)
        {
            try
            {
                String^ name = txtName->Text;
                // Заміна коми на крапку для коректної конвертації
                double width = Convert::ToDouble(txtWidth->Text->Replace(",", "."));
                double height = Convert::ToDouble(txtHeight->Text->Replace(",", "."));
                double price = Convert::ToDouble(txtPrice->Text->Replace(",", "."));

                if (String::IsNullOrWhiteSpace(name)) {
                    MessageBox::Show("Назва не може бути порожньою.", "Помилка");
                    return;
                }
                if (width <= 0 || height <= 0 || price <= 0) {
                    MessageBox::Show("Ширина, висота та ціна повинні бути додатними числами.", "Помилка");
                    return;
                }

                tiles->Add(gcnew Tile(name, width, height, price));
                RefreshGrid();
                // Очищення полів вводу
                txtName->Clear();
                txtWidth->Clear();
                txtHeight->Clear();
                txtPrice->Clear();
            }
            catch (FormatException^)
            {
                MessageBox::Show("Будь ласка, введіть коректні числові дані.", "Помилка формату");
            }
        }

        // --- Завдання 1: Швидке сортування ---
        void QuickSort(List<Tile^>^ list, int low, int high)
        {
            if (low < high)
            {
                int pi = Partition(list, low, high);
                QuickSort(list, low, pi - 1);
                QuickSort(list, pi + 1, high);
            }
        }

        int Partition(List<Tile^>^ list, int low, int high)
        {
            double pivot = list[high]->GetPricePerPiece(); // Опорний елемент
            int i = (low - 1);

            for (int j = low; j <= high - 1; j++)
            {
                if (list[j]->GetPricePerPiece() < pivot)
                {
                    i++;
                    Tile^ temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
            Tile^ temp = list[i + 1];
            list[i + 1] = list[high];
            list[high] = temp;

            return (i + 1);
        }

        // Обробник натискання на кнопку "Сортувати"
        System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (tiles->Count > 1)
            {
                QuickSort(tiles, 0, tiles->Count - 1);
                RefreshGrid();
                MessageBox::Show("Плитки відсортовано за ціною за штуку (від найдешевшої до найдорожчої).", "Сортування завершено");
            }
            else {
                MessageBox::Show("Недостатньо елементів для сортування.", "Інформація");
            }
        }

        // --- Завдання 2-5: Розрахунки ---
        // Обробник натискання на кнопку "Розрахувати"
        System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (dataGridView1->CurrentRow == nullptr)
            {
                MessageBox::Show("Будь ласка, оберіть плитку з таблиці.", "Помилка");
                return;
            }

            try
            {
                // Отримуємо обрану плитку з поточного рядка
                Tile^ selectedTile = (Tile^)dataGridView1->CurrentRow->DataBoundItem;

                // --- 2. Кількість плиток в 1 м.кв. ---
                double tileArea = selectedTile->GetArea();
                if (tileArea > 0)
                {
                    // Заокруглення завжди в більшу сторону
                    double tilesInM2 = Math::Ceiling(1.0 / tileArea);
                    lblTilesPerM2Result->Text = tilesInM2.ToString();
                }

                // --- Розрахунки для стіни ---
                double wallWidth = Convert::ToDouble(txtWallWidth->Text->Replace(",", "."));
                double wallHeight = Convert::ToDouble(txtWallHeight->Text->Replace(",", "."));

                if (wallWidth <= 0 || wallHeight <= 0)
                {
                    MessageBox::Show("Розміри стіни мають бути додатними.", "Помилка");
                    return;
                }

                double wallArea = wallWidth * wallHeight;

                // 3. Кількість плиток для стіни
                long long tilesNeededHorizontally = (long long)Math::Ceiling(wallWidth / selectedTile->Width);
                long long tilesNeededVertically = (long long)Math::Ceiling(wallHeight / selectedTile->Height);
                long long totalTilesNeeded = tilesNeededHorizontally * tilesNeededVertically;
                lblTilesForWallResult->Text = totalTilesNeeded.ToString() + " шт.";

                // 4. Вартість плиток
                if (rbBuyByPiece->Checked) // a. Купівля по-штучно
                {
                    double totalCost = totalTilesNeeded * selectedTile->GetPricePerPiece();
                    lblCostResult->Text = String::Format("{0:F2} грн", totalCost);
                    lblLeftoverResult->Text = "Немає (купівля по-штучно)";
                }
                else // б. Купівля по м.кв.
                {
                    double totalTileAreaToBuy = totalTilesNeeded * tileArea;
                    double totalCost = totalTileAreaToBuy * selectedTile->PricePerM2;
                    lblCostResult->Text = String::Format("{0:F2} грн", totalCost);

                    // 5. Залишки та втрати
                    double leftoverArea = totalTileAreaToBuy - wallArea;
                    double moneyLoss = leftoverArea * selectedTile->PricePerM2;
                    lblLeftoverResult->Text = String::Format("Площа: {0:F3} м.кв., Втрати: {1:F2} грн", leftoverArea, moneyLoss);
                }
            }
            catch (FormatException^)
            {
                MessageBox::Show("Будь ласка, введіть коректні розміри стіни.", "Помилка формату");
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Сталася помилка: " + ex->Message, "Загальна помилка");
            }
        }

        // --- Робота з файлами ---
        System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            SaveFileDialog^ sfd = gcnew SaveFileDialog();
            sfd->Filter = "Текстові файли|*.txt|Всі файли|*.*";
            sfd->Title = "Зберегти список плиток";
            if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                StreamWriter^ sw = gcnew StreamWriter(sfd->FileName);
                sw->WriteLine(tiles->Count); 
                for each (Tile ^ tile in tiles)
                {
                    tile->SaveToFile(sw);
                }
                sw->Close();
                MessageBox::Show("Дані успішно збережено.", "Збереження");
            }
        }

        System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            OpenFileDialog^ ofd = gcnew OpenFileDialog();
            ofd->Filter = "Текстові файли|*.txt|Всі файли|*.*";
            ofd->Title = "Відкрити список плиток";
            if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                StreamReader^ sr = gcnew StreamReader(ofd->FileName);
                try {
                    int count = Convert::ToInt32(sr->ReadLine());
                    tiles->Clear();
                    for (int i = 0; i < count; i++)
                    {
                        Tile^ newTile = gcnew Tile();
                        newTile->LoadFromFile(sr);
                        tiles->Add(newTile);
                    }
                    RefreshGrid();
                    MessageBox::Show("Дані успішно завантажено.", "Завантаження");
                }
                catch (Exception^ ex) {
                    MessageBox::Show("Не вдалося прочитати файл. Можливо, він пошкоджений або має невірний формат. \n" + ex->Message, "Помилка читання файлу");
                }
                finally {
                    if (sr != nullptr) sr->Close();
                }
            }
        }
    };
}