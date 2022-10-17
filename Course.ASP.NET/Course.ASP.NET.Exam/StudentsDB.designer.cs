﻿#pragma warning disable 1591
//------------------------------------------------------------------------------
// <auto-generated>
//     Этот код создан программой.
//     Исполняемая версия:4.0.30319.42000
//
//     Изменения в этом файле могут привести к неправильной работе и будут потеряны в случае
//     повторной генерации кода.
// </auto-generated>
//------------------------------------------------------------------------------

namespace ITMO.ASP.Exam
{
	using System.Data.Linq;
	using System.Data.Linq.Mapping;
	using System.Data;
	using System.Collections.Generic;
	using System.Reflection;
	using System.Linq;
	using System.Linq.Expressions;
	using System.ComponentModel;
	using System;
	
	
	[global::System.Data.Linq.Mapping.DatabaseAttribute(Name="StudentConlrolDB")]
	public partial class StudentsDBDataContext : System.Data.Linq.DataContext
	{
		
		private static System.Data.Linq.Mapping.MappingSource mappingSource = new AttributeMappingSource();
		
    #region Определения метода расширяемости
    partial void OnCreated();
    partial void InsertStudentsTable(StudentsTable instance);
    partial void UpdateStudentsTable(StudentsTable instance);
    partial void DeleteStudentsTable(StudentsTable instance);
    #endregion
		
		public StudentsDBDataContext() : 
				base(global::System.Configuration.ConfigurationManager.ConnectionStrings["StudentConlrolDBConnectionString"].ConnectionString, mappingSource)
		{
			OnCreated();
		}
		
		public StudentsDBDataContext(string connection) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public StudentsDBDataContext(System.Data.IDbConnection connection) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public StudentsDBDataContext(string connection, System.Data.Linq.Mapping.MappingSource mappingSource) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public StudentsDBDataContext(System.Data.IDbConnection connection, System.Data.Linq.Mapping.MappingSource mappingSource) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public System.Data.Linq.Table<StudentsTable> StudentsTable
		{
			get
			{
				return this.GetTable<StudentsTable>();
			}
		}
	}
	
	[global::System.Data.Linq.Mapping.TableAttribute(Name="dbo.StudentsTable")]
	public partial class StudentsTable : INotifyPropertyChanging, INotifyPropertyChanged
	{
		
		private static PropertyChangingEventArgs emptyChangingEventArgs = new PropertyChangingEventArgs(String.Empty);
		
		private int _StudentID;
		
		private string _FirstName;
		
		private string _SecondName;
		
		private string _Group;
		
		private System.Nullable<int> _FirstScore;
		
		private System.Nullable<int> _SecondScore;
		
		private System.Nullable<int> _ThirdScore;
		
		private System.Nullable<int> _FinalScore;
		
    #region Определения метода расширяемости
    partial void OnLoaded();
    partial void OnValidate(System.Data.Linq.ChangeAction action);
    partial void OnCreated();
    partial void OnStudentIDChanging(int value);
    partial void OnStudentIDChanged();
    partial void OnFirstNameChanging(string value);
    partial void OnFirstNameChanged();
    partial void OnSecondNameChanging(string value);
    partial void OnSecondNameChanged();
    partial void OnGroupChanging(string value);
    partial void OnGroupChanged();
    partial void OnFirstScoreChanging(System.Nullable<int> value);
    partial void OnFirstScoreChanged();
    partial void OnSecondScoreChanging(System.Nullable<int> value);
    partial void OnSecondScoreChanged();
    partial void OnThirdScoreChanging(System.Nullable<int> value);
    partial void OnThirdScoreChanged();
    partial void OnFinalScoreChanging(System.Nullable<int> value);
    partial void OnFinalScoreChanged();
    #endregion
		
		public StudentsTable()
		{
			OnCreated();
		}

		public StudentsTable(string firstName, string secondName, string group, int firstScore, int secondScore, int thirdScore, int finalScore)
		{
			_FirstName = firstName;
			_SecondName = secondName;
			_Group = group;
			_FirstScore = firstScore;
			_SecondScore = secondScore;
			_ThirdScore = thirdScore;
			_FinalScore = finalScore;
		}

		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_StudentID", AutoSync=AutoSync.OnInsert, DbType="Int NOT NULL IDENTITY", IsPrimaryKey=true, IsDbGenerated=true)]
		public int StudentID
		{
			get
			{
				return this._StudentID;
			}
			set
			{
				if ((this._StudentID != value))
				{
					this.OnStudentIDChanging(value);
					this.SendPropertyChanging();
					this._StudentID = value;
					this.SendPropertyChanged("StudentID");
					this.OnStudentIDChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_FirstName", DbType="NVarChar(50)")]
		public string FirstName
		{
			get
			{
				return this._FirstName;
			}
			set
			{
				if ((this._FirstName != value))
				{
					this.OnFirstNameChanging(value);
					this.SendPropertyChanging();
					this._FirstName = value;
					this.SendPropertyChanged("FirstName");
					this.OnFirstNameChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_SecondName", DbType="NVarChar(50)")]
		public string SecondName
		{
			get
			{
				return this._SecondName;
			}
			set
			{
				if ((this._SecondName != value))
				{
					this.OnSecondNameChanging(value);
					this.SendPropertyChanging();
					this._SecondName = value;
					this.SendPropertyChanged("SecondName");
					this.OnSecondNameChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Name="[Group]", Storage="_Group", DbType="NChar(10)")]
		public string Group
		{
			get
			{
				return this._Group;
			}
			set
			{
				if ((this._Group != value))
				{
					this.OnGroupChanging(value);
					this.SendPropertyChanging();
					this._Group = value;
					this.SendPropertyChanged("Group");
					this.OnGroupChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_FirstScore", DbType="Int")]
		public System.Nullable<int> FirstScore
		{
			get
			{
				return this._FirstScore;
			}
			set
			{
				if ((this._FirstScore != value))
				{
					this.OnFirstScoreChanging(value);
					this.SendPropertyChanging();
					this._FirstScore = value;
					this.SendPropertyChanged("FirstScore");
					this.OnFirstScoreChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_SecondScore", DbType="Int")]
		public System.Nullable<int> SecondScore
		{
			get
			{
				return this._SecondScore;
			}
			set
			{
				if ((this._SecondScore != value))
				{
					this.OnSecondScoreChanging(value);
					this.SendPropertyChanging();
					this._SecondScore = value;
					this.SendPropertyChanged("SecondScore");
					this.OnSecondScoreChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_ThirdScore", DbType="Int")]
		public System.Nullable<int> ThirdScore
		{
			get
			{
				return this._ThirdScore;
			}
			set
			{
				if ((this._ThirdScore != value))
				{
					this.OnThirdScoreChanging(value);
					this.SendPropertyChanging();
					this._ThirdScore = value;
					this.SendPropertyChanged("ThirdScore");
					this.OnThirdScoreChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_FinalScore", DbType="Int")]
		public System.Nullable<int> FinalScore
		{
			get
			{
				return this._FinalScore;
			}
			set
			{
				if ((this._FinalScore != value))
				{
					this.OnFinalScoreChanging(value);
					this.SendPropertyChanging();
					this._FinalScore = value;
					this.SendPropertyChanged("FinalScore");
					this.OnFinalScoreChanged();
				}
			}
		}
		
		public event PropertyChangingEventHandler PropertyChanging;
		
		public event PropertyChangedEventHandler PropertyChanged;
		
		protected virtual void SendPropertyChanging()
		{
			if ((this.PropertyChanging != null))
			{
				this.PropertyChanging(this, emptyChangingEventArgs);
			}
		}
		
		protected virtual void SendPropertyChanged(String propertyName)
		{
			if ((this.PropertyChanged != null))
			{
				this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
			}
		}
	}
}
#pragma warning restore 1591
