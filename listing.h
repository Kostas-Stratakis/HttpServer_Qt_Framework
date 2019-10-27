#ifndef LISTING_H
#define LISTING_H
#include <QList>
#include <QString>
#include "httprequesthandler.h"

using namespace stefanfrings;


class Listing : public HttpRequestHandler {
    Q_OBJECT

public:
    Listing(QObject* parent=0);
    void service(HttpRequest& request, HttpResponse& response);
private:
    QList<QString> list;
};

#endif // LISTING_H
