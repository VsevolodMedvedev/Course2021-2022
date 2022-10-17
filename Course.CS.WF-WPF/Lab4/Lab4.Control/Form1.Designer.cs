namespace Lab4.Control
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.buttonF1 = new System.Windows.Forms.Button();
            this.labelF2 = new System.Windows.Forms.Label();
            this.richTextBox1 = new System.Windows.Forms.RichTextBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(35, 22);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(202, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Значения функции sin(x) на интервале:";
            // 
            // buttonF1
            // 
            this.buttonF1.Location = new System.Drawing.Point(208, 84);
            this.buttonF1.Name = "buttonF1";
            this.buttonF1.Size = new System.Drawing.Size(75, 69);
            this.buttonF1.TabIndex = 2;
            this.buttonF1.Text = "Задать интервал";
            this.buttonF1.UseVisualStyleBackColor = true;
            this.buttonF1.Click += new System.EventHandler(this.buttonF1_Click);
            // 
            // labelF2
            // 
            this.labelF2.AutoSize = true;
            this.labelF2.Location = new System.Drawing.Point(35, 55);
            this.labelF2.Name = "labelF2";
            this.labelF2.Size = new System.Drawing.Size(35, 13);
            this.labelF2.TabIndex = 3;
            this.labelF2.Text = "label2";
            // 
            // richTextBox1
            // 
            this.richTextBox1.Location = new System.Drawing.Point(27, 84);
            this.richTextBox1.Name = "richTextBox1";
            this.richTextBox1.Size = new System.Drawing.Size(175, 249);
            this.richTextBox1.TabIndex = 5;
            this.richTextBox1.Text = "";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(328, 357);
            this.Controls.Add(this.richTextBox1);
            this.Controls.Add(this.labelF2);
            this.Controls.Add(this.buttonF1);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "sin(x)";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button buttonF1;
        private System.Windows.Forms.Label labelF2;
        private System.Windows.Forms.RichTextBox richTextBox1;
    }
}

