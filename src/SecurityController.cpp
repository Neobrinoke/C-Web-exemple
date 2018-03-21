#include "SecurityController.h"

SecurityController::SecurityController(cppcms::service &srv) : application(srv) {
	dispatcher().assign("/login", &SecurityController::login, this);
	dispatcher().assign("/hello", &SecurityController::hello, this);
	dispatcher().assign("/bye", &SecurityController::bye, this);
	dispatcher().assign("/.*", &SecurityController::redirect, this);
}

void SecurityController::login() {
	response().out() << "<html><body><h1>Login</h1></body></html>\n";
}

void SecurityController::hello() {
	response().out() << "<html><body><h1>Hello World</h1></body></html>\n";
}

void SecurityController::bye() {
	response().out() << "<html><body><h1>Bye</h1></body></html>\n";
}

void SecurityController::redirect() {
	response().set_redirect_header("/hello");
}
