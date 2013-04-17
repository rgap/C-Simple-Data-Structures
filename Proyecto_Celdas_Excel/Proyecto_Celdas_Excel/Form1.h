#include <windows.h>
#include <string.h>
#using <mscorlib.dll>

#pragma once


namespace Proyecto_Celdas_Excel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ventanaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  celdasExcelConsolaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  deWindowsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  calculadoraToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  blockDeNotasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  internetExplorerToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;

	private: System::Windows::Forms::ToolStripMenuItem^  ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  manualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  celdasExcelGUIToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox159;
private: System::Windows::Forms::TextBox^  textBox158;
private: System::Windows::Forms::TextBox^  textBox157;
private: System::Windows::Forms::TextBox^  textBox156;
private: System::Windows::Forms::TextBox^  textBox155;
private: System::Windows::Forms::TextBox^  textBox154;
private: System::Windows::Forms::TextBox^  textBox153;
private: System::Windows::Forms::TextBox^  textBox152;
private: System::Windows::Forms::TextBox^  textBox151;
private: System::Windows::Forms::TextBox^  textBox150;
private: System::Windows::Forms::TextBox^  textBox149;
private: System::Windows::Forms::TextBox^  textBox148;
private: System::Windows::Forms::TextBox^  textBox147;
private: System::Windows::Forms::TextBox^  textBox146;
private: System::Windows::Forms::TextBox^  textBox145;
private: System::Windows::Forms::TextBox^  textBox144;
private: System::Windows::Forms::TextBox^  textBox143;
private: System::Windows::Forms::TextBox^  textBox142;
private: System::Windows::Forms::TextBox^  textBox141;
private: System::Windows::Forms::TextBox^  textBox140;
private: System::Windows::Forms::TextBox^  textBox139;
private: System::Windows::Forms::TextBox^  textBox138;
private: System::Windows::Forms::TextBox^  textBox137;
private: System::Windows::Forms::TextBox^  textBox136;
private: System::Windows::Forms::TextBox^  textBox135;
private: System::Windows::Forms::TextBox^  textBox134;
private: System::Windows::Forms::TextBox^  textBox133;
private: System::Windows::Forms::TextBox^  textBox132;
private: System::Windows::Forms::TextBox^  textBox131;
private: System::Windows::Forms::TextBox^  textBox130;
private: System::Windows::Forms::TextBox^  textBox129;
private: System::Windows::Forms::TextBox^  textBox128;
private: System::Windows::Forms::TextBox^  textBox127;
private: System::Windows::Forms::TextBox^  textBox126;
private: System::Windows::Forms::TextBox^  textBox125;
private: System::Windows::Forms::TextBox^  textBox124;
private: System::Windows::Forms::TextBox^  textBox123;
private: System::Windows::Forms::TextBox^  textBox122;
private: System::Windows::Forms::TextBox^  textBox121;
private: System::Windows::Forms::TextBox^  textBox120;
private: System::Windows::Forms::TextBox^  textBox119;
private: System::Windows::Forms::TextBox^  textBox118;
private: System::Windows::Forms::TextBox^  textBox117;
private: System::Windows::Forms::TextBox^  textBox116;
private: System::Windows::Forms::TextBox^  textBox115;
private: System::Windows::Forms::TextBox^  textBox114;
private: System::Windows::Forms::TextBox^  textBox113;
private: System::Windows::Forms::TextBox^  textBox112;
private: System::Windows::Forms::TextBox^  textBox111;
private: System::Windows::Forms::TextBox^  textBox110;
private: System::Windows::Forms::TextBox^  textBox109;
private: System::Windows::Forms::TextBox^  textBox108;
private: System::Windows::Forms::TextBox^  textBox107;
private: System::Windows::Forms::TextBox^  textBox106;
private: System::Windows::Forms::TextBox^  textBox105;
private: System::Windows::Forms::TextBox^  textBox104;
private: System::Windows::Forms::TextBox^  textBox103;
private: System::Windows::Forms::TextBox^  textBox102;
private: System::Windows::Forms::TextBox^  textBox101;
private: System::Windows::Forms::TextBox^  textBox100;
private: System::Windows::Forms::TextBox^  textBox99;
private: System::Windows::Forms::TextBox^  textBox98;
private: System::Windows::Forms::TextBox^  textBox97;
private: System::Windows::Forms::TextBox^  textBox96;
private: System::Windows::Forms::TextBox^  textBox95;
private: System::Windows::Forms::TextBox^  textBox94;
private: System::Windows::Forms::TextBox^  textBox93;
private: System::Windows::Forms::TextBox^  textBox92;
private: System::Windows::Forms::TextBox^  textBox91;
private: System::Windows::Forms::TextBox^  textBox90;
private: System::Windows::Forms::TextBox^  textBox89;
private: System::Windows::Forms::TextBox^  textBox88;
private: System::Windows::Forms::TextBox^  textBox87;
private: System::Windows::Forms::TextBox^  textBox86;
private: System::Windows::Forms::TextBox^  textBox85;
private: System::Windows::Forms::TextBox^  textBox84;
private: System::Windows::Forms::TextBox^  textBox83;
private: System::Windows::Forms::TextBox^  textBox82;
private: System::Windows::Forms::TextBox^  textBox81;
private: System::Windows::Forms::TextBox^  textBox80;
private: System::Windows::Forms::TextBox^  textBox79;
private: System::Windows::Forms::TextBox^  textBox78;
private: System::Windows::Forms::TextBox^  textBox77;
private: System::Windows::Forms::TextBox^  textBox76;
private: System::Windows::Forms::TextBox^  textBox75;
private: System::Windows::Forms::TextBox^  textBox74;
private: System::Windows::Forms::TextBox^  textBox73;
private: System::Windows::Forms::TextBox^  textBox72;
private: System::Windows::Forms::TextBox^  textBox71;
private: System::Windows::Forms::TextBox^  textBox70;
private: System::Windows::Forms::TextBox^  textBox69;
private: System::Windows::Forms::TextBox^  textBox68;
private: System::Windows::Forms::TextBox^  textBox67;
private: System::Windows::Forms::TextBox^  textBox66;
private: System::Windows::Forms::TextBox^  textBox65;
private: System::Windows::Forms::TextBox^  textBox64;
private: System::Windows::Forms::TextBox^  textBox63;
private: System::Windows::Forms::TextBox^  textBox62;
private: System::Windows::Forms::TextBox^  textBox61;
private: System::Windows::Forms::TextBox^  textBox160;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;










	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventanaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->celdasExcelConsolaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->celdasExcelGUIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deWindowsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculadoraToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blockDeNotasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->internetExplorerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox160 = (gcnew System::Windows::Forms::TextBox());
			this->textBox159 = (gcnew System::Windows::Forms::TextBox());
			this->textBox158 = (gcnew System::Windows::Forms::TextBox());
			this->textBox157 = (gcnew System::Windows::Forms::TextBox());
			this->textBox156 = (gcnew System::Windows::Forms::TextBox());
			this->textBox155 = (gcnew System::Windows::Forms::TextBox());
			this->textBox154 = (gcnew System::Windows::Forms::TextBox());
			this->textBox153 = (gcnew System::Windows::Forms::TextBox());
			this->textBox152 = (gcnew System::Windows::Forms::TextBox());
			this->textBox151 = (gcnew System::Windows::Forms::TextBox());
			this->textBox150 = (gcnew System::Windows::Forms::TextBox());
			this->textBox149 = (gcnew System::Windows::Forms::TextBox());
			this->textBox148 = (gcnew System::Windows::Forms::TextBox());
			this->textBox147 = (gcnew System::Windows::Forms::TextBox());
			this->textBox146 = (gcnew System::Windows::Forms::TextBox());
			this->textBox145 = (gcnew System::Windows::Forms::TextBox());
			this->textBox144 = (gcnew System::Windows::Forms::TextBox());
			this->textBox143 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox142 = (gcnew System::Windows::Forms::TextBox());
			this->textBox141 = (gcnew System::Windows::Forms::TextBox());
			this->textBox140 = (gcnew System::Windows::Forms::TextBox());
			this->textBox139 = (gcnew System::Windows::Forms::TextBox());
			this->textBox138 = (gcnew System::Windows::Forms::TextBox());
			this->textBox137 = (gcnew System::Windows::Forms::TextBox());
			this->textBox136 = (gcnew System::Windows::Forms::TextBox());
			this->textBox135 = (gcnew System::Windows::Forms::TextBox());
			this->textBox134 = (gcnew System::Windows::Forms::TextBox());
			this->textBox133 = (gcnew System::Windows::Forms::TextBox());
			this->textBox132 = (gcnew System::Windows::Forms::TextBox());
			this->textBox131 = (gcnew System::Windows::Forms::TextBox());
			this->textBox130 = (gcnew System::Windows::Forms::TextBox());
			this->textBox129 = (gcnew System::Windows::Forms::TextBox());
			this->textBox128 = (gcnew System::Windows::Forms::TextBox());
			this->textBox127 = (gcnew System::Windows::Forms::TextBox());
			this->textBox126 = (gcnew System::Windows::Forms::TextBox());
			this->textBox125 = (gcnew System::Windows::Forms::TextBox());
			this->textBox124 = (gcnew System::Windows::Forms::TextBox());
			this->textBox123 = (gcnew System::Windows::Forms::TextBox());
			this->textBox122 = (gcnew System::Windows::Forms::TextBox());
			this->textBox121 = (gcnew System::Windows::Forms::TextBox());
			this->textBox120 = (gcnew System::Windows::Forms::TextBox());
			this->textBox119 = (gcnew System::Windows::Forms::TextBox());
			this->textBox118 = (gcnew System::Windows::Forms::TextBox());
			this->textBox117 = (gcnew System::Windows::Forms::TextBox());
			this->textBox116 = (gcnew System::Windows::Forms::TextBox());
			this->textBox115 = (gcnew System::Windows::Forms::TextBox());
			this->textBox114 = (gcnew System::Windows::Forms::TextBox());
			this->textBox113 = (gcnew System::Windows::Forms::TextBox());
			this->textBox112 = (gcnew System::Windows::Forms::TextBox());
			this->textBox111 = (gcnew System::Windows::Forms::TextBox());
			this->textBox110 = (gcnew System::Windows::Forms::TextBox());
			this->textBox109 = (gcnew System::Windows::Forms::TextBox());
			this->textBox108 = (gcnew System::Windows::Forms::TextBox());
			this->textBox107 = (gcnew System::Windows::Forms::TextBox());
			this->textBox106 = (gcnew System::Windows::Forms::TextBox());
			this->textBox105 = (gcnew System::Windows::Forms::TextBox());
			this->textBox104 = (gcnew System::Windows::Forms::TextBox());
			this->textBox103 = (gcnew System::Windows::Forms::TextBox());
			this->textBox102 = (gcnew System::Windows::Forms::TextBox());
			this->textBox101 = (gcnew System::Windows::Forms::TextBox());
			this->textBox100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox99 = (gcnew System::Windows::Forms::TextBox());
			this->textBox98 = (gcnew System::Windows::Forms::TextBox());
			this->textBox97 = (gcnew System::Windows::Forms::TextBox());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->archivoToolStripMenuItem, 
				this->ventanaToolStripMenuItem, this->deWindowsToolStripMenuItem, this->ayudaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(994, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripSeparator1, 
				this->salirToolStripMenuItem});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(102, 6);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::salirToolStripMenuItem_Click);
			// 
			// ventanaToolStripMenuItem
			// 
			this->ventanaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->celdasExcelConsolaToolStripMenuItem, 
				this->celdasExcelGUIToolStripMenuItem});
			this->ventanaToolStripMenuItem->Name = L"ventanaToolStripMenuItem";
			this->ventanaToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ventanaToolStripMenuItem->Text = L"Ventana";
			// 
			// celdasExcelConsolaToolStripMenuItem
			// 
			this->celdasExcelConsolaToolStripMenuItem->Name = L"celdasExcelConsolaToolStripMenuItem";
			this->celdasExcelConsolaToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->celdasExcelConsolaToolStripMenuItem->Text = L"Celdas_Excel - Consola";
			// 
			// celdasExcelGUIToolStripMenuItem
			// 
			this->celdasExcelGUIToolStripMenuItem->Name = L"celdasExcelGUIToolStripMenuItem";
			this->celdasExcelGUIToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->celdasExcelGUIToolStripMenuItem->Text = L"Celdas_Excel - GUI";
			// 
			// deWindowsToolStripMenuItem
			// 
			this->deWindowsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->calculadoraToolStripMenuItem1, 
				this->blockDeNotasToolStripMenuItem1, this->internetExplorerToolStripMenuItem});
			this->deWindowsToolStripMenuItem->Name = L"deWindowsToolStripMenuItem";
			this->deWindowsToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->deWindowsToolStripMenuItem->Text = L"De Windows";
			// 
			// calculadoraToolStripMenuItem1
			// 
			this->calculadoraToolStripMenuItem1->Name = L"calculadoraToolStripMenuItem1";
			this->calculadoraToolStripMenuItem1->Size = System::Drawing::Size(168, 22);
			this->calculadoraToolStripMenuItem1->Text = L"Calculadora";
			// 
			// blockDeNotasToolStripMenuItem1
			// 
			this->blockDeNotasToolStripMenuItem1->Name = L"blockDeNotasToolStripMenuItem1";
			this->blockDeNotasToolStripMenuItem1->Size = System::Drawing::Size(168, 22);
			this->blockDeNotasToolStripMenuItem1->Text = L"Block de Notas";
			// 
			// internetExplorerToolStripMenuItem
			// 
			this->internetExplorerToolStripMenuItem->Name = L"internetExplorerToolStripMenuItem";
			this->internetExplorerToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->internetExplorerToolStripMenuItem->Text = L"Internet Explorer";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->BackColor = System::Drawing::Color::Lime;
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->manualToolStripMenuItem, 
				this->toolStripSeparator2, this->acercaDeToolStripMenuItem});
			this->ayudaToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->ayudaToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::White;
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// manualToolStripMenuItem
			// 
			this->manualToolStripMenuItem->Name = L"manualToolStripMenuItem";
			this->manualToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->manualToolStripMenuItem->Text = L"Manual";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(130, 6);
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(11, 49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(813, 476);
			this->panel1->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(4, 431);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(19, 13);
			this->label17->TabIndex = 17;
			this->label17->Text = L"16";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 406);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 13);
			this->label16->TabIndex = 16;
			this->label16->Text = L"15";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 379);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"14";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 352);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(19, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"13";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 326);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"12";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 298);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"11";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 271);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"10";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 246);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"9";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 221);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 196);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"7";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"6";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(724, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				49.34211F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50.65789F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				76)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				76)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				89)));
			this->tableLayoutPanel1->Controls->Add(this->textBox160, 9, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox159, 8, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox158, 7, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox157, 6, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox156, 5, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox155, 4, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox154, 3, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox153, 2, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox152, 1, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox151, 0, 15);
			this->tableLayoutPanel1->Controls->Add(this->textBox150, 9, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox149, 8, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox148, 7, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox147, 6, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox146, 5, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox145, 4, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox144, 3, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox143, 2, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox142, 1, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox141, 0, 14);
			this->tableLayoutPanel1->Controls->Add(this->textBox140, 9, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox139, 8, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox138, 7, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox137, 6, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox136, 5, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox135, 4, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox134, 3, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox133, 2, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox132, 1, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox131, 0, 13);
			this->tableLayoutPanel1->Controls->Add(this->textBox130, 9, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox129, 8, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox128, 7, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox127, 6, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox126, 5, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox125, 4, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox124, 3, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox123, 2, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox122, 1, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox121, 0, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox120, 9, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox119, 8, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox118, 7, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox117, 6, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox116, 5, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox115, 4, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox114, 3, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox113, 2, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox112, 1, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox111, 0, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox110, 9, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox109, 8, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox108, 7, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox107, 6, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox106, 5, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox105, 4, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox104, 3, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox103, 2, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox102, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox101, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox100, 9, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox99, 8, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox98, 7, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox97, 6, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox96, 5, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox95, 4, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox94, 3, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox93, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox92, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox91, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox90, 9, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox89, 8, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox88, 7, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox87, 6, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox86, 5, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox85, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox84, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox83, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox82, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox81, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox80, 9, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox79, 8, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox78, 7, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox77, 6, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox76, 5, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox74, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox73, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox72, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox71, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox70, 9, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox69, 8, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox68, 7, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox67, 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox66, 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox65, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox64, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox63, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox62, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox61, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox60, 9, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox59, 8, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox58, 7, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox57, 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox56, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox55, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox54, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox53, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox52, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox50, 9, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox49, 8, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox48, 7, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox47, 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox46, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox45, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox44, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox43, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox42, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox41, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox40, 9, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox39, 8, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox38, 7, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox37, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox36, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox35, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox34, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox33, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox32, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox31, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox30, 9, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox29, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox28, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox27, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox26, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox25, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox24, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox23, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox22, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox21, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox20, 9, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox19, 8, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox18, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox17, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox16, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox15, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox14, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox13, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox12, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox51, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox75, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox11, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox10, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox9, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox8, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox7, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox6, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox5, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(29, 27);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 16;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 26)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 26)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(759, 424);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::tableLayoutPanel1_Paint);
			// 
			// textBox160
			// 
			this->textBox160->Location = System::Drawing::Point(672, 401);
			this->textBox160->Name = L"textBox160";
			this->textBox160->Size = System::Drawing::Size(68, 20);
			this->textBox160->TabIndex = 160;
			// 
			// textBox159
			// 
			this->textBox159->Location = System::Drawing::Point(597, 401);
			this->textBox159->Name = L"textBox159";
			this->textBox159->Size = System::Drawing::Size(68, 20);
			this->textBox159->TabIndex = 159;
			// 
			// textBox158
			// 
			this->textBox158->Location = System::Drawing::Point(521, 401);
			this->textBox158->Name = L"textBox158";
			this->textBox158->Size = System::Drawing::Size(68, 20);
			this->textBox158->TabIndex = 158;
			// 
			// textBox157
			// 
			this->textBox157->Location = System::Drawing::Point(446, 401);
			this->textBox157->Name = L"textBox157";
			this->textBox157->Size = System::Drawing::Size(68, 20);
			this->textBox157->TabIndex = 157;
			// 
			// textBox156
			// 
			this->textBox156->Location = System::Drawing::Point(371, 401);
			this->textBox156->Name = L"textBox156";
			this->textBox156->Size = System::Drawing::Size(68, 20);
			this->textBox156->TabIndex = 156;
			// 
			// textBox155
			// 
			this->textBox155->Location = System::Drawing::Point(296, 401);
			this->textBox155->Name = L"textBox155";
			this->textBox155->Size = System::Drawing::Size(68, 20);
			this->textBox155->TabIndex = 155;
			// 
			// textBox154
			// 
			this->textBox154->Location = System::Drawing::Point(221, 401);
			this->textBox154->Name = L"textBox154";
			this->textBox154->Size = System::Drawing::Size(68, 20);
			this->textBox154->TabIndex = 154;
			// 
			// textBox153
			// 
			this->textBox153->Location = System::Drawing::Point(145, 401);
			this->textBox153->Name = L"textBox153";
			this->textBox153->Size = System::Drawing::Size(68, 20);
			this->textBox153->TabIndex = 153;
			// 
			// textBox152
			// 
			this->textBox152->Location = System::Drawing::Point(73, 401);
			this->textBox152->Name = L"textBox152";
			this->textBox152->Size = System::Drawing::Size(66, 20);
			this->textBox152->TabIndex = 152;
			// 
			// textBox151
			// 
			this->textBox151->Location = System::Drawing::Point(3, 401);
			this->textBox151->Name = L"textBox151";
			this->textBox151->Size = System::Drawing::Size(64, 20);
			this->textBox151->TabIndex = 151;
			// 
			// textBox150
			// 
			this->textBox150->Location = System::Drawing::Point(672, 376);
			this->textBox150->Name = L"textBox150";
			this->textBox150->Size = System::Drawing::Size(68, 20);
			this->textBox150->TabIndex = 150;
			// 
			// textBox149
			// 
			this->textBox149->Location = System::Drawing::Point(597, 376);
			this->textBox149->Name = L"textBox149";
			this->textBox149->Size = System::Drawing::Size(68, 20);
			this->textBox149->TabIndex = 149;
			// 
			// textBox148
			// 
			this->textBox148->Location = System::Drawing::Point(521, 376);
			this->textBox148->Name = L"textBox148";
			this->textBox148->Size = System::Drawing::Size(68, 20);
			this->textBox148->TabIndex = 148;
			// 
			// textBox147
			// 
			this->textBox147->Location = System::Drawing::Point(446, 376);
			this->textBox147->Name = L"textBox147";
			this->textBox147->Size = System::Drawing::Size(68, 20);
			this->textBox147->TabIndex = 147;
			// 
			// textBox146
			// 
			this->textBox146->Location = System::Drawing::Point(371, 376);
			this->textBox146->Name = L"textBox146";
			this->textBox146->Size = System::Drawing::Size(68, 20);
			this->textBox146->TabIndex = 146;
			// 
			// textBox145
			// 
			this->textBox145->Location = System::Drawing::Point(296, 376);
			this->textBox145->Name = L"textBox145";
			this->textBox145->Size = System::Drawing::Size(68, 20);
			this->textBox145->TabIndex = 145;
			// 
			// textBox144
			// 
			this->textBox144->Location = System::Drawing::Point(221, 376);
			this->textBox144->Name = L"textBox144";
			this->textBox144->Size = System::Drawing::Size(68, 20);
			this->textBox144->TabIndex = 144;
			// 
			// textBox143
			// 
			this->textBox143->Location = System::Drawing::Point(145, 376);
			this->textBox143->Name = L"textBox143";
			this->textBox143->Size = System::Drawing::Size(68, 20);
			this->textBox143->TabIndex = 143;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(66, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox142
			// 
			this->textBox142->Location = System::Drawing::Point(73, 376);
			this->textBox142->Name = L"textBox142";
			this->textBox142->Size = System::Drawing::Size(66, 20);
			this->textBox142->TabIndex = 142;
			// 
			// textBox141
			// 
			this->textBox141->Location = System::Drawing::Point(3, 376);
			this->textBox141->Name = L"textBox141";
			this->textBox141->Size = System::Drawing::Size(64, 20);
			this->textBox141->TabIndex = 141;
			// 
			// textBox140
			// 
			this->textBox140->Location = System::Drawing::Point(672, 349);
			this->textBox140->Name = L"textBox140";
			this->textBox140->Size = System::Drawing::Size(68, 20);
			this->textBox140->TabIndex = 140;
			// 
			// textBox139
			// 
			this->textBox139->Location = System::Drawing::Point(597, 349);
			this->textBox139->Name = L"textBox139";
			this->textBox139->Size = System::Drawing::Size(68, 20);
			this->textBox139->TabIndex = 139;
			// 
			// textBox138
			// 
			this->textBox138->Location = System::Drawing::Point(521, 349);
			this->textBox138->Name = L"textBox138";
			this->textBox138->Size = System::Drawing::Size(68, 20);
			this->textBox138->TabIndex = 138;
			// 
			// textBox137
			// 
			this->textBox137->Location = System::Drawing::Point(446, 349);
			this->textBox137->Name = L"textBox137";
			this->textBox137->Size = System::Drawing::Size(68, 20);
			this->textBox137->TabIndex = 137;
			// 
			// textBox136
			// 
			this->textBox136->Location = System::Drawing::Point(371, 349);
			this->textBox136->Name = L"textBox136";
			this->textBox136->Size = System::Drawing::Size(68, 20);
			this->textBox136->TabIndex = 136;
			// 
			// textBox135
			// 
			this->textBox135->Location = System::Drawing::Point(296, 349);
			this->textBox135->Name = L"textBox135";
			this->textBox135->Size = System::Drawing::Size(68, 20);
			this->textBox135->TabIndex = 135;
			// 
			// textBox134
			// 
			this->textBox134->Location = System::Drawing::Point(221, 349);
			this->textBox134->Name = L"textBox134";
			this->textBox134->Size = System::Drawing::Size(68, 20);
			this->textBox134->TabIndex = 134;
			// 
			// textBox133
			// 
			this->textBox133->Location = System::Drawing::Point(145, 349);
			this->textBox133->Name = L"textBox133";
			this->textBox133->Size = System::Drawing::Size(68, 20);
			this->textBox133->TabIndex = 133;
			// 
			// textBox132
			// 
			this->textBox132->Location = System::Drawing::Point(73, 349);
			this->textBox132->Name = L"textBox132";
			this->textBox132->Size = System::Drawing::Size(66, 20);
			this->textBox132->TabIndex = 132;
			// 
			// textBox131
			// 
			this->textBox131->Location = System::Drawing::Point(3, 349);
			this->textBox131->Name = L"textBox131";
			this->textBox131->Size = System::Drawing::Size(64, 20);
			this->textBox131->TabIndex = 131;
			// 
			// textBox130
			// 
			this->textBox130->Location = System::Drawing::Point(672, 322);
			this->textBox130->Name = L"textBox130";
			this->textBox130->Size = System::Drawing::Size(68, 20);
			this->textBox130->TabIndex = 130;
			// 
			// textBox129
			// 
			this->textBox129->Location = System::Drawing::Point(597, 322);
			this->textBox129->Name = L"textBox129";
			this->textBox129->Size = System::Drawing::Size(68, 20);
			this->textBox129->TabIndex = 129;
			// 
			// textBox128
			// 
			this->textBox128->Location = System::Drawing::Point(521, 322);
			this->textBox128->Name = L"textBox128";
			this->textBox128->Size = System::Drawing::Size(68, 20);
			this->textBox128->TabIndex = 128;
			// 
			// textBox127
			// 
			this->textBox127->Location = System::Drawing::Point(446, 322);
			this->textBox127->Name = L"textBox127";
			this->textBox127->Size = System::Drawing::Size(68, 20);
			this->textBox127->TabIndex = 127;
			// 
			// textBox126
			// 
			this->textBox126->Location = System::Drawing::Point(371, 322);
			this->textBox126->Name = L"textBox126";
			this->textBox126->Size = System::Drawing::Size(68, 20);
			this->textBox126->TabIndex = 126;
			// 
			// textBox125
			// 
			this->textBox125->Location = System::Drawing::Point(296, 322);
			this->textBox125->Name = L"textBox125";
			this->textBox125->Size = System::Drawing::Size(68, 20);
			this->textBox125->TabIndex = 125;
			// 
			// textBox124
			// 
			this->textBox124->Location = System::Drawing::Point(221, 322);
			this->textBox124->Name = L"textBox124";
			this->textBox124->Size = System::Drawing::Size(68, 20);
			this->textBox124->TabIndex = 124;
			// 
			// textBox123
			// 
			this->textBox123->Location = System::Drawing::Point(145, 322);
			this->textBox123->Name = L"textBox123";
			this->textBox123->Size = System::Drawing::Size(68, 20);
			this->textBox123->TabIndex = 123;
			// 
			// textBox122
			// 
			this->textBox122->Location = System::Drawing::Point(73, 322);
			this->textBox122->Name = L"textBox122";
			this->textBox122->Size = System::Drawing::Size(66, 20);
			this->textBox122->TabIndex = 122;
			// 
			// textBox121
			// 
			this->textBox121->Location = System::Drawing::Point(3, 322);
			this->textBox121->Name = L"textBox121";
			this->textBox121->Size = System::Drawing::Size(64, 20);
			this->textBox121->TabIndex = 121;
			// 
			// textBox120
			// 
			this->textBox120->Location = System::Drawing::Point(672, 296);
			this->textBox120->Name = L"textBox120";
			this->textBox120->Size = System::Drawing::Size(68, 20);
			this->textBox120->TabIndex = 120;
			// 
			// textBox119
			// 
			this->textBox119->Location = System::Drawing::Point(597, 296);
			this->textBox119->Name = L"textBox119";
			this->textBox119->Size = System::Drawing::Size(68, 20);
			this->textBox119->TabIndex = 119;
			// 
			// textBox118
			// 
			this->textBox118->Location = System::Drawing::Point(521, 296);
			this->textBox118->Name = L"textBox118";
			this->textBox118->Size = System::Drawing::Size(68, 20);
			this->textBox118->TabIndex = 118;
			// 
			// textBox117
			// 
			this->textBox117->Location = System::Drawing::Point(446, 296);
			this->textBox117->Name = L"textBox117";
			this->textBox117->Size = System::Drawing::Size(68, 20);
			this->textBox117->TabIndex = 117;
			// 
			// textBox116
			// 
			this->textBox116->Location = System::Drawing::Point(371, 296);
			this->textBox116->Name = L"textBox116";
			this->textBox116->Size = System::Drawing::Size(68, 20);
			this->textBox116->TabIndex = 116;
			// 
			// textBox115
			// 
			this->textBox115->Location = System::Drawing::Point(296, 296);
			this->textBox115->Name = L"textBox115";
			this->textBox115->Size = System::Drawing::Size(68, 20);
			this->textBox115->TabIndex = 115;
			// 
			// textBox114
			// 
			this->textBox114->Location = System::Drawing::Point(221, 296);
			this->textBox114->Name = L"textBox114";
			this->textBox114->Size = System::Drawing::Size(68, 20);
			this->textBox114->TabIndex = 114;
			// 
			// textBox113
			// 
			this->textBox113->Location = System::Drawing::Point(145, 296);
			this->textBox113->Name = L"textBox113";
			this->textBox113->Size = System::Drawing::Size(68, 20);
			this->textBox113->TabIndex = 113;
			// 
			// textBox112
			// 
			this->textBox112->Location = System::Drawing::Point(73, 296);
			this->textBox112->Name = L"textBox112";
			this->textBox112->Size = System::Drawing::Size(66, 20);
			this->textBox112->TabIndex = 112;
			// 
			// textBox111
			// 
			this->textBox111->Location = System::Drawing::Point(3, 296);
			this->textBox111->Name = L"textBox111";
			this->textBox111->Size = System::Drawing::Size(64, 20);
			this->textBox111->TabIndex = 111;
			// 
			// textBox110
			// 
			this->textBox110->Location = System::Drawing::Point(672, 268);
			this->textBox110->Name = L"textBox110";
			this->textBox110->Size = System::Drawing::Size(68, 20);
			this->textBox110->TabIndex = 110;
			// 
			// textBox109
			// 
			this->textBox109->Location = System::Drawing::Point(597, 268);
			this->textBox109->Name = L"textBox109";
			this->textBox109->Size = System::Drawing::Size(68, 20);
			this->textBox109->TabIndex = 109;
			// 
			// textBox108
			// 
			this->textBox108->Location = System::Drawing::Point(521, 268);
			this->textBox108->Name = L"textBox108";
			this->textBox108->Size = System::Drawing::Size(68, 20);
			this->textBox108->TabIndex = 108;
			// 
			// textBox107
			// 
			this->textBox107->Location = System::Drawing::Point(446, 268);
			this->textBox107->Name = L"textBox107";
			this->textBox107->Size = System::Drawing::Size(68, 20);
			this->textBox107->TabIndex = 107;
			// 
			// textBox106
			// 
			this->textBox106->Location = System::Drawing::Point(371, 268);
			this->textBox106->Name = L"textBox106";
			this->textBox106->Size = System::Drawing::Size(68, 20);
			this->textBox106->TabIndex = 106;
			// 
			// textBox105
			// 
			this->textBox105->Location = System::Drawing::Point(296, 268);
			this->textBox105->Name = L"textBox105";
			this->textBox105->Size = System::Drawing::Size(68, 20);
			this->textBox105->TabIndex = 105;
			// 
			// textBox104
			// 
			this->textBox104->Location = System::Drawing::Point(221, 268);
			this->textBox104->Name = L"textBox104";
			this->textBox104->Size = System::Drawing::Size(68, 20);
			this->textBox104->TabIndex = 104;
			// 
			// textBox103
			// 
			this->textBox103->Location = System::Drawing::Point(145, 268);
			this->textBox103->Name = L"textBox103";
			this->textBox103->Size = System::Drawing::Size(68, 20);
			this->textBox103->TabIndex = 103;
			// 
			// textBox102
			// 
			this->textBox102->Location = System::Drawing::Point(73, 268);
			this->textBox102->Name = L"textBox102";
			this->textBox102->Size = System::Drawing::Size(66, 20);
			this->textBox102->TabIndex = 102;
			// 
			// textBox101
			// 
			this->textBox101->Location = System::Drawing::Point(3, 268);
			this->textBox101->Name = L"textBox101";
			this->textBox101->Size = System::Drawing::Size(64, 20);
			this->textBox101->TabIndex = 101;
			// 
			// textBox100
			// 
			this->textBox100->Location = System::Drawing::Point(672, 241);
			this->textBox100->Name = L"textBox100";
			this->textBox100->Size = System::Drawing::Size(68, 20);
			this->textBox100->TabIndex = 100;
			// 
			// textBox99
			// 
			this->textBox99->Location = System::Drawing::Point(597, 241);
			this->textBox99->Name = L"textBox99";
			this->textBox99->Size = System::Drawing::Size(68, 20);
			this->textBox99->TabIndex = 99;
			// 
			// textBox98
			// 
			this->textBox98->Location = System::Drawing::Point(521, 241);
			this->textBox98->Name = L"textBox98";
			this->textBox98->Size = System::Drawing::Size(68, 20);
			this->textBox98->TabIndex = 98;
			// 
			// textBox97
			// 
			this->textBox97->Location = System::Drawing::Point(446, 241);
			this->textBox97->Name = L"textBox97";
			this->textBox97->Size = System::Drawing::Size(68, 20);
			this->textBox97->TabIndex = 97;
			// 
			// textBox96
			// 
			this->textBox96->Location = System::Drawing::Point(371, 241);
			this->textBox96->Name = L"textBox96";
			this->textBox96->Size = System::Drawing::Size(68, 20);
			this->textBox96->TabIndex = 96;
			// 
			// textBox95
			// 
			this->textBox95->Location = System::Drawing::Point(296, 241);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(68, 20);
			this->textBox95->TabIndex = 95;
			// 
			// textBox94
			// 
			this->textBox94->Location = System::Drawing::Point(221, 241);
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(68, 20);
			this->textBox94->TabIndex = 94;
			// 
			// textBox93
			// 
			this->textBox93->Location = System::Drawing::Point(145, 241);
			this->textBox93->Name = L"textBox93";
			this->textBox93->Size = System::Drawing::Size(68, 20);
			this->textBox93->TabIndex = 93;
			// 
			// textBox92
			// 
			this->textBox92->Location = System::Drawing::Point(73, 241);
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(66, 20);
			this->textBox92->TabIndex = 92;
			// 
			// textBox91
			// 
			this->textBox91->Location = System::Drawing::Point(3, 241);
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(64, 20);
			this->textBox91->TabIndex = 91;
			// 
			// textBox90
			// 
			this->textBox90->Location = System::Drawing::Point(672, 216);
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(68, 20);
			this->textBox90->TabIndex = 90;
			// 
			// textBox89
			// 
			this->textBox89->Location = System::Drawing::Point(597, 216);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(68, 20);
			this->textBox89->TabIndex = 89;
			// 
			// textBox88
			// 
			this->textBox88->Location = System::Drawing::Point(521, 216);
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(68, 20);
			this->textBox88->TabIndex = 88;
			// 
			// textBox87
			// 
			this->textBox87->Location = System::Drawing::Point(446, 216);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(68, 20);
			this->textBox87->TabIndex = 87;
			// 
			// textBox86
			// 
			this->textBox86->Location = System::Drawing::Point(371, 216);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(68, 20);
			this->textBox86->TabIndex = 86;
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(296, 216);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(68, 20);
			this->textBox85->TabIndex = 85;
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(221, 216);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(68, 20);
			this->textBox84->TabIndex = 84;
			// 
			// textBox83
			// 
			this->textBox83->Location = System::Drawing::Point(145, 216);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(68, 20);
			this->textBox83->TabIndex = 83;
			// 
			// textBox82
			// 
			this->textBox82->Location = System::Drawing::Point(73, 216);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(66, 20);
			this->textBox82->TabIndex = 82;
			// 
			// textBox81
			// 
			this->textBox81->Location = System::Drawing::Point(3, 216);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(64, 20);
			this->textBox81->TabIndex = 81;
			// 
			// textBox80
			// 
			this->textBox80->Location = System::Drawing::Point(672, 191);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(68, 20);
			this->textBox80->TabIndex = 80;
			// 
			// textBox79
			// 
			this->textBox79->Location = System::Drawing::Point(597, 191);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(68, 20);
			this->textBox79->TabIndex = 79;
			// 
			// textBox78
			// 
			this->textBox78->Location = System::Drawing::Point(521, 191);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(68, 20);
			this->textBox78->TabIndex = 78;
			// 
			// textBox77
			// 
			this->textBox77->Location = System::Drawing::Point(446, 191);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(68, 20);
			this->textBox77->TabIndex = 77;
			// 
			// textBox76
			// 
			this->textBox76->Location = System::Drawing::Point(371, 191);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(68, 20);
			this->textBox76->TabIndex = 76;
			// 
			// textBox74
			// 
			this->textBox74->Location = System::Drawing::Point(221, 191);
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(68, 20);
			this->textBox74->TabIndex = 74;
			// 
			// textBox73
			// 
			this->textBox73->Location = System::Drawing::Point(145, 191);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(68, 20);
			this->textBox73->TabIndex = 73;
			// 
			// textBox72
			// 
			this->textBox72->Location = System::Drawing::Point(73, 191);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(66, 20);
			this->textBox72->TabIndex = 72;
			// 
			// textBox71
			// 
			this->textBox71->Location = System::Drawing::Point(3, 191);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(64, 20);
			this->textBox71->TabIndex = 71;
			// 
			// textBox70
			// 
			this->textBox70->Location = System::Drawing::Point(672, 166);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(68, 20);
			this->textBox70->TabIndex = 70;
			// 
			// textBox69
			// 
			this->textBox69->Location = System::Drawing::Point(597, 166);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(68, 20);
			this->textBox69->TabIndex = 69;
			// 
			// textBox68
			// 
			this->textBox68->Location = System::Drawing::Point(521, 166);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(68, 20);
			this->textBox68->TabIndex = 68;
			// 
			// textBox67
			// 
			this->textBox67->Location = System::Drawing::Point(446, 166);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(68, 20);
			this->textBox67->TabIndex = 67;
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(371, 166);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(68, 20);
			this->textBox66->TabIndex = 66;
			// 
			// textBox65
			// 
			this->textBox65->Location = System::Drawing::Point(296, 166);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(68, 20);
			this->textBox65->TabIndex = 65;
			// 
			// textBox64
			// 
			this->textBox64->Location = System::Drawing::Point(221, 166);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(68, 20);
			this->textBox64->TabIndex = 64;
			// 
			// textBox63
			// 
			this->textBox63->Location = System::Drawing::Point(145, 166);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(68, 20);
			this->textBox63->TabIndex = 63;
			// 
			// textBox62
			// 
			this->textBox62->Location = System::Drawing::Point(73, 166);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(66, 20);
			this->textBox62->TabIndex = 62;
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(3, 166);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(64, 20);
			this->textBox61->TabIndex = 61;
			// 
			// textBox60
			// 
			this->textBox60->Location = System::Drawing::Point(672, 140);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(68, 20);
			this->textBox60->TabIndex = 60;
			// 
			// textBox59
			// 
			this->textBox59->Location = System::Drawing::Point(597, 140);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(68, 20);
			this->textBox59->TabIndex = 59;
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(521, 140);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(68, 20);
			this->textBox58->TabIndex = 58;
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(446, 140);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(68, 20);
			this->textBox57->TabIndex = 57;
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(371, 140);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(68, 20);
			this->textBox56->TabIndex = 56;
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(296, 140);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(68, 20);
			this->textBox55->TabIndex = 55;
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(221, 140);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(68, 20);
			this->textBox54->TabIndex = 54;
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(145, 140);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(68, 20);
			this->textBox53->TabIndex = 53;
			// 
			// textBox52
			// 
			this->textBox52->Location = System::Drawing::Point(73, 140);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(66, 20);
			this->textBox52->TabIndex = 52;
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(672, 112);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(68, 20);
			this->textBox50->TabIndex = 50;
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(597, 112);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(68, 20);
			this->textBox49->TabIndex = 49;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(521, 112);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(68, 20);
			this->textBox48->TabIndex = 48;
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(446, 112);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(68, 20);
			this->textBox47->TabIndex = 47;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(371, 112);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(68, 20);
			this->textBox46->TabIndex = 46;
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(296, 112);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(68, 20);
			this->textBox45->TabIndex = 45;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(221, 112);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(68, 20);
			this->textBox44->TabIndex = 44;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(145, 112);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(68, 20);
			this->textBox43->TabIndex = 43;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(73, 112);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(66, 20);
			this->textBox42->TabIndex = 42;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(3, 112);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(64, 20);
			this->textBox41->TabIndex = 41;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(672, 84);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(68, 20);
			this->textBox40->TabIndex = 40;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(597, 84);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(68, 20);
			this->textBox39->TabIndex = 39;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(521, 84);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(68, 20);
			this->textBox38->TabIndex = 38;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(446, 84);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(68, 20);
			this->textBox37->TabIndex = 37;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(371, 84);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(68, 20);
			this->textBox36->TabIndex = 36;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(296, 84);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(68, 20);
			this->textBox35->TabIndex = 35;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(221, 84);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(68, 20);
			this->textBox34->TabIndex = 34;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(145, 84);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(68, 20);
			this->textBox33->TabIndex = 33;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(73, 84);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(66, 20);
			this->textBox32->TabIndex = 32;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(3, 84);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(64, 20);
			this->textBox31->TabIndex = 31;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(672, 57);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(68, 20);
			this->textBox30->TabIndex = 30;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(597, 57);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(68, 20);
			this->textBox29->TabIndex = 29;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(521, 57);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(68, 20);
			this->textBox28->TabIndex = 28;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(446, 57);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(68, 20);
			this->textBox27->TabIndex = 27;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(371, 57);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(68, 20);
			this->textBox26->TabIndex = 26;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(296, 57);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(68, 20);
			this->textBox25->TabIndex = 25;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(221, 57);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(68, 20);
			this->textBox24->TabIndex = 24;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(145, 57);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(68, 20);
			this->textBox23->TabIndex = 23;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(73, 57);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(66, 20);
			this->textBox22->TabIndex = 22;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(3, 57);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(64, 20);
			this->textBox21->TabIndex = 21;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(672, 30);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(68, 20);
			this->textBox20->TabIndex = 20;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(597, 30);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(68, 20);
			this->textBox19->TabIndex = 19;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(521, 30);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(68, 20);
			this->textBox18->TabIndex = 18;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(446, 30);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(68, 20);
			this->textBox17->TabIndex = 17;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(371, 30);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(68, 20);
			this->textBox16->TabIndex = 16;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(296, 30);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(68, 20);
			this->textBox15->TabIndex = 15;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(221, 30);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(68, 20);
			this->textBox14->TabIndex = 14;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(145, 30);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(68, 20);
			this->textBox13->TabIndex = 13;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(73, 30);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(66, 20);
			this->textBox12->TabIndex = 12;
			// 
			// textBox51
			// 
			this->textBox51->Location = System::Drawing::Point(296, 191);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(68, 20);
			this->textBox51->TabIndex = 51;
			// 
			// textBox75
			// 
			this->textBox75->Location = System::Drawing::Point(3, 140);
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(64, 20);
			this->textBox75->TabIndex = 75;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(64, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(3, 30);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(64, 20);
			this->textBox11->TabIndex = 11;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(672, 3);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(68, 20);
			this->textBox10->TabIndex = 10;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(597, 3);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(68, 20);
			this->textBox9->TabIndex = 9;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(521, 3);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(68, 20);
			this->textBox8->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(446, 3);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(68, 20);
			this->textBox7->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(371, 3);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(68, 20);
			this->textBox6->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(296, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(68, 20);
			this->textBox5->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(221, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(145, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 29);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Operar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SeaGreen;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(835, 49);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(147, 476);
			this->panel2->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(994, 539);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1000, 900);
			this->MinimumSize = System::Drawing::Size(845, 568);
			this->Name = L"Form1";
			this->Text = L"Celdas_Excel";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

            

			 System::String ^ty = (""+this->textBox1->Text->ToString()+"");

             if(ty->IsNullOrEmpty(ty))
				 MessageBox::Show("La celda esta vacia","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);


			 if(ty->Length <=10 && !ty->IsNullOrEmpty(ty))
             {
                int Num = Convert::ToInt32(ty,10);

				this->textBox2->Text = (""+Num+"");;
			 }


             if(ty->Length >10 )
			     MessageBox::Show("Solo acepta hasta diez caracteres","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 
}
private: System::Void salirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result;

			 result=MessageBox::Show("¿Seguro que desea salir?","Advertencia",MessageBoxButtons::YesNo,MessageBoxIcon::Warning);
				 if(result==System::Windows::Forms::DialogResult::Yes){
				   exit(0); 
				 }
		     
                   

}

 
};
}

