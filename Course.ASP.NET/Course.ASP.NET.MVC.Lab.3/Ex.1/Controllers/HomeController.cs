using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using WebMVCR1.Models;


namespace WebMVCR1.Controllers
{
    public class HomeController : Controller
    {
        //GET: Home
           public ViewResult Index()
           {
            int hour = DateTime.Now.Hour;
            ViewBag.Greeting = hour < 12 ? "Доброе утро" : "Добрый день";
            ViewData["Mes"] = "хорошего настроения!";
            return View();
           }
        

        /*
            public string Index(string hel)
        {
            string Greeting = ModelClass.ModelHello() + ", " + hel;
            return Greeting;
        }
        */

        public string Start()
        {
            int hour = DateTime.Now.Hour;
            string Greeting = hour < 12 ? "Доброе утро" : "Добрый день";
            return Greeting;
        }

        [HttpGet]
        public ViewResult InputData(Person p)
        {
            return View("Hello", p);
        }


    }
}