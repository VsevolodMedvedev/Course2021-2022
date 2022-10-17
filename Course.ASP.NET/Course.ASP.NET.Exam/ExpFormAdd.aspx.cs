using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace ITMO.ASP.Exam
{
    public partial class ExpFormAdd : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }
        
        protected void Button1_Click(object sender, EventArgs e)
        {

            int tempOne = 0;
            int tempTwo = 0;
            int tempThree = 0;
            int final = 0;

            StudentsDBDataContext db = new StudentsDBDataContext();

            if (!Int32.TryParse(firstScore.Text, out tempOne))
                return;
            if (!Int32.TryParse(secondScore.Text, out tempTwo))
                return;
            if (!Int32.TryParse(thirdScore.Text, out tempThree))
                return;
            final = tempOne + tempTwo + tempThree;

            StudentsTable stud = new StudentsTable(firstName.Text, lastName.Text, group.Text, tempOne, tempTwo, tempThree, final);
            
            db.StudentsTable.InsertOnSubmit(stud);
            db.SubmitChanges();
            Response.Redirect("AddIsComplete.aspx");

        }

       
    }
}