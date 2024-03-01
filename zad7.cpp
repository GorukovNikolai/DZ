#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    string author;
    string title;
    int year;

public:
   
    Book() {
        author = "";
        title = "";
        year = 0;
    }

   
    void setAuthor(string author1) { author = author1; }
    void setTitle(string title1) { title = title1; }
    void setYear(int year1) { year = year1; }

   
    string getAuthor() { return author; }
    string getTitle() { return title; }
    int getYear() { return year; }
};

class Reader {
private:
    string fullName;
    string cardNumber;
    string dateOfBirth;
    string phoneNumber;

public:
   
    Reader() {
        fullName = "";
        cardNumber = "";
        dateOfBirth = "";
        phoneNumber = "";
    }

    
    void setFullName(string name12) { fullName = name12; }
    void setCardNumber(string card) { cardNumber = card; }
    void setDateOfBirth(string date) { dateOfBirth = date; }
    void setPhoneNumber(string phone) { phoneNumber = phone; }

    
    string getFullName() { return fullName; }
    string getCardNumber() { return cardNumber; }
    string getDateOfBirth() { return dateOfBirth; }
    string getPhoneNumber() { return phoneNumber; }

    
    void takeBook(Book& n) {
        cout << fullName << " взял книгу: " << n.getTitle() << " (автор: " << n.getAuthor() << ")" << endl;
    }

    void returnBook(Book& n) {
        cout << fullName << " вернул книгу: " << n.getTitle() << " (автор: " << n.getAuthor() << ")" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    
    Reader R1;
    R1.setFullName("Иванов Иван");
    R1.setCardNumber("323-323-111");
    R1.setDateOfBirth("22.02.2001");

   
    Book n;
    n.setAuthor("Гоголь");
    n.setTitle("Шинель");
    n.setYear(1891);

   
    R1.takeBook(n);
    R1.returnBook(n);

    return 0;
}