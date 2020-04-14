#include "NameServiceIm.h"

::grpc::Status NameServiceIm::SayName(::grpc::ServerContext* context, const::NameRequest* request, ::NameReply* reply)
{
	std::string name = request->name();

	std::cout << name << std::endl;

	return ::grpc::Status::OK;
}
