using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {
       
        
        
        
        public double a
        {
            get { return double.Parse(textBoxA.Text); }
            set { textBoxA.Text = value.ToString(); }
        }
        public double b
        {
            get { return double.Parse(textBoxB.Text); }
            set { textBoxB.Text = value.ToString(); }
        }
        public double c
        {
            get { return double.Parse(textBoxC.Text); }
            set { textBoxC.Text = value.ToString(); }
        }


        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBoxA_KeyPress(object sender, KeyPressEventArgs e)
        {
            
            if (e.KeyChar == '.')
            {
                e.KeyChar = ',';
            }


        }

        private void textBoxB_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == '.')
            {
                e.KeyChar = ',';
            }
        }

        private void textBoxC_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == '.')
            {
                e.KeyChar = ',';
            }
        }

        private void textBoxA_Validating(object sender, CancelEventArgs e)
        {
            if (textBoxA.Text == "")
            {
                e.Cancel = true;
               // MessageBox.Show(this, "Пустое поле");
            }
            else
            {
                try
                {
                    double.Parse(textBoxA.Text);
                    e.Cancel = false;
                }
                catch
                {
                    e.Cancel = true;
                   // MessageBox.Show(this, "Недопустимые символы");
                }
            }
        }

        private void textBoxB_Validating(object sender, CancelEventArgs e)
        {
            if (textBoxB.Text == "")
            {
                e.Cancel = true;
                //MessageBox.Show("Пустое поле");
            }
            else
            {
                try
                {
                    double.Parse(textBoxB.Text);
                    e.Cancel = false;
                }
                catch
                {
                    e.Cancel = true;
                   // MessageBox.Show("Недопустимые символы");
                }
            }
        }

        private void textBoxC_Validating(object sender, CancelEventArgs e)
        {
            if (textBoxC.Text == "")
            {
                e.Cancel = true;
                //MessageBox.Show("Пустое поле");
            }
            else
            {
                try
                {
                    double.Parse(textBoxC.Text);
                    e.Cancel = false;
                }
                catch
                {
                    e.Cancel = true;
                   // MessageBox.Show("Недопустимые символы");
                }
            }
        }
    }
}
