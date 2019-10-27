#include "hellocontroller.h"

Hellocontroller::Hellocontroller(QObject* parent) : HttpRequestHandler(parent)
{

}
void Hellocontroller::service(HttpRequest &request, HttpResponse &response) {
    response.write("Hello World",true);
}
