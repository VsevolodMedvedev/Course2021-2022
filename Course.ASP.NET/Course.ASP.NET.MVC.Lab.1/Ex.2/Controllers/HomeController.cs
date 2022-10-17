using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace WebMVCR1.Controllers
{
    public class MyController : Controller
    {
        //GET: Home
        /*   public ActionResult Index()
           {
               return View();
           }
        */

        public string Index(string hel)
        {
            int hour = DateTime.Now.Hour;
            string Greeting = hour < 12 ? "Доброе утро" : "Добрый день" + ", " + hel;
            return Greeting;
        }

        public string Start()
        {
            int hour = DateTime.Now.Hour;
            string Greeting = hour < 12 ? "Доброе утро" : "Добрый день";
            return Greeting;
        }
    
    
    }
}