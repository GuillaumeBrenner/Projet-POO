#pragma once

#include "ServiceClient.h"

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{

		enum class EditionMode {
			NO_MODE,

			CREATE,
			UPDATE,
			DELETE
		};

	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPersonnel;
	protected:

	private: System::Windows::Forms::Button^ btnClient;
	private: System::Windows::Forms::Button^ btnProduit;
	private: System::Windows::Forms::Button^ btnCommande;
	private: System::Windows::Forms::Button^ btnStats;
	protected:




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ saveButton;

	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::Button^ modifyButton;
	private: System::Windows::Forms::Button^ newButton;



	private: System::Windows::Forms::Button^ firstButton;


















	private: System::Windows::Forms::Button^ endButton;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::Button^ previousButton;













































private: System::Windows::Forms::Button^ btnPanier;











private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ btnCa;
private: System::Windows::Forms::Panel^ statsForm;





private: System::Windows::Forms::Button^ btnSimul;

private: System::Windows::Forms::Button^ btnValAchat;
private: System::Windows::Forms::Button^ btnValCom;


private: System::Windows::Forms::Button^ btnMoinsVendus;

private: System::Windows::Forms::Button^ btnPlusVendus;

private: System::Windows::Forms::Button^ btnMt;

private: System::Windows::Forms::Button^ btnSouseuil;
private: System::Windows::Forms::Panel^ produitForm;

private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Panel^ personnelForm;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ clientForm;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Panel^ commandeForm;

private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label26;









	   // Le service qui gere les donnees des personnes
	private: Services::ServiceClient^ gestionClients;
		   // Un cache memoire sur la table des personnes
	private: Data::DataSet^ dsClient;
		   // Un cache memoire sur la table des adresses
	private: Data::DataSet^ dsAdresse;
		   // L'index courant de la personne affichee
	private: int index;
		   // Le mode 
	private: EditionMode mode;
	private: int rowsCount;
	private: int id;



























	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnPersonnel = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->btnProduit = (gcnew System::Windows::Forms::Button());
			this->btnCommande = (gcnew System::Windows::Forms::Button());
			this->btnStats = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->statsForm = (gcnew System::Windows::Forms::Panel());
			this->btnSimul = (gcnew System::Windows::Forms::Button());
			this->btnValAchat = (gcnew System::Windows::Forms::Button());
			this->btnValCom = (gcnew System::Windows::Forms::Button());
			this->btnMoinsVendus = (gcnew System::Windows::Forms::Button());
			this->btnPlusVendus = (gcnew System::Windows::Forms::Button());
			this->btnSouseuil = (gcnew System::Windows::Forms::Button());
			this->btnPanier = (gcnew System::Windows::Forms::Button());
			this->btnCa = (gcnew System::Windows::Forms::Button());
			this->btnMt = (gcnew System::Windows::Forms::Button());
			this->commandeForm = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->personnelForm = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->produitForm = (gcnew System::Windows::Forms::Panel());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->modifyButton = (gcnew System::Windows::Forms::Button());
			this->newButton = (gcnew System::Windows::Forms::Button());
			this->endButton = (gcnew System::Windows::Forms::Button());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->previousButton = (gcnew System::Windows::Forms::Button());
			this->firstButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->clientForm = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->statsForm->SuspendLayout();
			this->commandeForm->SuspendLayout();
			this->personnelForm->SuspendLayout();
			this->produitForm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->clientForm->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnPersonnel
			// 
			this->btnPersonnel->Location = System::Drawing::Point(17, 391);
			this->btnPersonnel->Name = L"btnPersonnel";
			this->btnPersonnel->Size = System::Drawing::Size(154, 46);
			this->btnPersonnel->TabIndex = 0;
			this->btnPersonnel->Text = L"Personnel";
			this->btnPersonnel->UseVisualStyleBackColor = true;
			this->btnPersonnel->Click += gcnew System::EventHandler(this, &Main::btnPersonnel_Click);
			// 
			// btnClient
			// 
			this->btnClient->Location = System::Drawing::Point(17, 171);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Size = System::Drawing::Size(154, 46);
			this->btnClient->TabIndex = 1;
			this->btnClient->Text = L"Client";
			this->btnClient->UseVisualStyleBackColor = true;
			this->btnClient->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// btnProduit
			// 
			this->btnProduit->Location = System::Drawing::Point(17, 239);
			this->btnProduit->Name = L"btnProduit";
			this->btnProduit->Size = System::Drawing::Size(154, 46);
			this->btnProduit->TabIndex = 2;
			this->btnProduit->Text = L"Produit";
			this->btnProduit->UseVisualStyleBackColor = true;
			this->btnProduit->Click += gcnew System::EventHandler(this, &Main::btnProduit_Click);
			// 
			// btnCommande
			// 
			this->btnCommande->Location = System::Drawing::Point(17, 316);
			this->btnCommande->Name = L"btnCommande";
			this->btnCommande->Size = System::Drawing::Size(154, 46);
			this->btnCommande->TabIndex = 3;
			this->btnCommande->Text = L"Commande";
			this->btnCommande->UseVisualStyleBackColor = true;
			this->btnCommande->Click += gcnew System::EventHandler(this, &Main::btnCommande_Click);
			// 
			// btnStats
			// 
			this->btnStats->Location = System::Drawing::Point(17, 106);
			this->btnStats->Name = L"btnStats";
			this->btnStats->Size = System::Drawing::Size(154, 46);
			this->btnStats->TabIndex = 4;
			this->btnStats->Text = L"Accueil";
			this->btnStats->UseVisualStyleBackColor = true;
			this->btnStats->Click += gcnew System::EventHandler(this, &Main::btnStats_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Controls->Add(this->btnStats);
			this->panel1->Controls->Add(this->btnPersonnel);
			this->panel1->Controls->Add(this->btnCommande);
			this->panel1->Controls->Add(this->btnClient);
			this->panel1->Controls->Add(this->btnProduit);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 578);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel2->Controls->Add(this->statsForm);
			this->panel2->Controls->Add(this->commandeForm);
			this->panel2->Controls->Add(this->personnelForm);
			this->panel2->Controls->Add(this->produitForm);
			this->panel2->Controls->Add(this->saveButton);
			this->panel2->Controls->Add(this->deleteButton);
			this->panel2->Controls->Add(this->modifyButton);
			this->panel2->Controls->Add(this->newButton);
			this->panel2->Controls->Add(this->endButton);
			this->panel2->Controls->Add(this->nextButton);
			this->panel2->Controls->Add(this->previousButton);
			this->panel2->Controls->Add(this->firstButton);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->clientForm);
			this->panel2->Location = System::Drawing::Point(218, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1288, 578);
			this->panel2->TabIndex = 6;
			// 
			// statsForm
			// 
			this->statsForm->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->statsForm->Controls->Add(this->btnSimul);
			this->statsForm->Controls->Add(this->btnValAchat);
			this->statsForm->Controls->Add(this->btnValCom);
			this->statsForm->Controls->Add(this->btnMoinsVendus);
			this->statsForm->Controls->Add(this->btnPlusVendus);
			this->statsForm->Controls->Add(this->btnSouseuil);
			this->statsForm->Controls->Add(this->btnPanier);
			this->statsForm->Controls->Add(this->btnCa);
			this->statsForm->Controls->Add(this->btnMt);
			this->statsForm->Location = System::Drawing::Point(15, 21);
			this->statsForm->Name = L"statsForm";
			this->statsForm->Size = System::Drawing::Size(410, 547);
			this->statsForm->TabIndex = 40;
			this->statsForm->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Main::statsForm_Paint);
			// 
			// btnSimul
			// 
			this->btnSimul->BackColor = System::Drawing::Color::White;
			this->btnSimul->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSimul->Location = System::Drawing::Point(4, 491);
			this->btnSimul->Margin = System::Windows::Forms::Padding(4);
			this->btnSimul->Name = L"btnSimul";
			this->btnSimul->Size = System::Drawing::Size(402, 39);
			this->btnSimul->TabIndex = 8;
			this->btnSimul->Text = L"Simulation";
			this->btnSimul->UseVisualStyleBackColor = false;
			// 
			// btnValAchat
			// 
			this->btnValAchat->BackColor = System::Drawing::Color::White;
			this->btnValAchat->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValAchat->Location = System::Drawing::Point(3, 371);
			this->btnValAchat->Margin = System::Windows::Forms::Padding(4);
			this->btnValAchat->Name = L"btnValAchat";
			this->btnValAchat->Size = System::Drawing::Size(403, 39);
			this->btnValAchat->TabIndex = 7;
			this->btnValAchat->Text = L"Valeur d\'achat";
			this->btnValAchat->UseVisualStyleBackColor = false;
			// 
			// btnValCom
			// 
			this->btnValCom->BackColor = System::Drawing::Color::White;
			this->btnValCom->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValCom->Location = System::Drawing::Point(4, 433);
			this->btnValCom->Margin = System::Windows::Forms::Padding(4);
			this->btnValCom->Name = L"btnValCom";
			this->btnValCom->Size = System::Drawing::Size(402, 39);
			this->btnValCom->TabIndex = 6;
			this->btnValCom->Text = L"Valeur Commercial";
			this->btnValCom->UseVisualStyleBackColor = false;
			// 
			// btnMoinsVendus
			// 
			this->btnMoinsVendus->BackColor = System::Drawing::Color::White;
			this->btnMoinsVendus->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMoinsVendus->Location = System::Drawing::Point(4, 306);
			this->btnMoinsVendus->Margin = System::Windows::Forms::Padding(4);
			this->btnMoinsVendus->Name = L"btnMoinsVendus";
			this->btnMoinsVendus->Size = System::Drawing::Size(402, 39);
			this->btnMoinsVendus->TabIndex = 5;
			this->btnMoinsVendus->Text = L"10 Moins vendus";
			this->btnMoinsVendus->UseVisualStyleBackColor = false;
			// 
			// btnPlusVendus
			// 
			this->btnPlusVendus->BackColor = System::Drawing::Color::White;
			this->btnPlusVendus->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusVendus->Location = System::Drawing::Point(3, 248);
			this->btnPlusVendus->Margin = System::Windows::Forms::Padding(4);
			this->btnPlusVendus->Name = L"btnPlusVendus";
			this->btnPlusVendus->Size = System::Drawing::Size(403, 39);
			this->btnPlusVendus->TabIndex = 4;
			this->btnPlusVendus->Text = L"10 Plus vendus";
			this->btnPlusVendus->UseVisualStyleBackColor = false;
			this->btnPlusVendus->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// btnSouseuil
			// 
			this->btnSouseuil->BackColor = System::Drawing::Color::White;
			this->btnSouseuil->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSouseuil->Location = System::Drawing::Point(3, 124);
			this->btnSouseuil->Margin = System::Windows::Forms::Padding(4);
			this->btnSouseuil->Name = L"btnSouseuil";
			this->btnSouseuil->Size = System::Drawing::Size(403, 39);
			this->btnSouseuil->TabIndex = 2;
			this->btnSouseuil->Text = L"Produit Sous Seuil";
			this->btnSouseuil->UseVisualStyleBackColor = false;
			this->btnSouseuil->Click += gcnew System::EventHandler(this, &Main::btnSouseuil_Click);
			// 
			// btnPanier
			// 
			this->btnPanier->BackColor = System::Drawing::Color::White;
			this->btnPanier->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPanier->Location = System::Drawing::Point(3, 4);
			this->btnPanier->Margin = System::Windows::Forms::Padding(4);
			this->btnPanier->Name = L"btnPanier";
			this->btnPanier->Size = System::Drawing::Size(403, 39);
			this->btnPanier->TabIndex = 0;
			this->btnPanier->Text = L"Panier moyen";
			this->btnPanier->UseVisualStyleBackColor = false;
			// 
			// btnCa
			// 
			this->btnCa->BackColor = System::Drawing::Color::White;
			this->btnCa->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCa->Location = System::Drawing::Point(3, 64);
			this->btnCa->Margin = System::Windows::Forms::Padding(4);
			this->btnCa->Name = L"btnCa";
			this->btnCa->Size = System::Drawing::Size(403, 39);
			this->btnCa->TabIndex = 1;
			this->btnCa->Text = L"Chiffre d\'affaire";
			this->btnCa->UseVisualStyleBackColor = false;
			// 
			// btnMt
			// 
			this->btnMt->BackColor = System::Drawing::Color::White;
			this->btnMt->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMt->Location = System::Drawing::Point(3, 188);
			this->btnMt->Margin = System::Windows::Forms::Padding(4);
			this->btnMt->Name = L"btnMt";
			this->btnMt->Size = System::Drawing::Size(403, 39);
			this->btnMt->TabIndex = 3;
			this->btnMt->Text = L"Montant total";
			this->btnMt->UseVisualStyleBackColor = false;
			// 
			// commandeForm
			// 
			this->commandeForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->commandeForm->Controls->Add(this->label25);
			this->commandeForm->Controls->Add(this->textBox25);
			this->commandeForm->Controls->Add(this->textBox26);
			this->commandeForm->Controls->Add(this->label26);
			this->commandeForm->Controls->Add(this->label24);
			this->commandeForm->Controls->Add(this->textBox24);
			this->commandeForm->Controls->Add(this->textBox1);
			this->commandeForm->Controls->Add(this->textBox2);
			this->commandeForm->Controls->Add(this->textBox3);
			this->commandeForm->Controls->Add(this->textBox4);
			this->commandeForm->Controls->Add(this->label1);
			this->commandeForm->Controls->Add(this->label2);
			this->commandeForm->Controls->Add(this->label3);
			this->commandeForm->Controls->Add(this->label4);
			this->commandeForm->Controls->Add(this->textBox5);
			this->commandeForm->Controls->Add(this->label5);
			this->commandeForm->Controls->Add(this->textBox6);
			this->commandeForm->Controls->Add(this->label6);
			this->commandeForm->Location = System::Drawing::Point(15, 24);
			this->commandeForm->Name = L"commandeForm";
			this->commandeForm->Size = System::Drawing::Size(410, 386);
			this->commandeForm->TabIndex = 42;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(223, 292);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(129, 25);
			this->label25->TabIndex = 29;
			this->label25->Text = L"Montant TVA";
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(225, 317);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(173, 38);
			this->textBox25->TabIndex = 28;
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->Location = System::Drawing::Point(15, 317);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(199, 38);
			this->textBox26->TabIndex = 27;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(13, 289);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(115, 25);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Montant HT";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(223, 213);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(62, 25);
			this->label24->TabIndex = 25;
			this->label24->Text = L"Client";
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(225, 239);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(173, 38);
			this->textBox24->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(225, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 38);
			this->textBox1->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(225, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 38);
			this->textBox2->TabIndex = 23;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(15, 172);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 38);
			this->textBox3->TabIndex = 21;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(15, 241);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 38);
			this->textBox4->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 25);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Date Paiement";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 25);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Total articles";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(220, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Moyen Paiement";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(220, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 25);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Date Livraison";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(15, 104);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 38);
			this->textBox5->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 29);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Date Emission";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(15, 33);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(383, 38);
			this->textBox6->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(10, 1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 29);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Référence";
			// 
			// personnelForm
			// 
			this->personnelForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->personnelForm->Controls->Add(this->textBox7);
			this->personnelForm->Controls->Add(this->textBox8);
			this->personnelForm->Controls->Add(this->textBox9);
			this->personnelForm->Controls->Add(this->label7);
			this->personnelForm->Controls->Add(this->label9);
			this->personnelForm->Controls->Add(this->label10);
			this->personnelForm->Controls->Add(this->textBox11);
			this->personnelForm->Controls->Add(this->label11);
			this->personnelForm->Controls->Add(this->textBox12);
			this->personnelForm->Controls->Add(this->label12);
			this->personnelForm->Location = System::Drawing::Point(15, 21);
			this->personnelForm->Name = L"personnelForm";
			this->personnelForm->Size = System::Drawing::Size(410, 389);
			this->personnelForm->TabIndex = 42;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(15, 186);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(375, 38);
			this->textBox7->TabIndex = 22;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(15, 340);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(375, 38);
			this->textBox8->TabIndex = 23;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(15, 263);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(375, 38);
			this->textBox9->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(10, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Supérieur";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(15, 312);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Adresse";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(10, 158);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 25);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Date Embauche";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(15, 111);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(375, 38);
			this->textBox11->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(10, 79);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 29);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Prénom";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(15, 35);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(375, 38);
			this->textBox12->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(10, 3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 29);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Nom";
			// 
			// produitForm
			// 
			this->produitForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->produitForm->Controls->Add(this->textBox17);
			this->produitForm->Controls->Add(this->textBox18);
			this->produitForm->Controls->Add(this->textBox13);
			this->produitForm->Controls->Add(this->textBox14);
			this->produitForm->Controls->Add(this->label13);
			this->produitForm->Controls->Add(this->label14);
			this->produitForm->Controls->Add(this->label15);
			this->produitForm->Controls->Add(this->label16);
			this->produitForm->Controls->Add(this->textBox15);
			this->produitForm->Controls->Add(this->label17);
			this->produitForm->Controls->Add(this->textBox16);
			this->produitForm->Controls->Add(this->label18);
			this->produitForm->Location = System::Drawing::Point(15, 21);
			this->produitForm->Name = L"produitForm";
			this->produitForm->Size = System::Drawing::Size(410, 381);
			this->produitForm->TabIndex = 41;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(15, 207);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(199, 38);
			this->textBox17->TabIndex = 22;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(238, 207);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(160, 38);
			this->textBox18->TabIndex = 23;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(15, 294);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(204, 38);
			this->textBox13->TabIndex = 21;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Main::textBox13_TextChanged);
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(238, 294);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(160, 38);
			this->textBox14->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(15, 256);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 25);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Taux TVA";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(242, 256);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 25);
			this->label14->TabIndex = 18;
			this->label14->Text = L"Catégorie";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(242, 179);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 25);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Seuil ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(10, 179);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(141, 25);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Quantité Stock";
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(15, 130);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(383, 38);
			this->textBox15->TabIndex = 15;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(10, 98);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(93, 29);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Prix HT";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(15, 46);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(383, 38);
			this->textBox16->TabIndex = 14;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(10, 14);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(141, 29);
			this->label18->TabIndex = 12;
			this->label18->Text = L"Désignation";
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(123, 453);
			this->saveButton->Margin = System::Windows::Forms::Padding(4);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(302, 106);
			this->saveButton->TabIndex = 33;
			this->saveButton->Text = L"Enregistrer";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Main::saveButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(15, 531);
			this->deleteButton->Margin = System::Windows::Forms::Padding(4);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(100, 28);
			this->deleteButton->TabIndex = 32;
			this->deleteButton->Text = L"Supprimer";
			this->deleteButton->UseVisualStyleBackColor = true;
			// 
			// modifyButton
			// 
			this->modifyButton->Location = System::Drawing::Point(15, 495);
			this->modifyButton->Margin = System::Windows::Forms::Padding(4);
			this->modifyButton->Name = L"modifyButton";
			this->modifyButton->Size = System::Drawing::Size(100, 28);
			this->modifyButton->TabIndex = 31;
			this->modifyButton->Text = L"Modifier";
			this->modifyButton->UseVisualStyleBackColor = true;
			// 
			// newButton
			// 
			this->newButton->Location = System::Drawing::Point(15, 459);
			this->newButton->Margin = System::Windows::Forms::Padding(4);
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(100, 28);
			this->newButton->TabIndex = 30;
			this->newButton->Text = L"Ajouter";
			this->newButton->UseVisualStyleBackColor = true;
			this->newButton->Click += gcnew System::EventHandler(this, &Main::newButton_Click);
			// 
			// endButton
			// 
			this->endButton->Location = System::Drawing::Point(325, 417);
			this->endButton->Margin = System::Windows::Forms::Padding(4);
			this->endButton->Name = L"endButton";
			this->endButton->Size = System::Drawing::Size(100, 28);
			this->endButton->TabIndex = 29;
			this->endButton->Text = L">>";
			this->endButton->UseVisualStyleBackColor = true;
			// 
			// nextButton
			// 
			this->nextButton->Location = System::Drawing::Point(217, 417);
			this->nextButton->Margin = System::Windows::Forms::Padding(4);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(100, 28);
			this->nextButton->TabIndex = 27;
			this->nextButton->Text = L">";
			this->nextButton->UseVisualStyleBackColor = true;
			// 
			// previousButton
			// 
			this->previousButton->Location = System::Drawing::Point(109, 417);
			this->previousButton->Margin = System::Windows::Forms::Padding(4);
			this->previousButton->Name = L"previousButton";
			this->previousButton->Size = System::Drawing::Size(100, 28);
			this->previousButton->TabIndex = 26;
			this->previousButton->Text = L"<";
			this->previousButton->UseVisualStyleBackColor = true;
			// 
			// firstButton
			// 
			this->firstButton->Location = System::Drawing::Point(15, 417);
			this->firstButton->Margin = System::Windows::Forms::Padding(4);
			this->firstButton->Name = L"firstButton";
			this->firstButton->Size = System::Drawing::Size(85, 28);
			this->firstButton->TabIndex = 25;
			this->firstButton->Text = L"<<";
			this->firstButton->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(445, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(817, 547);
			this->dataGridView1->TabIndex = 39;
			// 
			// clientForm
			// 
			this->clientForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->clientForm->Controls->Add(this->textBox10);
			this->clientForm->Controls->Add(this->textBox19);
			this->clientForm->Controls->Add(this->label8);
			this->clientForm->Controls->Add(this->label19);
			this->clientForm->Controls->Add(this->textBox20);
			this->clientForm->Controls->Add(this->label20);
			this->clientForm->Controls->Add(this->label21);
			this->clientForm->Controls->Add(this->textBox21);
			this->clientForm->Controls->Add(this->label22);
			this->clientForm->Controls->Add(this->label23);
			this->clientForm->Controls->Add(this->textBox22);
			this->clientForm->Controls->Add(this->textBox23);
			this->clientForm->Location = System::Drawing::Point(15, 21);
			this->clientForm->Name = L"clientForm";
			this->clientForm->Size = System::Drawing::Size(410, 381);
			this->clientForm->TabIndex = 43;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(7, 281);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(199, 38);
			this->textBox10->TabIndex = 23;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(220, 281);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(184, 38);
			this->textBox19->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 253);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 25);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Adresse facturation";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(218, 253);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(161, 25);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Adresse livraison";
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(7, 198);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(199, 38);
			this->textBox20->TabIndex = 18;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(218, 170);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(135, 25);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Premier Achat";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(7, 170);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(150, 25);
			this->label21->TabIndex = 16;
			this->label21->Text = L"Date Naissance";
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(12, 118);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(392, 38);
			this->textBox21->TabIndex = 15;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(12, 89);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(98, 29);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Prénom";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(7, 15);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(65, 29);
			this->label23->TabIndex = 12;
			this->label23->Text = L"Nom";
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->Location = System::Drawing::Point(12, 47);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(392, 38);
			this->textBox22->TabIndex = 14;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(220, 198);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(184, 38);
			this->textBox23->TabIndex = 19;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1482, 619);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->statsForm->ResumeLayout(false);
			this->commandeForm->ResumeLayout(false);
			this->commandeForm->PerformLayout();
			this->personnelForm->ResumeLayout(false);
			this->personnelForm->PerformLayout();
			this->produitForm->ResumeLayout(false);
			this->produitForm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->clientForm->ResumeLayout(false);
			this->clientForm->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void newButton_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->clientForm->Visible = true;
	this->produitForm->Visible = false;
	this->personnelForm->Visible = false;
	this->statsForm->Visible = false;

	this->dataGridView1->Refresh();
	this->dsClient = this->gestionClients->listeClients("Rsl");
	this->dataGridView1->DataSource = this->dsClient;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button_s_seuil_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->personnelForm->Visible = true;
	this->commandeForm->Visible = false;
	this->clientForm->Visible = false;
	this->produitForm->Visible = false;
	this->statsForm->Visible = false;
}
private: System::Void btnProduit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->produitForm->Visible = true;
	this->clientForm->Visible = false;
	this->commandeForm->Visible = false;
	this->personnelForm->Visible = false;
	this->statsForm->Visible = false;
}
private: System::Void btnStats_Click(System::Object^ sender, System::EventArgs^ e) {
	this->statsForm->Visible = true;
	this->commandeForm->Visible = false;
	this->clientForm->Visible = false;
	this->personnelForm->Visible = false;
	this->produitForm->Visible = false;
}
private: System::Void statsForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->commandeForm->Visible = true;
	this->statsForm->Visible = false;
	this->clientForm->Visible = false;
	this->personnelForm->Visible = false;
	this->produitForm->Visible = false;
}
private: System::Void btnSouseuil_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
