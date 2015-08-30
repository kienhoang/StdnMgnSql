#ifndef _STRINGPROCESS_H
#define _STRINGPROCESS_H

#include <string.h>
#include <string>
#include <stdlib.h>

void Trim_left(std::string &c);
void Trim_right(std::string &c);
void Trim(std::string &c);
void ToLowerString(std::string &c);
void UpcaseFirstSpace(std::string &c);
void NameProcess(std::string &c);
int StringToInt(std::string &s);
bool IsIn(std::string &str, std::string &substr);
bool IsIn(const std::string &str,const std::string &substr);
void Seperate(std::string &name,std::string &firstname,std::string &lastname);
std::string CharToString(char ch[]);
char * StringToChar(std::string &str);
std::string IntToString(int i);

#endif // _STRINGPROCESS_H
