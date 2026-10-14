#ifndef NUMTRANS_H
#define NUMTRANS_H

#include <QDialog>
class QLineEdit;
class NumTrans : public QDialog
{
    Q_OBJECT

public:
    explicit NumTrans(QWidget *parent = nullptr);
    ~NumTrans() override;
private:
    QLineEdit* decEdit;
    QLineEdit* hexEdit;
    QLineEdit* binEdit;
private slots:
    void decChanged(const QString&);
    void hexChanged(const QString&);
    void binChanged(const QString&);

};
#endif // NUMTRANS_H
