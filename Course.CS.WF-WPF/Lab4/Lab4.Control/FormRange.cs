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
    public partial class FormRange : Form
    {
        Sinus s;
        public string x1
        {
            get { return textBoxF21.Text; }
            set { textBoxF21.Text = value; }
        }
        public string x2
        {
            get { return textBoxF22.Text; }
            set { textBoxF22.Text = value; }
        }

        public FormRange()
        {
            InitializeComponent();
        }


        private void textBoxF21_Validating(object sender, CancelEventArgs e)
        {
            if (textBoxF21.Text == "")
            {
                    e.Cancel = false;
                MessageBox.Show("Пустое поле");
            }
            else
            {
                try
                {
                    double.Parse(textBoxF21.Text);
                    e.Cancel = false;
                }
                catch
                {
                    e.Cancel = true;
                    MessageBox.Show("Недопустимые символы");
                }
            }
        }

        private void textBoxF22_Validating(object sender, CancelEventArgs e)
        {
            if (textBoxF22.Text == "")
            {
                e.Cancel = false;
                MessageBox.Show("Пустое поле");
            }
            else
            {
                try
                {
                    double.Parse(textBoxF22.Text);
                    e.Cancel = false;
                }
                catch
                {
                    e.Cancel = true;
                    MessageBox.Show("Недопустимые символы");
                }
            }
        }
  
        private void buttonF21_Click(object sender, EventArgs e)
        {
        }

        private void textBoxF21_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == '.')
            {
                e.KeyChar = ',';
            }
        }

        private void textBoxF22_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == '.')
            {
                e.KeyChar = ',';
            }
        }
    }
}
