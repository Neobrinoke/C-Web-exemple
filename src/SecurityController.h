#ifndef SECURITYCONTROLLER_H
#define SECURITYCONTROLLER_H

#include <cppcms/application.h>
#include <cppcms/http_response.h>
#include <cppcms/url_dispatcher.h>

class SecurityController : public cppcms::application {
public:
	explicit SecurityController(cppcms::service &srv);

	void login();

	void bye();

	void hello();

	void redirect();
};

#endif // SECURITYCONTROLLER_H
