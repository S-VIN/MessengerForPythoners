#include "messages.h"
#include <QDebug>
#include <QHeaderView>
Messages::Messages()
{

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
    for(int i = 0; i < getSize(); i++){
        if(table->rowCount() <= i){
            table->insertRow(i);
            table->verticalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);
        }
        table->setItem(i, 0, new QTableWidgetItem(data[i].name));
        table->setItem(i, 1, new QTableWidgetItem(data[i].message));
    }

}

Message Messages::getMessage(int number)
{
    return data[number];
}
