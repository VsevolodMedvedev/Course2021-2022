﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CreatingDataTable
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private DataTable CustomersTable = new DataTable("Customers");

        private void Form1_Load(object sender, EventArgs e)
        {
            TableGrid.DataSource = CustomersTable;
            CustomersTable.Columns.Add("CustomerID", Type.GetType("System.String"));
            CustomersTable.Columns.Add("CompanyName", Type.GetType("System.String"));
            CustomersTable.Columns.Add("ContactName", Type.GetType("System.String"));
            CustomersTable.Columns.Add("ContactTitle", Type.GetType("System.String"));
            CustomersTable.Columns.Add("Address", Type.GetType("System.String"));
            CustomersTable.Columns.Add("City", Type.GetType("System.String"));
            CustomersTable.Columns.Add("Country", Type.GetType("System.String"));
            CustomersTable.Columns.Add("Phone", Type.GetType("System.String"));
            CustomersTable.Columns.Add("Phone #2", Type.GetType("System.String"));

            /*DataColumn[] KeyColumns = new DataColumn[1];
            KeyColumns[0] = CustomersTable.Columns["CustomerID"];
            CustomersTable.PrimaryKey = KeyColumns;*/
            CustomersTable.Columns["CustomerID"].AllowDBNull = false;
            CustomersTable.Columns["CompanyName"].AllowDBNull = false;


        }

        private void CreatingDataTable_Click(object sender, EventArgs e)
        {
            DataRow CustRow = CustomersTable.NewRow();
            Object[] CustRecord =  {"1", "ALFKI", "Alfreds Futterkiste",
                "Sales Representative", "Obere Str. 57", "Berlin",
                   "Germany", "030-0074321", "89217914844"};
            CustRow.ItemArray = CustRecord;
            try
            {
                CustomersTable.Rows.Add(CustRow);
            }
            catch (InvalidCastException exept)
            {
                Console.WriteLine("Error:", exept.Message);
            }

        }
    }
}
