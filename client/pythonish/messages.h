#ifndef MESSAGES_H
#define MESSAGES_H
#include <vector>
#include <QString>
#include <QTableWidget>

using namespace std;

struct Message{
    QString name;
    QString message;
};


class Messages
{
public:
    Messages();
    void addMessage(Message message);
    int getSize();
    void printToTable(QTableWidget * table);
    Message getMessage(int number);
private:
    vector<Message> data;
};

#endif // MESSAGES_H
