#include <iostream>
#include "UserEntity.h"

using namespace std;

UserEntity::UserEntity() : id(0), balance(0.0) {}

UserEntity::UserEntity(int id, const string& name, const string& email, const string& password, double balance)
    : id(id), name(name), email(email), password(password), balance(balance) {}

int UserEntity::getId() const { return id; }
void UserEntity::setId(int id) { this->id = id; }

string UserEntity::getName() const { return name; }
void UserEntity::setName(const string& name) { this->name = name; }

string UserEntity::getEmail() const { return email; }
void UserEntity::setEmail(const string& email) { this->email = email; }

string UserEntity::getPassword() const { return password; }
void UserEntity::setPassword(const string& password) { this->password = password; }

double UserEntity::getBalance() const { return balance; }
void UserEntity::setBalance(double balance) { this->balance = balance; }

void UserEntity::toString() const {
    cout << "ID: " << id << "\n"
         << "Name: " << name << "\n"
         << "Email: " << email << "\n"
         << "Balance: " << balance << endl;
}
