#include "messages.h"
#include <QDebug>

Messages::Messages()
{
    addMessage({"stepan", "hahaha"});
    addMessage({"ggg", "weori"});
    addMessage({"sss", "hwoeira"});
    addMessage({"nnn", "hwoekrj"});
}

void Messages::addMessage(Message message)
{
    data.push_back(message);
}

int Messages::getSize()
{
    return data.size();
}

void Messages::printToTable(QTableWidget *table)
{
    //table->clear();
    for(int i = 0; i <= getSize(); i++){
        table->insertRow(i);
        table->setItem(i, 0, new QTableWidgetItem(data[i].name));
        table->setItem(i, 1, new QTableWidgetItem(data[i].message));
    }
}

Message Messages::getMessage(int number)
{
    return data[number];
}
