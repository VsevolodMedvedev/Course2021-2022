<%@ Page Language="C#" AutoEventWireup="true" 
    CodeBehind="PageAllStudent.aspx.cs" 
    Inherits="ITMO.ASP.Exam.PageAllStudent"
       MasterPageFile="~/Site.master"%>

<asp:Content ID="MainContent" 
    ContentPlaceHolderID="ContentPlaceHolder1" runat="server"> 
    <div>
        <h2>Список студентов</h2>
            <div class="auto-style3">
            <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataKeyNames="StudentID" DataSourceID="SqlDataSource1">
            <Columns>
                <asp:BoundField DataField="FirstName" HeaderText="Имя" SortExpression="FirstName" />
                <asp:BoundField DataField="SecondName" HeaderText="Фамилия" SortExpression="SecondName" />
                <asp:BoundField DataField="Group" HeaderText="Группа" SortExpression="Group" />
                <asp:BoundField DataField="FirstScore" HeaderText="Оценка №1" SortExpression="FirstScore" />
                <asp:BoundField DataField="SecondScore" HeaderText="Оценка №2" SortExpression="SecondScore" />
                <asp:BoundField DataField="ThirdScore" HeaderText="Оценка №3" SortExpression="ThirdScore" />
            </Columns>
            </asp:GridView>
            </div>
            <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:всеволод-key.StudentControlDB %>" SelectCommand="SELECT [StudentID], [FirstName], [SecondName], [Group], [FirstScore], [SecondScore], [ThirdScore] FROM [StudentsTable] ORDER BY [StudentID]"></asp:SqlDataSource>
        
    </div>
</asp:Content>