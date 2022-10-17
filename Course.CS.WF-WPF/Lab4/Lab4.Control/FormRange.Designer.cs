namespace Lab4.Control
{
    partial class FormRange
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.textBoxF21 = new System.Windows.Forms.TextBox();
            this.textBoxF22 = new System.Windows.Forms.TextBox();
            this.buttonF21 = new System.Windows.Forms.Button();
            this.buttonF22 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(33, 28);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(107, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Границы интервала";
            // 
            // textBoxF21
            // 
            this.textBoxF21.Location = new System.Drawing.Point(36, 69);
            this.textBoxF21.Name = "textBoxF21";
            this.textBoxF21.Size = new System.Drawing.Size(100, 20);
            this.textBoxF21.TabIndex = 1;
            this.textBoxF21.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.textBoxF21_KeyPress);
            this.textBoxF21.Validating += new System.ComponentModel.CancelEventHandler(this.textBoxF21_Validating);
            // 
            // textBoxF22
            // 
            this.textBoxF22.Location = new System.Drawing.Point(185, 69);
            this.textBoxF22.Name = "textBoxF22";
            this.textBoxF22.Size = new System.Drawing.Size(100, 20);
            this.textBoxF22.TabIndex = 2;
            this.textBoxF22.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.textBoxF22_KeyPress);
            this.textBoxF22.Validating += new System.ComponentModel.CancelEventHandler(this.textBoxF22_Validating);
            // 
            // buttonF21
            // 
            this.buttonF21.DialogResult = System.Windows.Forms.DialogResult.OK;
            this.buttonF21.Location = new System.Drawing.Point(53, 128);
            this.buttonF21.Name = "buttonF21";
            this.buttonF21.Size = new System.Drawing.Size(75, 23);
            this.buttonF21.TabIndex = 3;
            this.buttonF21.Text = "Ок";
            this.buttonF21.UseVisualStyleBackColor = true;
            this.buttonF21.Click += new System.EventHandler(this.buttonF21_Click);
            // 
            // buttonF22
            // 
            this.buttonF22.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.buttonF22.Location = new System.Drawing.Point(197, 128);
            this.buttonF22.Name = "buttonF22";
            this.buttonF22.Size = new System.Drawing.Size(75, 23);
            this.buttonF22.TabIndex = 4;
            this.buttonF22.Text = "Отмена";
            this.buttonF22.UseVisualStyleBackColor = true;
            // 
            // FormRange
            // 
            this.AcceptButton = this.buttonF21;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(320, 216);
            this.Controls.Add(this.buttonF22);
            this.Controls.Add(this.buttonF21);
            this.Controls.Add(this.textBoxF22);
            this.Controls.Add(this.textBoxF21);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Name = "FormRange";
            this.ShowInTaskbar = false;
            this.Text = "FormRange";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textBoxF21;
        private System.Windows.Forms.TextBox textBoxF22;
        private System.Windows.Forms.Button buttonF21;
        private System.Windows.Forms.Button buttonF22;
    }
}