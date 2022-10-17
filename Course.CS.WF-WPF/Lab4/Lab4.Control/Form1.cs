using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab4.Control
{
    public partial class Form1 : Form
    {
        Sinus s = new Sinus();

        public Form1()
        {
            InitializeComponent();
        }

        private void buttonF1_Click(object sender, EventArgs e)
        {
            this.richTextBox1.Clear();
            s.txtClear();

            FormRange formRange = new FormRange();
            if (formRange.ShowDialog() != DialogResult.OK)
                return;

            s.x1 = double.Parse(formRange.x1);
            s.x2 = double.Parse(formRange.x2);

            labelF2.Text = "Левая граница: " + formRange.x1 + ", правая граница: " + formRange.x2;          

            this.richTextBox1.Text = s.showResult();

        }
    }
}
