#ifndef _STUDENTCONSOLE_H
#define _STUDENTCONSOLE_H

#include "Student.h"
#include "sqlite3.h"
#include <iostream>

class StudentConsole : public Student {
private:
	static bool isSave_;
	static std::string fname_;
	static sqlite3 *db;
public:
	StudentConsole();
	StudentConsole(Student * student);
	~StudentConsole();
protected:
	int Menu_console();
	int FindMenu_console();
	int SortListMenu_console();
	int DeleteMenu_console();
	int SaveMenu_console();
	int EditMenu_console();

	void AddStudent_console();
	void ViewList_console();
	void SortList_console();
	void Find_console();
	void Delete_console();
	void Edit_console();
	void PrintErrorList(Student * &error, std::string &fname);
public:
	void Save_console();
	void AddList_console();
	void AddList_console(char * path);
	void OpenList_console();
	void OpenList_console(char * path);
	void CloseList_console();
	void conndb();
	void closedb();
	void SqlImportData();
	void SqlExportData();
public :
	void start_console();
};

#endif // _STUDENTCONSOLE_H