<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="ExpFormAdd.aspx.cs" Inherits="ITMO.ASP.Exam.ExpFormAdd" MasterPageFile="~/Site.master" UnobtrusiveValidationMode ="None"%>

<asp:Content ID="MainContent" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
             
            <div>   
                <p>Внесите информацию о студенте:</p> 
            </div> 

            
    <div> 
                <label style="width: 150px">Имя:</label>
                <asp:TextBox ID="firstName" runat="server"></asp:TextBox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server"
                ControlToValidate="firstName"
                ErrorMessage="Заполните поле имени"                
                ForeColor="Red">Не оставляйте поле пустым
            </asp:RequiredFieldValidator>
            </div> 
    
    
    <div> 
                <label style="width: 150px">Фамилия:</label>
                <asp:TextBox ID="lastName" runat="server"></asp:TextBox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server"
                ControlToValidate="lastName"
                ErrorMessage="Заполните поле фамилии"                
                ForeColor="Red">Не оставляйте поле пустым
            </asp:RequiredFieldValidator>
            </div> 

            

            <div> 
                <label style="width: 150px">Группа:</label>
                <asp:TextBox ID="group" runat="server"></asp:TextBox> 
                <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server"
                ControlToValidate="group"
                ErrorMessage="Заполните поле группы"                
                ForeColor="Red">Не оставляйте поле пустым
            </asp:RequiredFieldValidator>
            </div> 

            <br />
            <br />
            <div> Внесите оценки студента по курсу "Введение в инновационные информации":</div>
            <br />

            <div> 
                <label style="width: 150px">Задание №1:</label>
                <asp:TextBox ID="firstScore" runat="server" Width="24px"></asp:TextBox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" 
                ControlToValidate="firstScore" 
                ErrorMessage="Заполните поле отметки студента" 
                ForeColor="Red">Не оставляйте поле пустым
            </asp:RequiredFieldValidator>
                <br />

                <label style="width: 150px">Задание №2:</label>
                <asp:TextBox ID="secondScore" runat="server" Width="24px"></asp:TextBox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator6" runat="server" 
                ControlToValidate="secondScore" 
                ErrorMessage="Заполните поле отметки студента" 
                ForeColor="Red">Не оставляйте поле пустым
            </asp:RequiredFieldValidator>
                <br />

                <label style="width: 150px">Задание №3:</label>
                <asp:TextBox ID="thirdScore" runat="server" Width="24px"></asp:TextBox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator7" runat="server" 
                ControlToValidate="thirdScore" 
                ErrorMessage="Заполните поле отметки студента" 
                ForeColor="Red">Не оставляйте поле пустым
            </asp:RequiredFieldValidator>
            </div>

            <br />
            <div>
                <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Добавить" />
            </div>


</asp:Content>