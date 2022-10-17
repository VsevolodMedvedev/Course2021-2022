<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="PageBestStudent.aspx.cs" Inherits="ITMO.ASP.Exam.PageBestStudent" MasterPageFile="~/Site.master"%>

<asp:Content ID="MainContent" 
    ContentPlaceHolderID="ContentPlaceHolder1" runat="server"> 
    <div>
        <h2>5 лучших студентов</h2>
            <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataSourceID="SqlDataSource1">
            <Columns>
                <asp:BoundField DataField="FirstName" HeaderText="Имя" SortExpression="FirstName" />
                <asp:BoundField DataField="SecondName" HeaderText="Фамилия" SortExpression="SecondName" />
                <asp:BoundField DataField="Group" HeaderText="Группа" SortExpression="Group" />
                <asp:BoundField DataField="FinalScore" HeaderText="Общий балл" SortExpression="FinalScore" />
                
            </Columns>
            </asp:GridView>
            <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:всеволод-key.StudentControlDB %>" 
                SelectCommand="SELECT TOP (5) [FirstName], [SecondName], [Group], [FinalScore] FROM [StudentsTable] ORDER BY [FinalScore] DESC"></asp:SqlDataSource>
        
    </div>
</asp:Content>

