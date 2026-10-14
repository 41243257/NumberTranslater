#include "numtrans.h"
#include <QLineEdit>
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QGridLayout>
NumTrans::NumTrans(QWidget *parent)
    : QDialog(parent)
{
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    QGridLayout* editLayout = new QGridLayout;
    QHBoxLayout* buttonLayout = new QHBoxLayout;

    mainLayout->addLayout(editLayout);
    mainLayout->addStretch();
    mainLayout->addLayout(buttonLayout);

    QLabel* decLabel = new QLabel("Decimal");
    QLabel* hexLabel = new QLabel("Hex");
    QLabel* binLabel = new QLabel("Binary");
    decEdit = new QLineEdit;
    hexEdit = new QLineEdit;
    binEdit = new QLineEdit;

    editLayout->addWidget(decLabel, 0, 0);
    editLayout->addWidget(decEdit,  0, 1);
    editLayout->addWidget(hexLabel, 1, 0);
    editLayout->addWidget(hexEdit,  1, 1);
    editLayout->addWidget(binLabel, 2, 0);
    editLayout->addWidget(binEdit,  2, 1);


    QPushButton* exitButton = new QPushButton("Exit");
    buttonLayout->addStretch();
    buttonLayout->addWidget(exitButton);
}

NumTrans::~NumTrans() = default;
