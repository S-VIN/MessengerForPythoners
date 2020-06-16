#include "messages.h"
#include "messages.h"

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
    for(int i = 0; i <= getSize(); i++){
        table->insertRow(i);
        table->setItem(i, 0, new QTableWidgetItem(data[0].name));
        table->setItem(i, 1, new QTableWidgetItem(data[0].message));
    }
}

Message Messages::getMessage(int number)
{
    return data[number];
}
