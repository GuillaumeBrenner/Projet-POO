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

private: System::Windows::Forms::TextBox^ superieurP;
private: System::Windows::Forms::TextBox^ adresseP_textbox;





private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ prenomP_textbox;


private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ nomP_textbox;


private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ clientForm;




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
	private: Services::ServicePersonnel^ gestionPersonnels;
		   // Le mode 
	private: EditionMode mode;

	private: int index;
	private: int rowsCount;

		   // Un cache memoire sur la table des personnes
	private: System::Data::DataSet^ dataset;


private: System::Windows::Forms::Button^ deleteCommande_btn;

private: System::Windows::Forms::Button^ updateCommande_btn;


private: System::Windows::Forms::Button^ addCommande_btn;








private: System::Windows::Forms::Button^ deleteProduit_btn;


private: System::Windows::Forms::Button^ deletePersonnel_btn;

private: System::Windows::Forms::Button^ updatePersonnel_btn;

private: System::Windows::Forms::Button^ addPersonnel_btn;
private: System::Windows::Forms::Button^ updateProduit_btn;


private: System::Windows::Forms::Button^ addProduit_btn;


private: System::Windows::Forms::Button^ deleteClient_btn;



private: System::Windows::Forms::Button^ updateClient_btn;

private: System::Windows::Forms::Button^ addClient_btn;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ refProduit_textbox;

private: System::Windows::Forms::DateTimePicker^ datePreAchat_box;

private: System::Windows::Forms::DateTimePicker^ dateNaiss_box;
private: System::Windows::Forms::DateTimePicker^ dateEmbauche;
private: System::Windows::Forms::TextBox^ messageTxt;
private: System::Windows::Forms::Label^ messageLabel;


private: System::Windows::Forms::TextBox^ idClient_textbox;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ idCommande_textbox;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ idPersonnel_box;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ idProduit_textbox;
private: System::Windows::Forms::Button^ nextClient_btn;
private: System::Windows::Forms::Button^ previousClient_btn;
private: System::Windows::Forms::Button^ refreshData;
private: System::Windows::Forms::Button^ showData;
private: System::Windows::Forms::TextBox^ adresseLivr;
private: System::Windows::Forms::TextBox^ adresseFact;
private: System::Windows::Forms::ComboBox^ categorieCombo;












































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
			this->refreshData = (gcnew System::Windows::Forms::Button());
			this->showData = (gcnew System::Windows::Forms::Button());
			this->nextClient_btn = (gcnew System::Windows::Forms::Button());
			this->previousClient_btn = (gcnew System::Windows::Forms::Button());
			this->messageLabel = (gcnew System::Windows::Forms::Label());
			this->messageTxt = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->clientForm = (gcnew System::Windows::Forms::Panel());
			this->adresseLivr = (gcnew System::Windows::Forms::TextBox());
			this->adresseFact = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->idClient_textbox = (gcnew System::Windows::Forms::TextBox());
			this->datePreAchat_box = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateNaiss_box = (gcnew System::Windows::Forms::DateTimePicker());
			this->deleteClient_btn = (gcnew System::Windows::Forms::Button());
			this->updateClient_btn = (gcnew System::Windows::Forms::Button());
			this->addClient_btn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->prenomC_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->nomC_textbox = (gcnew System::Windows::Forms::TextBox());
			this->commandeForm = (gcnew System::Windows::Forms::Panel());
			this->idCommande_textbox = (gcnew System::Windows::Forms::TextBox());
			this->deleteCommande_btn = (gcnew System::Windows::Forms::Button());
			this->updateCommande_btn = (gcnew System::Windows::Forms::Button());
			this->addCommande_btn = (gcnew System::Windows::Forms::Button());
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
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->personnelForm = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->idPersonnel_box = (gcnew System::Windows::Forms::TextBox());
			this->dateEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->deletePersonnel_btn = (gcnew System::Windows::Forms::Button());
			this->updatePersonnel_btn = (gcnew System::Windows::Forms::Button());
			this->addPersonnel_btn = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->superieurP = (gcnew System::Windows::Forms::TextBox());
			this->adresseP_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->prenomP_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->nomP_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->produitForm = (gcnew System::Windows::Forms::Panel());
			this->categorieCombo = (gcnew System::Windows::Forms::ComboBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->idProduit_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->refProduit_textbox = (gcnew System::Windows::Forms::TextBox());
			this->deleteProduit_btn = (gcnew System::Windows::Forms::Button());
			this->updateProduit_btn = (gcnew System::Windows::Forms::Button());
			this->addProduit_btn = (gcnew System::Windows::Forms::Button());
			this->quantiteStock = (gcnew System::Windows::Forms::TextBox());
			this->seuil = (gcnew System::Windows::Forms::TextBox());
			this->tvaProduit = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->prixHt_produit = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->designation = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
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
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->clientForm->SuspendLayout();
			this->commandeForm->SuspendLayout();
			this->personnelForm->SuspendLayout();
			this->produitForm->SuspendLayout();
			this->statsForm->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnPersonnel
			// 
			this->btnPersonnel->Location = System::Drawing::Point(13, 318);
			this->btnPersonnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnPersonnel->Name = L"btnPersonnel";
			this->btnPersonnel->Size = System::Drawing::Size(116, 37);
			this->btnPersonnel->TabIndex = 0;
			this->btnPersonnel->Text = L"Personnel";
			this->btnPersonnel->UseVisualStyleBackColor = true;
			this->btnPersonnel->Click += gcnew System::EventHandler(this, &Main::btnPersonnel_Click);
			// 
			// btnClient
			// 
			this->btnClient->Location = System::Drawing::Point(13, 139);
			this->btnClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Size = System::Drawing::Size(116, 37);
			this->btnClient->TabIndex = 1;
			this->btnClient->Text = L"Client";
			this->btnClient->UseVisualStyleBackColor = true;
			this->btnClient->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// btnProduit
			// 
			this->btnProduit->Location = System::Drawing::Point(13, 194);
			this->btnProduit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnProduit->Name = L"btnProduit";
			this->btnProduit->Size = System::Drawing::Size(116, 37);
			this->btnProduit->TabIndex = 2;
			this->btnProduit->Text = L"Produit";
			this->btnProduit->UseVisualStyleBackColor = true;
			this->btnProduit->Click += gcnew System::EventHandler(this, &Main::btnProduit_Click);
			// 
			// btnCommande
			// 
			this->btnCommande->Location = System::Drawing::Point(13, 257);
			this->btnCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCommande->Name = L"btnCommande";
			this->btnCommande->Size = System::Drawing::Size(116, 37);
			this->btnCommande->TabIndex = 3;
			this->btnCommande->Text = L"Commande";
			this->btnCommande->UseVisualStyleBackColor = true;
			this->btnCommande->Click += gcnew System::EventHandler(this, &Main::btnCommande_Click);
			// 
			// btnStats
			// 
			this->btnStats->Location = System::Drawing::Point(13, 86);
			this->btnStats->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnStats->Name = L"btnStats";
			this->btnStats->Size = System::Drawing::Size(116, 37);
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
			this->panel1->Location = System::Drawing::Point(9, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(150, 572);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel2->Controls->Add(this->refreshData);
			this->panel2->Controls->Add(this->showData);
			this->panel2->Controls->Add(this->nextClient_btn);
			this->panel2->Controls->Add(this->previousClient_btn);
			this->panel2->Controls->Add(this->messageLabel);
			this->panel2->Controls->Add(this->messageTxt);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->statsForm);
			this->panel2->Controls->Add(this->clientForm);
			this->panel2->Controls->Add(this->commandeForm);
			this->panel2->Controls->Add(this->personnelForm);
			this->panel2->Controls->Add(this->produitForm);
			this->panel2->Location = System::Drawing::Point(164, 10);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1103, 572);
			this->panel2->TabIndex = 6;
			// 
			// refreshData
			// 
			this->refreshData->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->refreshData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refreshData->Location = System::Drawing::Point(966, 19);
			this->refreshData->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->refreshData->Name = L"refreshData";
			this->refreshData->Size = System::Drawing::Size(122, 27);
			this->refreshData->TabIndex = 50;
			this->refreshData->Text = L"Actualiser";
			this->refreshData->UseVisualStyleBackColor = false;
			this->refreshData->Click += gcnew System::EventHandler(this, &Main::refreshData_Click);
			// 
			// showData
			// 
			this->showData->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->showData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showData->ForeColor = System::Drawing::SystemColors::ControlText;
			this->showData->Location = System::Drawing::Point(838, 19);
			this->showData->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->showData->Name = L"showData";
			this->showData->Size = System::Drawing::Size(123, 29);
			this->showData->TabIndex = 49;
			this->showData->Text = L"Afficher";
			this->showData->UseVisualStyleBackColor = false;
			this->showData->Click += gcnew System::EventHandler(this, &Main::showData_Click);
			// 
			// nextClient_btn
			// 
			this->nextClient_btn->Location = System::Drawing::Point(422, 25);
			this->nextClient_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->nextClient_btn->Name = L"nextClient_btn";
			this->nextClient_btn->Size = System::Drawing::Size(85, 23);
			this->nextClient_btn->TabIndex = 51;
			this->nextClient_btn->Text = L"Suivant";
			this->nextClient_btn->UseVisualStyleBackColor = true;
			this->nextClient_btn->Click += gcnew System::EventHandler(this, &Main::nextClient_btn_Click);
			// 
			// previousClient_btn
			// 
			this->previousClient_btn->Location = System::Drawing::Point(334, 25);
			this->previousClient_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->previousClient_btn->Name = L"previousClient_btn";
			this->previousClient_btn->Size = System::Drawing::Size(84, 24);
			this->previousClient_btn->TabIndex = 52;
			this->previousClient_btn->Text = L"Précédent";
			this->previousClient_btn->UseVisualStyleBackColor = true;
			this->previousClient_btn->Click += gcnew System::EventHandler(this, &Main::previousClient_btn_Click);
			// 
			// messageLabel
			// 
			this->messageLabel->AutoSize = true;
			this->messageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->messageLabel->Location = System::Drawing::Point(331, 474);
			this->messageLabel->Name = L"messageLabel";
			this->messageLabel->Size = System::Drawing::Size(65, 17);
			this->messageLabel->TabIndex = 48;
			this->messageLabel->Text = L"Message";
			// 
			// messageTxt
			// 
			this->messageTxt->Location = System::Drawing::Point(334, 492);
			this->messageTxt->Multiline = true;
			this->messageTxt->Name = L"messageTxt";
			this->messageTxt->ReadOnly = true;
			this->messageTxt->Size = System::Drawing::Size(412, 68);
			this->messageTxt->TabIndex = 48;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(334, 53);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(754, 419);
			this->dataGridView1->TabIndex = 39;
			// 
			// clientForm
			// 
			this->clientForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->clientForm->Controls->Add(this->adresseLivr);
			this->clientForm->Controls->Add(this->adresseFact);
			this->clientForm->Controls->Add(this->label28);
			this->clientForm->Controls->Add(this->idClient_textbox);
			this->clientForm->Controls->Add(this->datePreAchat_box);
			this->clientForm->Controls->Add(this->dateNaiss_box);
			this->clientForm->Controls->Add(this->deleteClient_btn);
			this->clientForm->Controls->Add(this->updateClient_btn);
			this->clientForm->Controls->Add(this->addClient_btn);
			this->clientForm->Controls->Add(this->label8);
			this->clientForm->Controls->Add(this->label19);
			this->clientForm->Controls->Add(this->label20);
			this->clientForm->Controls->Add(this->label21);
			this->clientForm->Controls->Add(this->prenomC_textBox);
			this->clientForm->Controls->Add(this->label22);
			this->clientForm->Controls->Add(this->label23);
			this->clientForm->Controls->Add(this->nomC_textbox);
			this->clientForm->Location = System::Drawing::Point(9, 16);
			this->clientForm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->clientForm->Name = L"clientForm";
			this->clientForm->Size = System::Drawing::Size(310, 546);
			this->clientForm->TabIndex = 43;
			// 
			// adresseLivr
			// 
			this->adresseLivr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresseLivr->Location = System::Drawing::Point(167, 255);
			this->adresseLivr->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->adresseLivr->Name = L"adresseLivr";
			this->adresseLivr->Size = System::Drawing::Size(137, 28);
			this->adresseLivr->TabIndex = 54;
			// 
			// adresseFact
			// 
			this->adresseFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresseFact->Location = System::Drawing::Point(9, 255);
			this->adresseFact->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->adresseFact->Name = L"adresseFact";
			this->adresseFact->Size = System::Drawing::Size(146, 28);
			this->adresseFact->TabIndex = 53;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(7, 2);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(29, 24);
			this->label28->TabIndex = 50;
			this->label28->Text = L"ID";
			// 
			// idClient_textbox
			// 
			this->idClient_textbox->Enabled = false;
			this->idClient_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idClient_textbox->Location = System::Drawing::Point(9, 28);
			this->idClient_textbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->idClient_textbox->Name = L"idClient_textbox";
			this->idClient_textbox->Size = System::Drawing::Size(146, 26);
			this->idClient_textbox->TabIndex = 44;
			// 
			// datePreAchat_box
			// 
			this->datePreAchat_box->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->datePreAchat_box->CustomFormat = L"dd/MM/yyyy";
			this->datePreAchat_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->datePreAchat_box->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePreAchat_box->Location = System::Drawing::Point(165, 197);
			this->datePreAchat_box->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->datePreAchat_box->MaxDate = System::DateTime(2022, 12, 5, 0, 0, 0, 0);
			this->datePreAchat_box->MinDate = System::DateTime(2017, 1, 1, 0, 0, 0, 0);
			this->datePreAchat_box->Name = L"datePreAchat_box";
			this->datePreAchat_box->Size = System::Drawing::Size(139, 28);
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
			this->dateNaiss_box->Location = System::Drawing::Point(9, 197);
			this->dateNaiss_box->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateNaiss_box->MaxDate = System::DateTime(2005, 1, 1, 0, 0, 0, 0);
			this->dateNaiss_box->MinDate = System::DateTime(1940, 1, 1, 0, 0, 0, 0);
			this->dateNaiss_box->Name = L"dateNaiss_box";
			this->dateNaiss_box->Size = System::Drawing::Size(146, 28);
			this->dateNaiss_box->TabIndex = 46;
			this->dateNaiss_box->Value = System::DateTime(2005, 1, 1, 0, 0, 0, 0);
			// 
			// deleteClient_btn
			// 
			this->deleteClient_btn->BackColor = System::Drawing::Color::Red;
			this->deleteClient_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deleteClient_btn->Location = System::Drawing::Point(12, 476);
			this->deleteClient_btn->Name = L"deleteClient_btn";
			this->deleteClient_btn->Size = System::Drawing::Size(293, 30);
			this->deleteClient_btn->TabIndex = 44;
			this->deleteClient_btn->Text = L"Supprimer";
			this->deleteClient_btn->UseVisualStyleBackColor = false;
			this->deleteClient_btn->Click += gcnew System::EventHandler(this, &Main::deleteClient_btn_Click);
			// 
			// updateClient_btn
			// 
			this->updateClient_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->updateClient_btn->Location = System::Drawing::Point(12, 427);
			this->updateClient_btn->Name = L"updateClient_btn";
			this->updateClient_btn->Size = System::Drawing::Size(293, 32);
			this->updateClient_btn->TabIndex = 43;
			this->updateClient_btn->Text = L"Modifier";
			this->updateClient_btn->UseVisualStyleBackColor = true;
			this->updateClient_btn->Click += gcnew System::EventHandler(this, &Main::updateClient_btn_Click);
			// 
			// addClient_btn
			// 
			this->addClient_btn->BackColor = System::Drawing::Color::LimeGreen;
			this->addClient_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addClient_btn->Location = System::Drawing::Point(11, 383);
			this->addClient_btn->Name = L"addClient_btn";
			this->addClient_btn->Size = System::Drawing::Size(294, 31);
			this->addClient_btn->TabIndex = 42;
			this->addClient_btn->Text = L"Ajouter";
			this->addClient_btn->UseVisualStyleBackColor = false;
			this->addClient_btn->Click += gcnew System::EventHandler(this, &Main::addClient_btn_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(7, 231);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Adresse facturation";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(167, 231);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(128, 20);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Adresse livraison";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(164, 172);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(117, 20);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Date 1er Achat";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(5, 171);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(144, 20);
			this->label21->TabIndex = 16;
			this->label21->Text = L"Date de Naissance";
			// 
			// prenomC_textBox
			// 
			this->prenomC_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenomC_textBox->Location = System::Drawing::Point(9, 135);
			this->prenomC_textBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->prenomC_textBox->Name = L"prenomC_textBox";
			this->prenomC_textBox->Size = System::Drawing::Size(295, 32);
			this->prenomC_textBox->TabIndex = 15;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(5, 112);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(77, 24);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Prénom";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(5, 54);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(51, 24);
			this->label23->TabIndex = 12;
			this->label23->Text = L"Nom";
			// 
			// nomC_textbox
			// 
			this->nomC_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomC_textbox->Location = System::Drawing::Point(9, 78);
			this->nomC_textbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->nomC_textbox->Name = L"nomC_textbox";
			this->nomC_textbox->Size = System::Drawing::Size(295, 32);
			this->nomC_textbox->TabIndex = 14;
			// 
			// commandeForm
			// 
			this->commandeForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->commandeForm->Controls->Add(this->idCommande_textbox);
			this->commandeForm->Controls->Add(this->deleteCommande_btn);
			this->commandeForm->Controls->Add(this->updateCommande_btn);
			this->commandeForm->Controls->Add(this->addCommande_btn);
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
			this->commandeForm->Controls->Add(this->label29);
			this->commandeForm->Location = System::Drawing::Point(11, 16);
			this->commandeForm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->commandeForm->Name = L"commandeForm";
			this->commandeForm->Size = System::Drawing::Size(308, 544);
			this->commandeForm->TabIndex = 42;
			// 
			// idCommande_textbox
			// 
			this->idCommande_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->idCommande_textbox->Location = System::Drawing::Point(7, 41);
			this->idCommande_textbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->idCommande_textbox->Name = L"idCommande_textbox";
			this->idCommande_textbox->Size = System::Drawing::Size(152, 28);
			this->idCommande_textbox->TabIndex = 41;
			// 
			// deleteCommande_btn
			// 
			this->deleteCommande_btn->BackColor = System::Drawing::Color::Red;
			this->deleteCommande_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deleteCommande_btn->Location = System::Drawing::Point(11, 491);
			this->deleteCommande_btn->Name = L"deleteCommande_btn";
			this->deleteCommande_btn->Size = System::Drawing::Size(287, 34);
			this->deleteCommande_btn->TabIndex = 40;
			this->deleteCommande_btn->Text = L"Supprimer";
			this->deleteCommande_btn->UseVisualStyleBackColor = false;
			// 
			// updateCommande_btn
			// 
			this->updateCommande_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->updateCommande_btn->Location = System::Drawing::Point(11, 451);
			this->updateCommande_btn->Name = L"updateCommande_btn";
			this->updateCommande_btn->Size = System::Drawing::Size(287, 33);
			this->updateCommande_btn->TabIndex = 39;
			this->updateCommande_btn->Text = L"Modifier";
			this->updateCommande_btn->UseVisualStyleBackColor = true;
			// 
			// addCommande_btn
			// 
			this->addCommande_btn->BackColor = System::Drawing::Color::LimeGreen;
			this->addCommande_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addCommande_btn->Location = System::Drawing::Point(11, 408);
			this->addCommande_btn->Name = L"addCommande_btn";
			this->addCommande_btn->Size = System::Drawing::Size(287, 35);
			this->addCommande_btn->TabIndex = 38;
			this->addCommande_btn->Text = L"Ajouter";
			this->addCommande_btn->UseVisualStyleBackColor = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(165, 306);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(103, 20);
			this->label25->TabIndex = 29;
			this->label25->Text = L"Montant TVA";
			// 
			// montantTva
			// 
			this->montantTva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->montantTva->Location = System::Drawing::Point(166, 327);
			this->montantTva->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->montantTva->Name = L"montantTva";
			this->montantTva->Size = System::Drawing::Size(131, 32);
			this->montantTva->TabIndex = 28;
			// 
			// montantHt
			// 
			this->montantHt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->montantHt->Location = System::Drawing::Point(9, 327);
			this->montantHt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->montantHt->Name = L"montantHt";
			this->montantHt->Size = System::Drawing::Size(150, 32);
			this->montantHt->TabIndex = 27;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(8, 304);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 20);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Montant HT";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(165, 242);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(49, 20);
			this->label24->TabIndex = 25;
			this->label24->Text = L"Client";
			// 
			// clientCommande
			// 
			this->clientCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientCommande->Location = System::Drawing::Point(166, 263);
			this->clientCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->clientCommande->Name = L"clientCommande";
			this->clientCommande->Size = System::Drawing::Size(131, 32);
			this->clientCommande->TabIndex = 24;
			// 
			// dateLivr
			// 
			this->dateLivr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLivr->Location = System::Drawing::Point(166, 154);
			this->dateLivr->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateLivr->Name = L"dateLivr";
			this->dateLivr->Size = System::Drawing::Size(131, 32);
			this->dateLivr->TabIndex = 22;
			// 
			// moyenPaiement
			// 
			this->moyenPaiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->moyenPaiement->Location = System::Drawing::Point(166, 209);
			this->moyenPaiement->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->moyenPaiement->Name = L"moyenPaiement";
			this->moyenPaiement->Size = System::Drawing::Size(131, 32);
			this->moyenPaiement->TabIndex = 23;
			// 
			// datePaiement
			// 
			this->datePaiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePaiement->Location = System::Drawing::Point(9, 209);
			this->datePaiement->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->datePaiement->Name = L"datePaiement";
			this->datePaiement->Size = System::Drawing::Size(150, 32);
			this->datePaiement->TabIndex = 21;
			// 
			// totalArticles
			// 
			this->totalArticles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalArticles->Location = System::Drawing::Point(9, 265);
			this->totalArticles->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->totalArticles->Name = L"totalArticles";
			this->totalArticles->Size = System::Drawing::Size(150, 32);
			this->totalArticles->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 187);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Date Paiement";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 242);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 20);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Total articles";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(163, 187);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Moyen Paiement";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(163, 132);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Date Livraison";
			// 
			// dateEmission
			// 
			this->dateEmission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateEmission->Location = System::Drawing::Point(9, 154);
			this->dateEmission->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateEmission->Name = L"dateEmission";
			this->dateEmission->Size = System::Drawing::Size(150, 32);
			this->dateEmission->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 130);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 24);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Date Emission";
			// 
			// refCommande
			// 
			this->refCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refCommande->Location = System::Drawing::Point(9, 96);
			this->refCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->refCommande->Name = L"refCommande";
			this->refCommande->Size = System::Drawing::Size(288, 32);
			this->refCommande->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(5, 70);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 24);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Référence";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(8, 11);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(29, 24);
			this->label29->TabIndex = 51;
			this->label29->Text = L"ID";
			// 
			// personnelForm
			// 
			this->personnelForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->personnelForm->Controls->Add(this->label30);
			this->personnelForm->Controls->Add(this->idPersonnel_box);
			this->personnelForm->Controls->Add(this->dateEmbauche);
			this->personnelForm->Controls->Add(this->deletePersonnel_btn);
			this->personnelForm->Controls->Add(this->updatePersonnel_btn);
			this->personnelForm->Controls->Add(this->addPersonnel_btn);
			this->personnelForm->Controls->Add(this->label7);
			this->personnelForm->Controls->Add(this->superieurP);
			this->personnelForm->Controls->Add(this->adresseP_textbox);
			this->personnelForm->Controls->Add(this->label9);
			this->personnelForm->Controls->Add(this->label10);
			this->personnelForm->Controls->Add(this->prenomP_textbox);
			this->personnelForm->Controls->Add(this->label11);
			this->personnelForm->Controls->Add(this->nomP_textbox);
			this->personnelForm->Controls->Add(this->label12);
			this->personnelForm->Location = System::Drawing::Point(9, 16);
			this->personnelForm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->personnelForm->Name = L"personnelForm";
			this->personnelForm->Size = System::Drawing::Size(310, 546);
			this->personnelForm->TabIndex = 42;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(8, 1);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(29, 24);
			this->label30->TabIndex = 51;
			this->label30->Text = L"ID";
			// 
			// idPersonnel_box
			// 
			this->idPersonnel_box->Enabled = false;
			this->idPersonnel_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idPersonnel_box->Location = System::Drawing::Point(11, 32);
			this->idPersonnel_box->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->idPersonnel_box->Name = L"idPersonnel_box";
			this->idPersonnel_box->Size = System::Drawing::Size(155, 26);
			this->idPersonnel_box->TabIndex = 47;
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateEmbauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateEmbauche->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateEmbauche->Location = System::Drawing::Point(11, 213);
			this->dateEmbauche->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateEmbauche->MaxDate = System::DateTime(2022, 12, 3, 0, 0, 0, 0);
			this->dateEmbauche->MinDate = System::DateTime(1990, 1, 1, 0, 0, 0, 0);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(282, 28);
			this->dateEmbauche->TabIndex = 46;
			this->dateEmbauche->Value = System::DateTime(2022, 12, 3, 0, 0, 0, 0);
			// 
			// deletePersonnel_btn
			// 
			this->deletePersonnel_btn->BackColor = System::Drawing::Color::Red;
			this->deletePersonnel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deletePersonnel_btn->Location = System::Drawing::Point(11, 495);
			this->deletePersonnel_btn->Name = L"deletePersonnel_btn";
			this->deletePersonnel_btn->Size = System::Drawing::Size(281, 36);
			this->deletePersonnel_btn->TabIndex = 44;
			this->deletePersonnel_btn->Text = L"Supprimer";
			this->deletePersonnel_btn->UseVisualStyleBackColor = false;
			this->deletePersonnel_btn->Click += gcnew System::EventHandler(this, &Main::deletePersonnel_btn_Click);
			// 
			// updatePersonnel_btn
			// 
			this->updatePersonnel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->updatePersonnel_btn->Location = System::Drawing::Point(11, 455);
			this->updatePersonnel_btn->Name = L"updatePersonnel_btn";
			this->updatePersonnel_btn->Size = System::Drawing::Size(281, 32);
			this->updatePersonnel_btn->TabIndex = 43;
			this->updatePersonnel_btn->Text = L"Modifier";
			this->updatePersonnel_btn->UseVisualStyleBackColor = true;
			// 
			// addPersonnel_btn
			// 
			this->addPersonnel_btn->BackColor = System::Drawing::Color::LimeGreen;
			this->addPersonnel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addPersonnel_btn->Location = System::Drawing::Point(11, 412);
			this->addPersonnel_btn->Name = L"addPersonnel_btn";
			this->addPersonnel_btn->Size = System::Drawing::Size(281, 33);
			this->addPersonnel_btn->TabIndex = 42;
			this->addPersonnel_btn->Text = L"Ajouter";
			this->addPersonnel_btn->UseVisualStyleBackColor = false;
			this->addPersonnel_btn->Click += gcnew System::EventHandler(this, &Main::addPersonnel_btn_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(10, 306);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 24);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Supérieur";
			// 
			// superieurP
			// 
			this->superieurP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->superieurP->Location = System::Drawing::Point(14, 332);
			this->superieurP->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->superieurP->Name = L"superieurP";
			this->superieurP->Size = System::Drawing::Size(282, 32);
			this->superieurP->TabIndex = 23;
			// 
			// adresseP_textbox
			// 
			this->adresseP_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adresseP_textbox->Location = System::Drawing::Point(14, 274);
			this->adresseP_textbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->adresseP_textbox->Name = L"adresseP_textbox";
			this->adresseP_textbox->Size = System::Drawing::Size(282, 32);
			this->adresseP_textbox->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(14, 249);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Adresse";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(8, 182);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 24);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Date Embauche";
			// 
			// prenomP_textbox
			// 
			this->prenomP_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenomP_textbox->Location = System::Drawing::Point(11, 146);
			this->prenomP_textbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->prenomP_textbox->Name = L"prenomP_textbox";
			this->prenomP_textbox->Size = System::Drawing::Size(282, 32);
			this->prenomP_textbox->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(8, 120);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 24);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Prénom";
			// 
			// nomP_textbox
			// 
			this->nomP_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomP_textbox->Location = System::Drawing::Point(11, 84);
			this->nomP_textbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->nomP_textbox->Name = L"nomP_textbox";
			this->nomP_textbox->Size = System::Drawing::Size(282, 32);
			this->nomP_textbox->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(8, 58);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 24);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Nom";
			// 
			// produitForm
			// 
			this->produitForm->BackColor = System::Drawing::SystemColors::GrayText;
			this->produitForm->Controls->Add(this->categorieCombo);
			this->produitForm->Controls->Add(this->label31);
			this->produitForm->Controls->Add(this->idProduit_textbox);
			this->produitForm->Controls->Add(this->label27);
			this->produitForm->Controls->Add(this->refProduit_textbox);
			this->produitForm->Controls->Add(this->deleteProduit_btn);
			this->produitForm->Controls->Add(this->updateProduit_btn);
			this->produitForm->Controls->Add(this->addProduit_btn);
			this->produitForm->Controls->Add(this->quantiteStock);
			this->produitForm->Controls->Add(this->seuil);
			this->produitForm->Controls->Add(this->tvaProduit);
			this->produitForm->Controls->Add(this->label13);
			this->produitForm->Controls->Add(this->label14);
			this->produitForm->Controls->Add(this->label15);
			this->produitForm->Controls->Add(this->label16);
			this->produitForm->Controls->Add(this->prixHt_produit);
			this->produitForm->Controls->Add(this->label17);
			this->produitForm->Controls->Add(this->designation);
			this->produitForm->Controls->Add(this->label18);
			this->produitForm->Location = System::Drawing::Point(9, 17);
			this->produitForm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->produitForm->Name = L"produitForm";
			this->produitForm->Size = System::Drawing::Size(310, 544);
			this->produitForm->TabIndex = 41;
			// 
			// categorieCombo
			// 
			this->categorieCombo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categorieCombo->FormattingEnabled = true;
			this->categorieCombo->Location = System::Drawing::Point(178, 333);
			this->categorieCombo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->categorieCombo->Name = L"categorieCombo";
			this->categorieCombo->Size = System::Drawing::Size(121, 30);
			this->categorieCombo->TabIndex = 52;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(8, 9);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(29, 24);
			this->label31->TabIndex = 51;
			this->label31->Text = L"ID";
			// 
			// idProduit_textbox
			// 
			this->idProduit_textbox->Enabled = false;
			this->idProduit_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->idProduit_textbox->Location = System::Drawing::Point(11, 34);
			this->idProduit_textbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->idProduit_textbox->Name = L"idProduit_textbox";
			this->idProduit_textbox->Size = System::Drawing::Size(150, 28);
			this->idProduit_textbox->TabIndex = 48;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(8, 66);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(98, 24);
			this->label27->TabIndex = 47;
			this->label27->Text = L"Référence";
			// 
			// refProduit_textbox
			// 
			this->refProduit_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->refProduit_textbox->Location = System::Drawing::Point(11, 92);
			this->refProduit_textbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->refProduit_textbox->Name = L"refProduit_textbox";
			this->refProduit_textbox->Size = System::Drawing::Size(288, 28);
			this->refProduit_textbox->TabIndex = 46;
			// 
			// deleteProduit_btn
			// 
			this->deleteProduit_btn->BackColor = System::Drawing::Color::Red;
			this->deleteProduit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deleteProduit_btn->Location = System::Drawing::Point(11, 504);
			this->deleteProduit_btn->Name = L"deleteProduit_btn";
			this->deleteProduit_btn->Size = System::Drawing::Size(290, 28);
			this->deleteProduit_btn->TabIndex = 44;
			this->deleteProduit_btn->Text = L"Supprimer";
			this->deleteProduit_btn->UseVisualStyleBackColor = false;
			this->deleteProduit_btn->Click += gcnew System::EventHandler(this, &Main::deleteProduit_btn_Click);
			// 
			// updateProduit_btn
			// 
			this->updateProduit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->updateProduit_btn->Location = System::Drawing::Point(10, 466);
			this->updateProduit_btn->Name = L"updateProduit_btn";
			this->updateProduit_btn->Size = System::Drawing::Size(290, 29);
			this->updateProduit_btn->TabIndex = 43;
			this->updateProduit_btn->Text = L"Modifier";
			this->updateProduit_btn->UseVisualStyleBackColor = true;
			// 
			// addProduit_btn
			// 
			this->addProduit_btn->BackColor = System::Drawing::Color::LimeGreen;
			this->addProduit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addProduit_btn->Location = System::Drawing::Point(11, 422);
			this->addProduit_btn->Name = L"addProduit_btn";
			this->addProduit_btn->Size = System::Drawing::Size(290, 32);
			this->addProduit_btn->TabIndex = 42;
			this->addProduit_btn->Text = L"Ajouter";
			this->addProduit_btn->UseVisualStyleBackColor = false;
			this->addProduit_btn->Click += gcnew System::EventHandler(this, &Main::addProduit_btn_Click);
			// 
			// quantiteStock
			// 
			this->quantiteStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantiteStock->Location = System::Drawing::Point(11, 273);
			this->quantiteStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->quantiteStock->Name = L"quantiteStock";
			this->quantiteStock->Size = System::Drawing::Size(150, 32);
			this->quantiteStock->TabIndex = 22;
			// 
			// seuil
			// 
			this->seuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seuil->Location = System::Drawing::Point(178, 273);
			this->seuil->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->seuil->Name = L"seuil";
			this->seuil->Size = System::Drawing::Size(121, 32);
			this->seuil->TabIndex = 23;
			// 
			// tvaProduit
			// 
			this->tvaProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvaProduit->Location = System::Drawing::Point(11, 332);
			this->tvaProduit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tvaProduit->Name = L"tvaProduit";
			this->tvaProduit->Size = System::Drawing::Size(152, 32);
			this->tvaProduit->TabIndex = 21;
			this->tvaProduit->TextChanged += gcnew System::EventHandler(this, &Main::textBox13_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(11, 310);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 20);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Taux TVA";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(182, 310);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 20);
			this->label14->TabIndex = 18;
			this->label14->Text = L"Catégorie";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(182, 251);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 20);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Seuil ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(8, 251);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(115, 20);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Quantité Stock";
			// 
			// prixHt_produit
			// 
			this->prixHt_produit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prixHt_produit->Location = System::Drawing::Point(11, 212);
			this->prixHt_produit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->prixHt_produit->Name = L"prixHt_produit";
			this->prixHt_produit->Size = System::Drawing::Size(288, 32);
			this->prixHt_produit->TabIndex = 15;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(8, 187);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(73, 24);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Prix HT";
			// 
			// designation
			// 
			this->designation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->designation->Location = System::Drawing::Point(11, 153);
			this->designation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->designation->Name = L"designation";
			this->designation->Size = System::Drawing::Size(288, 32);
			this->designation->TabIndex = 14;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(8, 128);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(109, 24);
			this->label18->TabIndex = 12;
			this->label18->Text = L"Désignation";
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
			this->statsForm->Location = System::Drawing::Point(9, 20);
			this->statsForm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->statsForm->Name = L"statsForm";
			this->statsForm->Size = System::Drawing::Size(310, 544);
			this->statsForm->TabIndex = 40;
			this->statsForm->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Main::statsForm_Paint);
			// 
			// btnSimul
			// 
			this->btnSimul->BackColor = System::Drawing::Color::White;
			this->btnSimul->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSimul->Location = System::Drawing::Point(3, 399);
			this->btnSimul->Name = L"btnSimul";
			this->btnSimul->Size = System::Drawing::Size(302, 32);
			this->btnSimul->TabIndex = 8;
			this->btnSimul->Text = L"Simulation";
			this->btnSimul->UseVisualStyleBackColor = false;
			// 
			// btnValAchat
			// 
			this->btnValAchat->BackColor = System::Drawing::Color::White;
			this->btnValAchat->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValAchat->Location = System::Drawing::Point(2, 301);
			this->btnValAchat->Name = L"btnValAchat";
			this->btnValAchat->Size = System::Drawing::Size(302, 32);
			this->btnValAchat->TabIndex = 7;
			this->btnValAchat->Text = L"Valeur d\'achat";
			this->btnValAchat->UseVisualStyleBackColor = false;
			// 
			// btnValCom
			// 
			this->btnValCom->BackColor = System::Drawing::Color::White;
			this->btnValCom->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValCom->Location = System::Drawing::Point(3, 352);
			this->btnValCom->Name = L"btnValCom";
			this->btnValCom->Size = System::Drawing::Size(302, 32);
			this->btnValCom->TabIndex = 6;
			this->btnValCom->Text = L"Valeur Commercial";
			this->btnValCom->UseVisualStyleBackColor = false;
			// 
			// btnMoinsVendus
			// 
			this->btnMoinsVendus->BackColor = System::Drawing::Color::White;
			this->btnMoinsVendus->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMoinsVendus->Location = System::Drawing::Point(3, 249);
			this->btnMoinsVendus->Name = L"btnMoinsVendus";
			this->btnMoinsVendus->Size = System::Drawing::Size(302, 32);
			this->btnMoinsVendus->TabIndex = 5;
			this->btnMoinsVendus->Text = L"10 Moins vendus";
			this->btnMoinsVendus->UseVisualStyleBackColor = false;
			// 
			// btnPlusVendus
			// 
			this->btnPlusVendus->BackColor = System::Drawing::Color::White;
			this->btnPlusVendus->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusVendus->Location = System::Drawing::Point(2, 202);
			this->btnPlusVendus->Name = L"btnPlusVendus";
			this->btnPlusVendus->Size = System::Drawing::Size(302, 32);
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
			this->btnSouseuil->Location = System::Drawing::Point(2, 101);
			this->btnSouseuil->Name = L"btnSouseuil";
			this->btnSouseuil->Size = System::Drawing::Size(302, 32);
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
			this->btnPanier->Location = System::Drawing::Point(2, 3);
			this->btnPanier->Name = L"btnPanier";
			this->btnPanier->Size = System::Drawing::Size(302, 32);
			this->btnPanier->TabIndex = 0;
			this->btnPanier->Text = L"Panier moyen";
			this->btnPanier->UseVisualStyleBackColor = false;
			// 
			// btnCa
			// 
			this->btnCa->BackColor = System::Drawing::Color::White;
			this->btnCa->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCa->Location = System::Drawing::Point(2, 52);
			this->btnCa->Name = L"btnCa";
			this->btnCa->Size = System::Drawing::Size(302, 32);
			this->btnCa->TabIndex = 1;
			this->btnCa->Text = L"Chiffre d\'affaire";
			this->btnCa->UseVisualStyleBackColor = false;
			this->btnCa->Click += gcnew System::EventHandler(this, &Main::btnCa_Click);
			// 
			// btnMt
			// 
			this->btnMt->BackColor = System::Drawing::Color::White;
			this->btnMt->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMt->Location = System::Drawing::Point(2, 153);
			this->btnMt->Name = L"btnMt";
			this->btnMt->Size = System::Drawing::Size(302, 32);
			this->btnMt->TabIndex = 3;
			this->btnMt->Text = L"Montant total";
			this->btnMt->UseVisualStyleBackColor = false;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 608);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->clientForm->ResumeLayout(false);
			this->clientForm->PerformLayout();
			this->commandeForm->ResumeLayout(false);
			this->commandeForm->PerformLayout();
			this->personnelForm->ResumeLayout(false);
			this->personnelForm->PerformLayout();
			this->produitForm->ResumeLayout(false);
			this->produitForm->PerformLayout();
			this->statsForm->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		//INITIALISATION DES GESTIONNAIRE
		this->gestionClients = gcnew Services::ServiceClient();
		this->gestionProduits = gcnew Services::ServiceProduit();
		this->gestionPersonnels = gcnew Services::ServicePersonnel();
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

	   //MENU CLIENT
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


	this->messageTxt->Text = "Pour ajouter un nouveau client, Veuillez renseigner les champs sans ID" +
		" "+
		"Pour supprimer un client, Veuillez rentrer dans ID son ID et cliquer sur supprimer";


}
private: System::Void button_s_seuil_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   //MENU PERSONNEL
private: System::Void btnPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->personnelForm->Visible = true;
	this->commandeForm->Visible = false;
	this->clientForm->Visible = false;
	this->produitForm->Visible = false;
	this->statsForm->Visible = false;

	this->dataGridView1->Refresh();
	this->dataset = this->gestionPersonnels->listePersonnels("Rsl");
	this->dataGridView1->DataSource = this->dataset;
	this->dataGridView1->DataMember = "Rsl";
}

	   //MENU PRODUIT
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

	//***********************LISTE DES CATEGORIE***********************
	this->dataset = this->gestionProduits->listeCategorie("Categorie");
	this->rowsCount = this->dataset->Tables["Categorie"]->Rows->Count;

	for (int i = 0; i < this->rowsCount; i++) {
		this->categorieCombo->DataSource = this->dataset->Tables["Categorie"];
		this->categorieCombo->DisplayMember = "libelle";
	}
	//****************************************************************
}

	   //MENU ACCEUIL
private: System::Void btnStats_Click(System::Object^ sender, System::EventArgs^ e) {
	this->statsForm->Visible = true;
	this->commandeForm->Visible = false;
	this->clientForm->Visible = false;
	this->personnelForm->Visible = false;
	this->produitForm->Visible = false;
}
private: System::Void statsForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

	   //MENU COMMANDE
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
				
											//*******************CLIENT************************

	   //////////////////////////////////////////////BUTTON AJOUTER UN CLIENT
private: System::Void addClient_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gestionClients->addClient(this->nomC_textbox->Text, this->prenomC_textBox->Text, this->dateNaiss_box->MaxDate, this->datePreAchat_box->MaxDate, this->adresseFact->Text, this->adresseLivr->Text);
	
	this->dataGridView1->Refresh();
	this->dataset = this->gestionClients->listeClients("Rsl");
	this->dataGridView1->DataSource = this->dataset;
	this->dataGridView1->DataMember = "Rsl";

	// Reset des champs graphiques de l'interface
	this->nomC_textbox->Clear();
	this->prenomC_textBox->Clear();
	this->adresseFact->Clear();
	this->adresseLivr->Clear();

	MessageBox::Show("Opération réussie : le client a été créé", "Notification");
}

	   //////////////////////////////////////////////BUTTON MODIFIER UN CLIENT
private: System::Void updateClient_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gestionClients->updateClient(int::Parse(this->idClient_textbox->Text), this->nomC_textbox->Text, this->prenomC_textBox->Text, this->dateNaiss_box->MaxDate, this->datePreAchat_box->MaxDate, this->adresseFact->Text, this->adresseLivr->Text);

	this->dataGridView1->Refresh();
	this->dataset = this->gestionClients->listeClients("Rsl");
	this->dataGridView1->DataSource = this->dataset;
	this->dataGridView1->DataMember = "Rsl";

	// Reset des champs graphiques de l'interface
	this->nomC_textbox->Clear();
	this->prenomC_textBox->Clear();
	this->adresseFact->Clear();
	this->adresseLivr->Clear();

	MessageBox::Show("Opération réussie : le client a été modifié", "Notification");
}
	   /////////////////////////////////////////////////BUTTON SUPPRIMER UN CLIENT
private: System::Void deleteClient_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Confirmation
	if (MessageBox::Show("Voulez-vous vraiment supprimer ce client?", "Notification", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		this->gestionClients->deleteClient(Convert::ToInt32(this->idClient_textbox->Text));
		this->idClient_textbox->Clear();
		this->dataGridView1->Refresh();
		this->dataset = this->gestionClients->listeClients("Rsl");
		this->dataGridView1->DataSource = this->dataset;
		this->dataGridView1->DataMember = "Rsl";
		MessageBox::Show("Opération réussie : Client supprimé", "Notification");

		this->nomC_textbox->Clear();
		this->prenomC_textBox->Clear();
		this->adresseFact->Clear();
		this->adresseLivr->Clear();
	}
	else
	{
		MessageBox::Show("Opération annulée!", "Status");
	}
}

private: void loadData(int index) {

	if (this->clientForm->Visible) {
		// Mise à jour du cache bdd de la table de personne
		this->dataset = this->gestionClients->listeClients("Client");
		this->rowsCount = this->dataset->Tables["Client"]->Rows->Count;

		// On remplit l'interface avec les informations de la personne index de la bdd
		this->idClient_textbox->Text = Convert::ToString(this->dataset->Tables["Client"]->Rows[this->index]->ItemArray[0]);
		this->nomC_textbox->Text = Convert::ToString(this->dataset->Tables["Client"]->Rows[this->index]->ItemArray[1]);
		this->prenomC_textBox->Text = Convert::ToString(this->dataset->Tables["Client"]->Rows[this->index]->ItemArray[2]);
		this->dateNaiss_box->Text = Convert::ToString(this->dataset->Tables["Client"]->Rows[this->index]->ItemArray[3]);
		this->datePreAchat_box->Text = Convert::ToString(this->dataset->Tables["Client"]->Rows[this->index]->ItemArray[4]);
		this->adresseFact->Text = Convert::ToString(this->dataset->Tables["Client"]->Rows[this->index]->ItemArray[5]);
		this->adresseLivr->Text = Convert::ToString(this->dataset->Tables["Client"]->Rows[this->index]->ItemArray[6]);
	}

	if (this->produitForm->Visible) {
		// Mise à jour du cache bdd de la table de personne
		this->dataset = this->gestionProduits->listeProduits("Produit");
		this->rowsCount = this->dataset->Tables["Produit"]->Rows->Count;

		// On remplit l'interface avec les informations de la personne index de la bdd
		this->idProduit_textbox->Text = Convert::ToString(this->dataset->Tables["Produit"]->Rows[this->index]->ItemArray[0]);
		this->refProduit_textbox->Text = Convert::ToString(this->dataset->Tables["Produit"]->Rows[this->index]->ItemArray[1]);
		this->designation->Text = Convert::ToString(this->dataset->Tables["Produit"]->Rows[this->index]->ItemArray[2]);
		this->prixHt_produit->Text = Convert::ToString(this->dataset->Tables["Produit"]->Rows[this->index]->ItemArray[3]);
		this->quantiteStock->Text = Convert::ToString(this->dataset->Tables["Produit"]->Rows[this->index]->ItemArray[4]);
		this->seuil->Text = Convert::ToString(this->dataset->Tables["Produit"]->Rows[this->index]->ItemArray[5]);
		this->tvaProduit->Text = Convert::ToString(this->dataset->Tables["Produit"]->Rows[this->index]->ItemArray[6]);
		this->categorieCombo->Text = Convert::ToString(this->dataset->Tables["Produit"]->Rows[this->index]->ItemArray[7]);
	}

	if (this->personnelForm->Visible) {
		// Mise à jour du cache bdd de la table de personne
		this->dataset = this->gestionPersonnels->listePersonnels("Personnel");
		this->rowsCount = this->dataset->Tables["Personnel"]->Rows->Count;

		// On remplit l'interface avec les informations de la personne index de la bdd
		this->idPersonnel_box->Text = Convert::ToString(this->dataset->Tables["Personnel"]->Rows[this->index]->ItemArray[0]);
		this->nomP_textbox->Text = Convert::ToString(this->dataset->Tables["Personnel"]->Rows[this->index]->ItemArray[1]);
		this->prenomP_textbox->Text = Convert::ToString(this->dataset->Tables["Personnel"]->Rows[this->index]->ItemArray[2]);
		this->dateEmbauche->Text = Convert::ToString(this->dataset->Tables["Personnel"]->Rows[this->index]->ItemArray[3]);
		this->adresseP_textbox->Text = Convert::ToString(this->dataset->Tables["Personnel"]->Rows[this->index]->ItemArray[4]);
		this->superieurP->Text = Convert::ToString(this->dataset->Tables["Personnel"]->Rows[this->index]->ItemArray[5]);
	}
}

private: System::Void nextClient_btn_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (this->index < this->rowsCount - 1)
	{
		this->index++;
		this->loadData(this->index);
	}
}
private: System::Void previousClient_btn_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (this->index > 0)
	{
		this->index--;
		this->loadData(this->index);
	}
}
private: System::Void refreshData_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->clientForm->Visible) {
		this->dataGridView1->Refresh();
		this->dataset = this->gestionClients->listeClients("Rsl");
		this->dataGridView1->DataSource = this->dataset;
		this->dataGridView1->DataMember = "Rsl";

		this->idClient_textbox->Clear();
		this->nomC_textbox->Clear();
		this->prenomC_textBox->Clear();
		this->adresseFact->Clear();
		this->adresseLivr->Clear();
	}

	if (this->produitForm->Visible) {
		this->dataGridView1->Refresh();
		this->dataset = this->gestionProduits->listeProduits("Rsl");
		this->dataGridView1->DataSource = this->dataset;
		this->dataGridView1->DataMember = "Rsl";

		this->idProduit_textbox->Clear();
		this->refProduit_textbox->Clear();
		this->designation->Clear();
		this->prixHt_produit->Clear();
		this->quantiteStock->Clear();
		this->seuil->Clear();
		this->tvaProduit->Clear();
	}

	if (this->personnelForm->Visible) {
		this->dataGridView1->Refresh();
		this->dataset = this->gestionPersonnels->listePersonnels("Rsl");
		this->dataGridView1->DataSource = this->dataset;
		this->dataGridView1->DataMember = "Rsl";

		this->idPersonnel_box->Clear();
		this->nomP_textbox->Clear();
		this->prenomP_textbox->Clear();
		this->adresseP_textbox->Clear();
		this->superieurP->Clear();
	}

}
private: System::Void showData_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->index = 0;
	this->loadData(this->index);
}
										//*******************PERSONNEL************************

	   ///////////////////////////////////////////BUTTON AJOUTER UN PERSONNEL
private: System::Void addPersonnel_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gestionPersonnels->addPersonnel(this->nomP_textbox->Text, this->prenomP_textbox->Text, this->dateEmbauche->MaxDate, this->adresseP_textbox->Text, this->superieurP->Text);

	this->dataGridView1->Refresh();
	this->dataset = this->gestionPersonnels->listePersonnels("Rsl");
	this->dataGridView1->DataSource = this->dataset;
	this->dataGridView1->DataMember = "Rsl";

	// Reset des champs graphiques de l'interface
	this->nomP_textbox->Clear();
	this->prenomP_textbox->Clear();
	this->adresseP_textbox->Clear();
	this->superieurP->Clear();

	MessageBox::Show("Opération réussie : Personnel a été créé", "Notification");
}
	   /////////////////////////////////////////////BUTTON SUPPRIMER UN PERSONNEL
private: System::Void deletePersonnel_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Confirmation
	if (MessageBox::Show("Voulez-vous vraiment supprimer ce Personnel?", "Notification", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		this->gestionPersonnels->deletePersonnel(Convert::ToInt32(this->idPersonnel_box->Text));
		this->idClient_textbox->Clear();
		this->dataGridView1->Refresh();
		this->dataset = this->gestionPersonnels->listePersonnels("Rsl");
		this->dataGridView1->DataSource = this->dataset;
		this->dataGridView1->DataMember = "Rsl";
		MessageBox::Show("Opération réussie : Personnel supprimé", "Notification");

		// Reset des champs graphiques de l'interface
		this->nomP_textbox->Clear();
		this->prenomP_textbox->Clear();
		this->adresseP_textbox->Clear();
		this->superieurP->Clear();
	}
	else
	{
		MessageBox::Show("Opération annulée!", "Status");
	}
}

										//*******************PRODUIT************************

	   ///////////////////////////////////////////BUTTON AJOUTER UN PRODUIT
private: System::Void addProduit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gestionProduits->addProduit(this->refProduit_textbox->Text, this->designation->Text, float::Parse(this->prixHt_produit->Text), int::Parse(this->quantiteStock->Text), int::Parse(this->seuil->Text), float::Parse(this->tvaProduit->Text), this->categorieCombo->GetItemText(categorieCombo->SelectedValue));

	this->dataGridView1->Refresh();
	this->dataset = this->gestionProduits->listeProduits("Rsl");
	this->dataGridView1->DataSource = this->dataset;
	this->dataGridView1->DataMember = "Rsl";

	// Reset des champs graphiques de l'interface
	this->refProduit_textbox->Clear();
	this->designation->Clear();
	this->prixHt_produit->Clear();
	this->quantiteStock->Clear();
	this->seuil->Clear();
	this->tvaProduit->Clear();

	MessageBox::Show("Opération réussie : Le Produit a été créé", "Notification");
}

	   /////////////////////////////////////////////BUTTON SUPPRIMER UN PRODUIT
private: System::Void deleteProduit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Confirmation
	if (MessageBox::Show("Voulez-vous vraiment supprimer ce Produit?", "Notification", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		this->gestionProduits->deleteProduit(Convert::ToInt32(this->idProduit_textbox->Text));
		this->idProduit_textbox->Clear();
		this->dataGridView1->Refresh();
		this->dataset = this->gestionProduits->listeProduits("Rsl");
		this->dataGridView1->DataSource = this->dataset;
		this->dataGridView1->DataMember = "Rsl";
		MessageBox::Show("Opération réussie : le Produit supprimé", "Notification");

		// Reset des champs graphiques de l'interface
		this->refProduit_textbox->Clear();
		this->designation->Clear();
		this->prixHt_produit->Clear();
		this->quantiteStock->Clear();
		this->seuil->Clear();
		this->tvaProduit->Clear();
	}
	else
	{
		MessageBox::Show("Opération annulée!", "Status");
	}
}
private: System::Void btnCa_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
}
