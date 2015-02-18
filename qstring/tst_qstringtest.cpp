#include <QString>
#include <QtTest>

class QstringTest : public QObject
{
    Q_OBJECT

public:
    QstringTest();

private Q_SLOTS:
    void toUpper();
};

QstringTest::QstringTest()
{
}

void QstringTest::toUpper()
{
    QString str = "Hello";
    QVERIFY(str.toUpper() == "HELLO");
}

QTEST_APPLESS_MAIN(QstringTest)

#include "tst_qstringtest.moc"
