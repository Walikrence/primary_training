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

int Date::getYear(void) const{
  return m_year;
}

void Date::setYear(const int t_year) {
  m_year  =   t_year;
}

int Date::getMonth(void) const{
  return m_month;
}

void Date::setMonth(const int t_month) {
  m_month   =   t_month;
}

int Date::getDay(void) const{
  return m_day;
}

void Date::setDay(const int t_day) {
  m_day   =   t_day;
}

int Date::getHour(void) const{
  return m_hour;
}

void Date::setHour(const int t_hour) {
  m_hour  =   t_hour;
}

int Date::getMinute(void) const{
  return m_minute;
}

void Date::setMinute(const int t_minute) {
  m_minute   =   t_minute;
}

bool isValid(const Date t_date){
  year    =   t_date.m_year;
  month   =   t_date.m_month;
  day     =   t_date.m_day;
  hour    =   t_date.m_hour;
  minute  =   t_date.m_minute;
  //年份检查
  if (  (year > 9999)  || (year < 1000) ) {
    return false;
  }
  //月份检查
  if (  (month > 12)  ||  (month < 1) ) {
    return false;
  }
  //日期检查
  if (  (day > 31)  ||  (day < 1) ) {
    return false;
  }
  //时检查
  if (  (hour > 24) ||  (hour < 0)  ) {
    return false;
  }
  //分钟检查
  if (  (minute > 60) || (minute < 0) ) {
    return false;
  }
  //大小月检查
  switch (month) {
    case 4:
    case 6:
    case 9:
    case 10:
      if ( day > 30 ) {
        return false;
      }
      break;
  }
  //闰年检查
  if ( !(year % 4) && (year % 100) ) {
    //普通闰年
    if( month == 2 && day > 29 )
      return false;
  }
  else  if ( !(year%400) ) {
    //世纪闰年
    if( month == 2 && day > 29 )
      return false;
  }
  else  {
    //普通年
    if( month == 2 && day > 28 )
      return false;
  }
  //格式正确
  return true;
}

Date Date::stringToDate(const string t_dateString){
  Date m_date(t_dateString);
  if ( !isValid(m_date) ) {
    m_date.m_year     =   0;
    m_date.m_month    =   0;
    m_date.m_day      =   0;
    m_date.m_hour     =   0;
    m_date.m_minute   =   0;
  }
  return m_date;
}

string Date::dateToString(Date t_date){
  string s;
  //格式有效性检查
  if( !isValid(t_date) ){
    s = "0000-00-00/00:00";
    return s;
  }
  //如果格式正确则转换成字符串
}
