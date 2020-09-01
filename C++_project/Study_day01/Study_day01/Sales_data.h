#ifdef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
using std::string;
struct Sales_data {
	string bookNo;//书的编号
	unsigned units_sold = 0;
	double revenue = 0.0;//内部的变量
};
#endif