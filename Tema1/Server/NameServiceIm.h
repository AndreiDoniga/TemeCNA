#pragma once


#include <NameOperation.grpc.pb.h>

class NameServiceIm final : public NameOperation::Service
{
public:
	NameServiceIm() {};
	::grpc::Status SayName(::grpc::ServerContext* context, const::NameRequest* request, ::NameReply* reply) override;
	

};

