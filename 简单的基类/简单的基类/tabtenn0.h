#pragma once
//tabtenn0.h -- a table-tennis bass class
#ifndef TABTENN_H_
#define TABTENN_H_
#include <string>
using std::string;
//simple bass class
class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string &fn ="none" , const string &ln = "none",bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }
	~TableTennisPlayer();
};
#endif

