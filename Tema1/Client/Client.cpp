

#include <iostream>
#include <NameOperation.grpc.pb.h>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;

int main()
{
    grpc_init();
    ClientContext context;
    auto name_stub = NameOperation::NewStub(grpc::CreateChannel("localhost:8888", grpc::InsecureChannelCredentials()));
    NameRequest nameRequest;

    std::string name;

    std::cin >> name;

    nameRequest.set_allocated_name(&name);
    NameReply response;
    //auto status = sum_stub->Calculate(&context, sumRequest, &response);

    auto status = name_stub->SayName(&context, nameRequest, &response);

   /* if (status.ok())
    {
        std::cout << "Sum:: " << response.result() << std::endl;
    }*/

    /*std::string name;
    std::cin >> name;*/
    
    



    system("pause");
}

