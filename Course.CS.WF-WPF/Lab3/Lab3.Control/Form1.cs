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
    public partial class Form1 : Form
    {
        List<string> list1 = new List<string>();
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.Refresh();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.richTextBox1.Clear();
            Person p = new Person(userControl12.last_name, userControl12.name, userControl12.second_name, userControl12.age);
            richTextBox1.AppendText(p.ShowTxt());
        }
    }
}
