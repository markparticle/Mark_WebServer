/*
 * @Author       : mark
 * @Date         : 2020-06-18
 * @copyleft GPL 2.0
 */ 
#include <unistd.h>
#include "webserver.h"

int main() {
    //daemon(1, 0);
    WebServer server(1314, 
            3306, "root", "root", "webserver", 
            10, 8, 3, true, true,
            true, 0, 800);
    server.Init();
    server.Start();
}







