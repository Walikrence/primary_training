#include "Date.hpp"
using namespace std;

Date::Date(){
  m_year      =   0;
  m_month     =   0;
  m_day       =   0;
  m_hour      =   0;
  m_minute    =   0;
}

Date::Date(int t_year, int t_month, int t_day, int t_hour, int t_minute){
  m_year    =   t_year;
  m_month   =   t_month;
  m_day     =   t_day;
  m_hour    =   t_hour;
  m_minute  =   t_minute;
}

Date::Date(string dateString){
  string s = dateString;
  m_year	  =	 (int)(s[0]-48)*1000+(int)(s[1]-48)*100+(int)(s[2]-48)*10+(int)(s[3]-48);
  m_month   =	 (int)(s[5]-48)*10+(int)(s[6]-48);
  m_day   	=	 (int)(s[8]-48)*10+(int)(s[9]-48);
  m_hour  	=	 (int)(s[11]-48)*10+(int)(s[12]-48);
  m_minute	=	 (int)(s[14]-48)*10+(int)(s[15]-48);
//判断等待补充
}
