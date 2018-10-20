#include "Storage.hpp"
#include<sstream>

Storage::Storage(){

}

bool Storage::readFromFile(void){
  ifstream mcfile;
  mcfile>>sd
}

bool Storage::writeToFile(void){
  ofstream  userfile;
  ofstream  meetingfile;
  userfile.open("User.csv");
  meetingfile.open("Meeting.csv");
  while (!m_userList.empty()) {
    User u=m_userList.back();
    m_userList.pop_back();
    userfile << u.m_name  <<','<< u.m_password  <<','<< u.m_email <<','<< u.m_phone <<  endl;
  }
  while (!m_meetingList.empty()) {
    Meeting m=m_meetingList.back();
    m_meetingList.pop_back();
    meetingfile<< m.m_sponsor<<','<<dateToString(m.startDate)<<','<<dateToString(m.endDate)<<','<<m_title<<',';
    while (!m_participators.empty()) {
      meetingfile<< m_participators.back()<<"|||";
      m_participators.pop_back();
    }
    meetingfile<<endl;
  }
}
