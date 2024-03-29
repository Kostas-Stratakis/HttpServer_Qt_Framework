#ifndef HELLOCONTROLLER_H
#define HELLOCONTROLLER_H

#include "httprequesthandler.h"

using namespace stefanfrings;

class Hellocontroller : public HttpRequestHandler
{
    Q_OBJECT
public:
    Hellocontroller(QObject* parent=0);
    void service(HttpRequest& request, HttpResponse& response);
};

#endif // HELLOCONTROLLER_H
