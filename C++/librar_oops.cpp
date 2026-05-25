  #include<bits/stdc++.h>
  using namespace std;
  class libitem
  {
    private:
        string member;
        string book;
    public:
    void data(string name,string book)
    {
        member = name;
        this->book = book;
    }
  };
  class book:public libitem
  {
    public:
    string b_name;
    string author;
  };
  class mag:public libitem
  {
    public:
    string mag_name;
  };