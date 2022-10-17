using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab3.Control
{
    public partial class UserControl1 : UserControl
    {
        public string name
        {
            get { return textBox1.Text; }
            set { textBox1.Text = value; }
        }
        public string last_name
        {
            get { return textBox2.Text; }
            set { textBox2.Text = value; }
        }
        public string second_name
        {
            get { return textBox3.Text; }
            set { textBox3.Text = value; }
        }
        public int age
        {
            get { return int.Parse(textBox4.Text); }
            set { textBox4.Text = value.ToString(); }
        }


        public UserControl1()
        {
            InitializeComponent();
        }

        private void textBox1_Validating(object sender, CancelEventArgs e)
        {


        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            name = textBox1.Text;
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            last_name = textBox2.Text;
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            second_name = textBox3.Text;
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {

        }

        private void textBox2_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
                MessageBox.Show("Поле 'Имя' не может содержать цифры");
            }
        }

        private void textBox3_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
                MessageBox.Show("Поле 'Отчество' не может содержать цифры");
            }
        }
        private void textBox1_KeyPress_1(object sender, KeyPressEventArgs e)
        {
            if (char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
                MessageBox.Show("Поле 'Фамилия' не может содержать цифры");
            }
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {
        }

        private void textBox4_Validating(object sender, CancelEventArgs e)
        {
            if(age<0)
            {
                MessageBox.Show("Возраст не может быть отрицательным");
                textBox4.Clear();
            }
            if (age > 105)
            {
                MessageBox.Show("Возраст таким не может быть :)");
                textBox4.Clear();
            }
        }
    

        private void textBox4_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
                MessageBox.Show("Поле 'Возраст' не может содержать буквы и иные символы");
                textBox4.Clear();
            }
        }
    }
}
