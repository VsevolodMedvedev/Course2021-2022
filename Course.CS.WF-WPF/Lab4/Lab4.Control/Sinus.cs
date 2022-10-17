using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab4.Control
{
    public class Sinus
    {
        public double x1;
        public double x2;
        public double y;
        public string text ="x\tsin(x)";

        public double setSin(double x)
        {
            y = Math.Sin(x);
            return Math.Round(y, 2);
        }

        public string showResult()
        {
            for(double i = x1; i <= x2; i +=0.1)
            {
                text += "\n"+i+"\t"+Convert.ToString(setSin(i));
            }
            return text;
        }

        public void txtClear()
        {
           this.text = "x\tsin(x)";
        }

        
    }
}
