#pragma once

#include "ServiceClient.h"
#include "ServiceProduit.h"
#include "ServiceCommande.h"
#include "ServicePersonnel.h"

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
private: System::Windows::Forms::TextBox^ tvaProduit;
private: System::Windows::Forms::TextBox^ categorie;



private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ prixHt_produit;

private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ designation;

private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ quantiteStock;
private: System::Windows::Forms::TextBox^ seuil;


private: System::Windows::Forms::Panel^ personnelForm;
private: System::Windows::Forms::TextBox^ dateEmbauche;
private: System::Windows::Forms::TextBox^ adressePersonnel;


private: System::Windows::Forms::TextBox^ superieur;

private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ prenomPersonnel;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ nomPersonnel;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ clientForm;
private: System::Windows::Forms::TextBox^ adresse_fact;
private: System::Windows::Forms::TextBox^ adresse_liv;


private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label19;


private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ prenomC_textBox;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ nomC_textbox;



private: System::Windows::Forms::Panel^ commandeForm;
private: System::Windows::Forms::TextBox^ dateLivr;
private: System::Windows::Forms::TextBox^ moyenPaiement;



private: System::Windows::Forms::TextBox^ datePaiement;
private: System::Windows::Forms::TextBox^ totalArticles;


private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ dateEmission;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ refCommande;


private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ clientCommande;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ montantTva;

private: System::Windows::Forms::TextBox^ montantHt;

private: System::Windows::Forms::Label^ label26;









	   // Le service qui gere les donnees des personnes
	private: Services::ServiceClient^ gestionClients;
	private: Services::ServiceProduit^ gestionProduits;
		   // Un cache memoire sur la table des personnes
	private: System::Data::DataSet^ dataset;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ deleteCommande_btn;

private: System::Windows::Forms::Button^ updateCommande_btn;


private: System::Windows::Forms::Button^ addCommande_btn;



private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ deleteProduit_btn;

private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ deletePersonnel_btn;

private: System::Windows::Forms::Button^ updatePersonnel_btn;

private: System::Windows::Forms::Button^ addPersonnel_btn;
private: System::Windows::Forms::Button^ updateProduit_btn;


private: System::Windows::Forms::Button^ addProduit_btn;

private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ deleteClient_btn;



private: System::Windows::Forms::Button^ updateClient_btn;

private: System::Windows::Forms::Button^ addClient_btn;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::DateTimePicker^ datePreAchat_box;

private: System::Windows::Forms::DateTimePicker^ dateNaiss_box;






























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
			this->clientForm = (gcnew System::Windows::Forms::Panel());
			this->datePreAchat_box = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateNaiss_box = (gcnew System::Windows::Forms::DateTimePicker());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->deleteClient_btn = (gcnew System::Windows::Forms::Button());
			this->updateClient_btn = (gcnew System::Windows::Forms::Button());
			this->addClient_btn = (gcnew System::Windows::Forms::Button());
			this->adresse_fact = (gcnew System::Windows::Forms::TextBox());
			this->adresse_liv = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->prenomC_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->nomC_textbox = (gcnew System::Windows::Forms::TextBox());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->deleteCommande_btn = (gcnew System::Windows::Forms::Button());
			this->updateCommande_btn = (gcnew System::Windows::Forms::Button());
			this->addCommande_btn = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->montantTva = (gcnew System::Windows::Forms::TextBox());
			this->montantHt = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->clientCommande = (gcnew System::Windows::Forms::TextBox());
			this->dateLivr = (gcnew System::Windows::Forms::TextBox());
			this->moyenPaiement = (gcnew System::Windows::Forms::TextBox());
			this->datePaiement = (gcnew System::Windows::Forms::TextBox());
			this->totalArticles = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateEmission = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->refCommande = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->personnelForm = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->deletePersonnel_btn = (gcnew System::Windows::Forms::Button());
			this->updatePersonnel_btn = (gcnew System::Windows::Forms::Button());
			this->addPersonnel_btn = (gcnew System::Windows::Forms::Button());
			this->dateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->adressePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->superieur = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->prenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->nomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->produitForm = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->deleteProduit_btn = (gcnew System::Windows::Forms::Button());
			this->updateProduit_btn = (gcnew System::Windows::Forms::Button());
			this->addProduit_btn = (gcnew System::Windows::Forms::Button());
			this->quantiteStock = (gcnew System::Windows::Forms::TextBox());
			this->seuil = (gcnew System::Windows::Forms::TextBox());
			this->tvaProduit = (gcnew System::Windows::Forms::TextBox());
			this->categorie = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->prixHt_produit = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->designation = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->clientForm->SuspendLayout();
			this->statsForm->SuspendLayout();
			this->commandeForm->SuspendLayout();
			this->personnelForm->SuspendLayout();
			this->produitForm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->panel2->Controls->Add(this->clientForm);
			this->panel2->Controls->Add(this->statsForm);
			this->panel2->Controls->Add(this->commandeForm);
			this->panel2->Controls->Add(this->personnelForm);
			this->panel2->Controls->Add(this->produitForm);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(218, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1471, 578);
			this->panel2->TabIndex = 6;
			// 
			// clientForm
			// 
			this->clientForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->clientForm->Controls->Add(this->datePreAchat_box);
			this->clientForm->Controls->Add(this->dateNaiss_box);
			this->clientForm->Controls->Add(this->button17);
			this->clientForm->Controls->Add(this->deleteClient_btn);
			this->clientForm->Controls->Add(this->updateClient_btn);
			this->clientForm->Controls->Add(this->addClient_btn);
			this->clientForm->Controls->Add(this->adresse_fact);
			this->clientForm->Controls->Add(this->adresse_liv);
			this->clientForm->Controls->Add(this->label8);
			this->clientForm->Controls->Add(this->label19);
			this->clientForm->Controls->Add(this->label20);
			this->clientForm->Controls->Add(this->label21);
			this->clientForm->Controls->Add(this->prenomC_textBox);
			this->clientForm->Controls->Add(this->label22);
			this->clientForm->Controls->Add(this->label23);
			this->clientForm->Controls->Add(this->nomC_textbox);
			this->clientForm->Location = System::Drawing::Point(15, 21);
			this->clientForm->Name = L"clientForm";
			this->clientForm->Size = System::Drawing::Size(410, 538);
			this->clientForm->TabIndex = 43;
			// 
			// datePreAchat_box
			// 
			this->datePreAchat_box->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->datePreAchat_box->CustomFormat = L"dd/MM/yyyy";
			this->datePreAchat_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->datePreAchat_box->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePreAchat_box->Location = System::Drawing::Point(220, 208);
			this->datePreAchat_box->MaxDate = System::DateTime(2022, 12, 3, 0, 0, 0, 0);
			this->datePreAchat_box->MinDate = System::DateTime(2017, 1, 1, 0, 0, 0, 0);
			this->datePreAchat_box->Name = L"datePreAchat_box";
			this->datePreAchat_box->Size = System::Drawing::Size(184, 34);
			this->datePreAchat_box->TabIndex = 47;
			this->datePreAchat_box->Value = System::DateTime(2022, 12, 3, 0, 0, 0, 0);
			// 
			// dateNaiss_box
			// 
			this->dateNaiss_box->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateNaiss_box->CustomFormat = L"dd/MM/yyyy";
			this->dateNaiss_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateNaiss_box->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateNaiss_box->Location = System::Drawing::Point(12, 208);
			this->dateNaiss_box->MaxDate = System::DateTime(2005, 1, 1, 0, 0, 0, 0);
			this->dateNaiss_box->MinDate = System::DateTime(1940, 1, 1, 0, 0, 0, 0);
			this->dateNaiss_box->Name = L"dateNaiss_box";
			this->dateNaiss_box->Size = System::Drawing::Size(194, 34);
			this->dateNaiss_box->TabIndex = 46;
			this->dateNaiss_box->Value = System::DateTime(2005, 1, 1, 0, 0, 0, 0);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(204, 424);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(196, 100);
			this->button17->TabIndex = 45;
			this->button17->Text = L"Enregistrer";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// deleteClient_btn
			// 
			this->deleteClient_btn->Location = System::Drawing::Point(14, 496);
			this->deleteClient_btn->Margin = System::Windows::Forms::Padding(4);
			this->deleteClient_btn->Name = L"deleteClient_btn";
			this->deleteClient_btn->Size = System::Drawing::Size(182, 28);
			this->deleteClient_btn->TabIndex = 44;
			this->deleteClient_btn->Text = L"Supprimer";
			this->deleteClient_btn->UseVisualStyleBackColor = true;
			// 
			// updateClient_btn
			// 
			this->updateClient_btn->Location = System::Drawing::Point(14, 460);
			this->updateClient_btn->Margin = System::Windows::Forms::Padding(4);
			this->updateClient_btn->Name = L"updateClient_btn";
			this->updateClient_btn->Size = System::Drawing::Size(182, 28);
			this->updateClient_btn->TabIndex = 43;
			this->updateClient_btn->Text = L"Modifier";
			this->updateClient_btn->UseVisualStyleBackColor = true;
			// 
			// addClient_btn
			// 
			this->addClient_btn->Location = System::Drawing::Point(14, 424);
			this->addClient_btn->Margin = System::Windows::Forms::Padding(4);
			this->addClient_btn->Name = L"addClient_btn";
			this->addClient_btn->Size = System::Drawing::Size(182, 28);
			this->addClient_btn->TabIndex = 42;
			this->addClient_btn->Text = L"Ajouter";
			this->addClient_btn->UseVisualStyleBackColor = true;
			this->addClient_btn->Click += gcnew System::EventHandler(this, &Main::addClient_btn_Click);
			// 
			// adresse_fact
			// 
			this->adresse_fact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresse_fact->Location = System::Drawing::Point(12, 295);
			this->adresse_fact->Name = L"adresse_fact";
			this->adresse_fact->Size = System::Drawing::Size(194, 38);
			this->adresse_fact->TabIndex = 23;
			// 
			// adresse_liv
			// 
			this->adresse_liv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresse_liv->Location = System::Drawing::Point(220, 295);
			this->adresse_liv->Name = L"adresse_liv";
			this->adresse_liv->Size = System::Drawing::Size(184, 38);
			this->adresse_liv->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(9, 259);
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
			this->label19->Location = System::Drawing::Point(220, 259);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(161, 25);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Adresse livraison";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(218, 170);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(142, 25);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Date 1er Achat";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(7, 170);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(177, 25);
			this->label21->TabIndex = 16;
			this->label21->Text = L"Date de Naissance";
			// 
			// prenomC_textBox
			// 
			this->prenomC_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenomC_textBox->Location = System::Drawing::Point(12, 118);
			this->prenomC_textBox->Name = L"prenomC_textBox";
			this->prenomC_textBox->Size = System::Drawing::Size(392, 38);
			this->prenomC_textBox->TabIndex = 15;
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
			// nomC_textbox
			// 
			this->nomC_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomC_textbox->Location = System::Drawing::Point(12, 47);
			this->nomC_textbox->Name = L"nomC_textbox";
			this->nomC_textbox->Size = System::Drawing::Size(392, 38);
			this->nomC_textbox->TabIndex = 14;
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
			this->statsForm->Location = System::Drawing::Point(12, 18);
			this->statsForm->Name = L"statsForm";
			this->statsForm->Size = System::Drawing::Size(413, 550);
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
			this->commandeForm->Controls->Add(this->button1);
			this->commandeForm->Controls->Add(this->deleteCommande_btn);
			this->commandeForm->Controls->Add(this->updateCommande_btn);
			this->commandeForm->Controls->Add(this->addCommande_btn);
			this->commandeForm->Controls->Add(this->button5);
			this->commandeForm->Controls->Add(this->button6);
			this->commandeForm->Controls->Add(this->button7);
			this->commandeForm->Controls->Add(this->button8);
			this->commandeForm->Controls->Add(this->label25);
			this->commandeForm->Controls->Add(this->montantTva);
			this->commandeForm->Controls->Add(this->montantHt);
			this->commandeForm->Controls->Add(this->label26);
			this->commandeForm->Controls->Add(this->label24);
			this->commandeForm->Controls->Add(this->clientCommande);
			this->commandeForm->Controls->Add(this->dateLivr);
			this->commandeForm->Controls->Add(this->moyenPaiement);
			this->commandeForm->Controls->Add(this->datePaiement);
			this->commandeForm->Controls->Add(this->totalArticles);
			this->commandeForm->Controls->Add(this->label1);
			this->commandeForm->Controls->Add(this->label2);
			this->commandeForm->Controls->Add(this->label3);
			this->commandeForm->Controls->Add(this->label4);
			this->commandeForm->Controls->Add(this->dateEmission);
			this->commandeForm->Controls->Add(this->label5);
			this->commandeForm->Controls->Add(this->refCommande);
			this->commandeForm->Controls->Add(this->label6);
			this->commandeForm->Location = System::Drawing::Point(15, 20);
			this->commandeForm->Name = L"commandeForm";
			this->commandeForm->Size = System::Drawing::Size(410, 548);
			this->commandeForm->TabIndex = 42;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 421);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 100);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Enregistrer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// deleteCommande_btn
			// 
			this->deleteCommande_btn->Location = System::Drawing::Point(12, 493);
			this->deleteCommande_btn->Margin = System::Windows::Forms::Padding(4);
			this->deleteCommande_btn->Name = L"deleteCommande_btn";
			this->deleteCommande_btn->Size = System::Drawing::Size(182, 28);
			this->deleteCommande_btn->TabIndex = 40;
			this->deleteCommande_btn->Text = L"Supprimer";
			this->deleteCommande_btn->UseVisualStyleBackColor = true;
			// 
			// updateCommande_btn
			// 
			this->updateCommande_btn->Location = System::Drawing::Point(12, 457);
			this->updateCommande_btn->Margin = System::Windows::Forms::Padding(4);
			this->updateCommande_btn->Name = L"updateCommande_btn";
			this->updateCommande_btn->Size = System::Drawing::Size(182, 28);
			this->updateCommande_btn->TabIndex = 39;
			this->updateCommande_btn->Text = L"Modifier";
			this->updateCommande_btn->UseVisualStyleBackColor = true;
			// 
			// addCommande_btn
			// 
			this->addCommande_btn->Location = System::Drawing::Point(12, 421);
			this->addCommande_btn->Margin = System::Windows::Forms::Padding(4);
			this->addCommande_btn->Name = L"addCommande_btn";
			this->addCommande_btn->Size = System::Drawing::Size(182, 28);
			this->addCommande_btn->TabIndex = 38;
			this->addCommande_btn->Text = L"Ajouter";
			this->addCommande_btn->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(335, 379);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(63, 28);
			this->button5->TabIndex = 37;
			this->button5->Text = L">>";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(220, 379);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 36;
			this->button6->Text = L">";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(94, 379);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 28);
			this->button7->TabIndex = 35;
			this->button7->Text = L"<";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(15, 379);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 28);
			this->button8->TabIndex = 34;
			this->button8->Text = L"<<";
			this->button8->UseVisualStyleBackColor = true;
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
			// montantTva
			// 
			this->montantTva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->montantTva->Location = System::Drawing::Point(225, 317);
			this->montantTva->Name = L"montantTva";
			this->montantTva->Size = System::Drawing::Size(173, 38);
			this->montantTva->TabIndex = 28;
			// 
			// montantHt
			// 
			this->montantHt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->montantHt->Location = System::Drawing::Point(15, 317);
			this->montantHt->Name = L"montantHt";
			this->montantHt->Size = System::Drawing::Size(199, 38);
			this->montantHt->TabIndex = 27;
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
			// clientCommande
			// 
			this->clientCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientCommande->Location = System::Drawing::Point(225, 239);
			this->clientCommande->Name = L"clientCommande";
			this->clientCommande->Size = System::Drawing::Size(173, 38);
			this->clientCommande->TabIndex = 24;
			// 
			// dateLivr
			// 
			this->dateLivr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLivr->Location = System::Drawing::Point(225, 104);
			this->dateLivr->Name = L"dateLivr";
			this->dateLivr->Size = System::Drawing::Size(173, 38);
			this->dateLivr->TabIndex = 22;
			// 
			// moyenPaiement
			// 
			this->moyenPaiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->moyenPaiement->Location = System::Drawing::Point(225, 172);
			this->moyenPaiement->Name = L"moyenPaiement";
			this->moyenPaiement->Size = System::Drawing::Size(173, 38);
			this->moyenPaiement->TabIndex = 23;
			// 
			// datePaiement
			// 
			this->datePaiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePaiement->Location = System::Drawing::Point(15, 172);
			this->datePaiement->Name = L"datePaiement";
			this->datePaiement->Size = System::Drawing::Size(199, 38);
			this->datePaiement->TabIndex = 21;
			// 
			// totalArticles
			// 
			this->totalArticles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalArticles->Location = System::Drawing::Point(15, 241);
			this->totalArticles->Name = L"totalArticles";
			this->totalArticles->Size = System::Drawing::Size(199, 38);
			this->totalArticles->TabIndex = 20;
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
			// dateEmission
			// 
			this->dateEmission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateEmission->Location = System::Drawing::Point(15, 104);
			this->dateEmission->Name = L"dateEmission";
			this->dateEmission->Size = System::Drawing::Size(199, 38);
			this->dateEmission->TabIndex = 15;
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
			// refCommande
			// 
			this->refCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refCommande->Location = System::Drawing::Point(15, 33);
			this->refCommande->Name = L"refCommande";
			this->refCommande->Size = System::Drawing::Size(383, 38);
			this->refCommande->TabIndex = 14;
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
			this->personnelForm->Controls->Add(this->button9);
			this->personnelForm->Controls->Add(this->deletePersonnel_btn);
			this->personnelForm->Controls->Add(this->updatePersonnel_btn);
			this->personnelForm->Controls->Add(this->addPersonnel_btn);
			this->personnelForm->Controls->Add(this->dateEmbauche);
			this->personnelForm->Controls->Add(this->adressePersonnel);
			this->personnelForm->Controls->Add(this->superieur);
			this->personnelForm->Controls->Add(this->label7);
			this->personnelForm->Controls->Add(this->label9);
			this->personnelForm->Controls->Add(this->label10);
			this->personnelForm->Controls->Add(this->prenomPersonnel);
			this->personnelForm->Controls->Add(this->label11);
			this->personnelForm->Controls->Add(this->nomPersonnel);
			this->personnelForm->Controls->Add(this->label12);
			this->personnelForm->Location = System::Drawing::Point(15, 23);
			this->personnelForm->Name = L"personnelForm";
			this->personnelForm->Size = System::Drawing::Size(410, 545);
			this->personnelForm->TabIndex = 42;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(202, 424);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(196, 100);
			this->button9->TabIndex = 45;
			this->button9->Text = L"Enregistrer";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// deletePersonnel_btn
			// 
			this->deletePersonnel_btn->Location = System::Drawing::Point(12, 496);
			this->deletePersonnel_btn->Margin = System::Windows::Forms::Padding(4);
			this->deletePersonnel_btn->Name = L"deletePersonnel_btn";
			this->deletePersonnel_btn->Size = System::Drawing::Size(182, 28);
			this->deletePersonnel_btn->TabIndex = 44;
			this->deletePersonnel_btn->Text = L"Supprimer";
			this->deletePersonnel_btn->UseVisualStyleBackColor = true;
			// 
			// updatePersonnel_btn
			// 
			this->updatePersonnel_btn->Location = System::Drawing::Point(12, 460);
			this->updatePersonnel_btn->Margin = System::Windows::Forms::Padding(4);
			this->updatePersonnel_btn->Name = L"updatePersonnel_btn";
			this->updatePersonnel_btn->Size = System::Drawing::Size(182, 28);
			this->updatePersonnel_btn->TabIndex = 43;
			this->updatePersonnel_btn->Text = L"Modifier";
			this->updatePersonnel_btn->UseVisualStyleBackColor = true;
			// 
			// addPersonnel_btn
			// 
			this->addPersonnel_btn->Location = System::Drawing::Point(12, 424);
			this->addPersonnel_btn->Margin = System::Windows::Forms::Padding(4);
			this->addPersonnel_btn->Name = L"addPersonnel_btn";
			this->addPersonnel_btn->Size = System::Drawing::Size(182, 28);
			this->addPersonnel_btn->TabIndex = 42;
			this->addPersonnel_btn->Text = L"Ajouter";
			this->addPersonnel_btn->UseVisualStyleBackColor = true;
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateEmbauche->Location = System::Drawing::Point(15, 186);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(375, 38);
			this->dateEmbauche->TabIndex = 22;
			// 
			// adressePersonnel
			// 
			this->adressePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adressePersonnel->Location = System::Drawing::Point(15, 340);
			this->adressePersonnel->Name = L"adressePersonnel";
			this->adressePersonnel->Size = System::Drawing::Size(375, 38);
			this->adressePersonnel->TabIndex = 23;
			// 
			// superieur
			// 
			this->superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->superieur->Location = System::Drawing::Point(15, 263);
			this->superieur->Name = L"superieur";
			this->superieur->Size = System::Drawing::Size(375, 38);
			this->superieur->TabIndex = 21;
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
			// prenomPersonnel
			// 
			this->prenomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenomPersonnel->Location = System::Drawing::Point(15, 111);
			this->prenomPersonnel->Name = L"prenomPersonnel";
			this->prenomPersonnel->Size = System::Drawing::Size(375, 38);
			this->prenomPersonnel->TabIndex = 15;
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
			// nomPersonnel
			// 
			this->nomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomPersonnel->Location = System::Drawing::Point(15, 35);
			this->nomPersonnel->Name = L"nomPersonnel";
			this->nomPersonnel->Size = System::Drawing::Size(375, 38);
			this->nomPersonnel->TabIndex = 14;
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
			this->produitForm->Controls->Add(this->label27);
			this->produitForm->Controls->Add(this->textBox1);
			this->produitForm->Controls->Add(this->button13);
			this->produitForm->Controls->Add(this->deleteProduit_btn);
			this->produitForm->Controls->Add(this->updateProduit_btn);
			this->produitForm->Controls->Add(this->addProduit_btn);
			this->produitForm->Controls->Add(this->quantiteStock);
			this->produitForm->Controls->Add(this->seuil);
			this->produitForm->Controls->Add(this->tvaProduit);
			this->produitForm->Controls->Add(this->categorie);
			this->produitForm->Controls->Add(this->label13);
			this->produitForm->Controls->Add(this->label14);
			this->produitForm->Controls->Add(this->label15);
			this->produitForm->Controls->Add(this->label16);
			this->produitForm->Controls->Add(this->prixHt_produit);
			this->produitForm->Controls->Add(this->label17);
			this->produitForm->Controls->Add(this->designation);
			this->produitForm->Controls->Add(this->label18);
			this->produitForm->Location = System::Drawing::Point(18, 21);
			this->produitForm->Name = L"produitForm";
			this->produitForm->Size = System::Drawing::Size(407, 547);
			this->produitForm->TabIndex = 41;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(11, 24);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(125, 29);
			this->label27->TabIndex = 47;
			this->label27->Text = L"Référence";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(15, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(383, 34);
			this->textBox1->TabIndex = 46;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(202, 424);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(196, 100);
			this->button13->TabIndex = 45;
			this->button13->Text = L"Enregistrer";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// deleteProduit_btn
			// 
			this->deleteProduit_btn->Location = System::Drawing::Point(12, 496);
			this->deleteProduit_btn->Margin = System::Windows::Forms::Padding(4);
			this->deleteProduit_btn->Name = L"deleteProduit_btn";
			this->deleteProduit_btn->Size = System::Drawing::Size(182, 28);
			this->deleteProduit_btn->TabIndex = 44;
			this->deleteProduit_btn->Text = L"Supprimer";
			this->deleteProduit_btn->UseVisualStyleBackColor = true;
			// 
			// updateProduit_btn
			// 
			this->updateProduit_btn->Location = System::Drawing::Point(12, 460);
			this->updateProduit_btn->Margin = System::Windows::Forms::Padding(4);
			this->updateProduit_btn->Name = L"updateProduit_btn";
			this->updateProduit_btn->Size = System::Drawing::Size(182, 28);
			this->updateProduit_btn->TabIndex = 43;
			this->updateProduit_btn->Text = L"Modifier";
			this->updateProduit_btn->UseVisualStyleBackColor = true;
			// 
			// addProduit_btn
			// 
			this->addProduit_btn->Location = System::Drawing::Point(12, 424);
			this->addProduit_btn->Margin = System::Windows::Forms::Padding(4);
			this->addProduit_btn->Name = L"addProduit_btn";
			this->addProduit_btn->Size = System::Drawing::Size(182, 28);
			this->addProduit_btn->TabIndex = 42;
			this->addProduit_btn->Text = L"Ajouter";
			this->addProduit_btn->UseVisualStyleBackColor = true;
			// 
			// quantiteStock
			// 
			this->quantiteStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantiteStock->Location = System::Drawing::Point(15, 279);
			this->quantiteStock->Name = L"quantiteStock";
			this->quantiteStock->Size = System::Drawing::Size(199, 38);
			this->quantiteStock->TabIndex = 22;
			// 
			// seuil
			// 
			this->seuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seuil->Location = System::Drawing::Point(238, 279);
			this->seuil->Name = L"seuil";
			this->seuil->Size = System::Drawing::Size(160, 38);
			this->seuil->TabIndex = 23;
			// 
			// tvaProduit
			// 
			this->tvaProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvaProduit->Location = System::Drawing::Point(12, 352);
			this->tvaProduit->Name = L"tvaProduit";
			this->tvaProduit->Size = System::Drawing::Size(204, 38);
			this->tvaProduit->TabIndex = 21;
			this->tvaProduit->TextChanged += gcnew System::EventHandler(this, &Main::textBox13_TextChanged);
			// 
			// categorie
			// 
			this->categorie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categorie->Location = System::Drawing::Point(238, 352);
			this->categorie->Name = L"categorie";
			this->categorie->Size = System::Drawing::Size(160, 38);
			this->categorie->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(15, 325);
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
			this->label14->Location = System::Drawing::Point(242, 324);
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
			this->label15->Location = System::Drawing::Point(242, 252);
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
			this->label16->Location = System::Drawing::Point(10, 252);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(141, 25);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Quantité Stock";
			// 
			// prixHt_produit
			// 
			this->prixHt_produit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prixHt_produit->Location = System::Drawing::Point(15, 204);
			this->prixHt_produit->Name = L"prixHt_produit";
			this->prixHt_produit->Size = System::Drawing::Size(383, 38);
			this->prixHt_produit->TabIndex = 15;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(11, 173);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(93, 29);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Prix HT";
			// 
			// designation
			// 
			this->designation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->designation->Location = System::Drawing::Point(15, 131);
			this->designation->Name = L"designation";
			this->designation->Size = System::Drawing::Size(383, 38);
			this->designation->TabIndex = 14;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(10, 100);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(141, 29);
			this->label18->TabIndex = 12;
			this->label18->Text = L"Désignation";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(445, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1006, 547);
			this->dataGridView1->TabIndex = 39;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1701, 619);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->clientForm->ResumeLayout(false);
			this->clientForm->PerformLayout();
			this->statsForm->ResumeLayout(false);
			this->commandeForm->ResumeLayout(false);
			this->commandeForm->PerformLayout();
			this->personnelForm->ResumeLayout(false);
			this->personnelForm->PerformLayout();
			this->produitForm->ResumeLayout(false);
			this->produitForm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		this->gestionClients = gcnew Services::ServiceClient();
		this->gestionProduits = gcnew Services::ServiceProduit();
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
	this->commandeForm->Visible = false;

	this->dataGridView1->Refresh();
	this->dataset = this->gestionClients->listeClients("Rsl");
	this->dataGridView1->DataSource = this->dataset;
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

	this->dataGridView1->Refresh();
	this->dataset = this->gestionProduits->listeProduits("Rsl");
	this->dataGridView1->DataSource = this->dataset;
	this->dataGridView1->DataMember = "Rsl";
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
private: System::Void addClient_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gestionClients->addClient(this->nomC_textbox->Text, this->prenomC_textBox->Text, this->dateNaiss_box->MaxDate, this->datePreAchat_box->MaxDate);
	this->dataGridView1->Refresh();
}
};
}
