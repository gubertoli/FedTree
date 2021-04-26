// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: fedtree.proto

#include "fedtree.pb.h"
#include "fedtree.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace fedtree {

static const char* FedTree_method_names[] = {
  "/fedtree.FedTree/TriggerUpdateGradients",
  "/fedtree.FedTree/TriggerBuildInit",
  "/fedtree.FedTree/GetGradients",
  "/fedtree.FedTree/SendDatasetInfo",
  "/fedtree.FedTree/SendHistograms",
  "/fedtree.FedTree/SendHistFid",
  "/fedtree.FedTree/TriggerAggregate",
  "/fedtree.FedTree/GetBestInfo",
  "/fedtree.FedTree/SendNode",
  "/fedtree.FedTree/SendIns2NodeID",
  "/fedtree.FedTree/GetNodes",
  "/fedtree.FedTree/GetIns2NodeID",
  "/fedtree.FedTree/CheckIfContinue",
  "/fedtree.FedTree/TriggerPrune",
};

std::unique_ptr< FedTree::Stub> FedTree::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FedTree::Stub> stub(new FedTree::Stub(channel));
  return stub;
}

FedTree::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_TriggerUpdateGradients_(FedTree_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TriggerBuildInit_(FedTree_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetGradients_(FedTree_method_names[2], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SendDatasetInfo_(FedTree_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendHistograms_(FedTree_method_names[4], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_SendHistFid_(FedTree_method_names[5], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_TriggerAggregate_(FedTree_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetBestInfo_(FedTree_method_names[7], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SendNode_(FedTree_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendIns2NodeID_(FedTree_method_names[9], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_GetNodes_(FedTree_method_names[10], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetIns2NodeID_(FedTree_method_names[11], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_CheckIfContinue_(FedTree_method_names[12], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TriggerPrune_(FedTree_method_names[13], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FedTree::Stub::TriggerUpdateGradients(::grpc::ClientContext* context, const ::fedtree::PID& request, ::fedtree::Ready* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TriggerUpdateGradients_, context, request, response);
}

void FedTree::Stub::experimental_async::TriggerUpdateGradients(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TriggerUpdateGradients_, context, request, response, std::move(f));
}

void FedTree::Stub::experimental_async::TriggerUpdateGradients(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TriggerUpdateGradients_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::PrepareAsyncTriggerUpdateGradientsRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fedtree::Ready, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TriggerUpdateGradients_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::AsyncTriggerUpdateGradientsRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTriggerUpdateGradientsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FedTree::Stub::TriggerBuildInit(::grpc::ClientContext* context, const ::fedtree::PID& request, ::fedtree::Ready* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TriggerBuildInit_, context, request, response);
}

void FedTree::Stub::experimental_async::TriggerBuildInit(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TriggerBuildInit_, context, request, response, std::move(f));
}

void FedTree::Stub::experimental_async::TriggerBuildInit(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TriggerBuildInit_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::PrepareAsyncTriggerBuildInitRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fedtree::Ready, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TriggerBuildInit_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::AsyncTriggerBuildInitRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTriggerBuildInitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::fedtree::GHPair>* FedTree::Stub::GetGradientsRaw(::grpc::ClientContext* context, const ::fedtree::PID& request) {
  return ::grpc::internal::ClientReaderFactory< ::fedtree::GHPair>::Create(channel_.get(), rpcmethod_GetGradients_, context, request);
}

void FedTree::Stub::experimental_async::GetGradients(::grpc::ClientContext* context, ::fedtree::PID* request, ::grpc::experimental::ClientReadReactor< ::fedtree::GHPair>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::fedtree::GHPair>::Create(stub_->channel_.get(), stub_->rpcmethod_GetGradients_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::fedtree::GHPair>* FedTree::Stub::AsyncGetGradientsRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fedtree::GHPair>::Create(channel_.get(), cq, rpcmethod_GetGradients_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::fedtree::GHPair>* FedTree::Stub::PrepareAsyncGetGradientsRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fedtree::GHPair>::Create(channel_.get(), cq, rpcmethod_GetGradients_, context, request, false, nullptr);
}

::grpc::Status FedTree::Stub::SendDatasetInfo(::grpc::ClientContext* context, const ::fedtree::DatasetInfo& request, ::fedtree::PID* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fedtree::DatasetInfo, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendDatasetInfo_, context, request, response);
}

void FedTree::Stub::experimental_async::SendDatasetInfo(::grpc::ClientContext* context, const ::fedtree::DatasetInfo* request, ::fedtree::PID* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fedtree::DatasetInfo, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendDatasetInfo_, context, request, response, std::move(f));
}

void FedTree::Stub::experimental_async::SendDatasetInfo(::grpc::ClientContext* context, const ::fedtree::DatasetInfo* request, ::fedtree::PID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendDatasetInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fedtree::PID>* FedTree::Stub::PrepareAsyncSendDatasetInfoRaw(::grpc::ClientContext* context, const ::fedtree::DatasetInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fedtree::PID, ::fedtree::DatasetInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendDatasetInfo_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fedtree::PID>* FedTree::Stub::AsyncSendDatasetInfoRaw(::grpc::ClientContext* context, const ::fedtree::DatasetInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendDatasetInfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::fedtree::GHPair>* FedTree::Stub::SendHistogramsRaw(::grpc::ClientContext* context, ::fedtree::PID* response) {
  return ::grpc::internal::ClientWriterFactory< ::fedtree::GHPair>::Create(channel_.get(), rpcmethod_SendHistograms_, context, response);
}

void FedTree::Stub::experimental_async::SendHistograms(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::experimental::ClientWriteReactor< ::fedtree::GHPair>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::fedtree::GHPair>::Create(stub_->channel_.get(), stub_->rpcmethod_SendHistograms_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::fedtree::GHPair>* FedTree::Stub::AsyncSendHistogramsRaw(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::fedtree::GHPair>::Create(channel_.get(), cq, rpcmethod_SendHistograms_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::fedtree::GHPair>* FedTree::Stub::PrepareAsyncSendHistogramsRaw(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::fedtree::GHPair>::Create(channel_.get(), cq, rpcmethod_SendHistograms_, context, response, false, nullptr);
}

::grpc::ClientWriter< ::fedtree::FID>* FedTree::Stub::SendHistFidRaw(::grpc::ClientContext* context, ::fedtree::PID* response) {
  return ::grpc::internal::ClientWriterFactory< ::fedtree::FID>::Create(channel_.get(), rpcmethod_SendHistFid_, context, response);
}

void FedTree::Stub::experimental_async::SendHistFid(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::experimental::ClientWriteReactor< ::fedtree::FID>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::fedtree::FID>::Create(stub_->channel_.get(), stub_->rpcmethod_SendHistFid_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::fedtree::FID>* FedTree::Stub::AsyncSendHistFidRaw(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::fedtree::FID>::Create(channel_.get(), cq, rpcmethod_SendHistFid_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::fedtree::FID>* FedTree::Stub::PrepareAsyncSendHistFidRaw(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::fedtree::FID>::Create(channel_.get(), cq, rpcmethod_SendHistFid_, context, response, false, nullptr);
}

::grpc::Status FedTree::Stub::TriggerAggregate(::grpc::ClientContext* context, const ::fedtree::PID& request, ::fedtree::Ready* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TriggerAggregate_, context, request, response);
}

void FedTree::Stub::experimental_async::TriggerAggregate(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TriggerAggregate_, context, request, response, std::move(f));
}

void FedTree::Stub::experimental_async::TriggerAggregate(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TriggerAggregate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::PrepareAsyncTriggerAggregateRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fedtree::Ready, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TriggerAggregate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::AsyncTriggerAggregateRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTriggerAggregateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::fedtree::BestInfo>* FedTree::Stub::GetBestInfoRaw(::grpc::ClientContext* context, const ::fedtree::PID& request) {
  return ::grpc::internal::ClientReaderFactory< ::fedtree::BestInfo>::Create(channel_.get(), rpcmethod_GetBestInfo_, context, request);
}

void FedTree::Stub::experimental_async::GetBestInfo(::grpc::ClientContext* context, ::fedtree::PID* request, ::grpc::experimental::ClientReadReactor< ::fedtree::BestInfo>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::fedtree::BestInfo>::Create(stub_->channel_.get(), stub_->rpcmethod_GetBestInfo_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::fedtree::BestInfo>* FedTree::Stub::AsyncGetBestInfoRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fedtree::BestInfo>::Create(channel_.get(), cq, rpcmethod_GetBestInfo_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::fedtree::BestInfo>* FedTree::Stub::PrepareAsyncGetBestInfoRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fedtree::BestInfo>::Create(channel_.get(), cq, rpcmethod_GetBestInfo_, context, request, false, nullptr);
}

::grpc::Status FedTree::Stub::SendNode(::grpc::ClientContext* context, const ::fedtree::Node& request, ::fedtree::PID* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fedtree::Node, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendNode_, context, request, response);
}

void FedTree::Stub::experimental_async::SendNode(::grpc::ClientContext* context, const ::fedtree::Node* request, ::fedtree::PID* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fedtree::Node, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendNode_, context, request, response, std::move(f));
}

void FedTree::Stub::experimental_async::SendNode(::grpc::ClientContext* context, const ::fedtree::Node* request, ::fedtree::PID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendNode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fedtree::PID>* FedTree::Stub::PrepareAsyncSendNodeRaw(::grpc::ClientContext* context, const ::fedtree::Node& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fedtree::PID, ::fedtree::Node, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendNode_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fedtree::PID>* FedTree::Stub::AsyncSendNodeRaw(::grpc::ClientContext* context, const ::fedtree::Node& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendNodeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::fedtree::Ins2NodeID>* FedTree::Stub::SendIns2NodeIDRaw(::grpc::ClientContext* context, ::fedtree::PID* response) {
  return ::grpc::internal::ClientWriterFactory< ::fedtree::Ins2NodeID>::Create(channel_.get(), rpcmethod_SendIns2NodeID_, context, response);
}

void FedTree::Stub::experimental_async::SendIns2NodeID(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::experimental::ClientWriteReactor< ::fedtree::Ins2NodeID>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::fedtree::Ins2NodeID>::Create(stub_->channel_.get(), stub_->rpcmethod_SendIns2NodeID_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::fedtree::Ins2NodeID>* FedTree::Stub::AsyncSendIns2NodeIDRaw(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::fedtree::Ins2NodeID>::Create(channel_.get(), cq, rpcmethod_SendIns2NodeID_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::fedtree::Ins2NodeID>* FedTree::Stub::PrepareAsyncSendIns2NodeIDRaw(::grpc::ClientContext* context, ::fedtree::PID* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::fedtree::Ins2NodeID>::Create(channel_.get(), cq, rpcmethod_SendIns2NodeID_, context, response, false, nullptr);
}

::grpc::ClientReader< ::fedtree::Node>* FedTree::Stub::GetNodesRaw(::grpc::ClientContext* context, const ::fedtree::PID& request) {
  return ::grpc::internal::ClientReaderFactory< ::fedtree::Node>::Create(channel_.get(), rpcmethod_GetNodes_, context, request);
}

void FedTree::Stub::experimental_async::GetNodes(::grpc::ClientContext* context, ::fedtree::PID* request, ::grpc::experimental::ClientReadReactor< ::fedtree::Node>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::fedtree::Node>::Create(stub_->channel_.get(), stub_->rpcmethod_GetNodes_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::fedtree::Node>* FedTree::Stub::AsyncGetNodesRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fedtree::Node>::Create(channel_.get(), cq, rpcmethod_GetNodes_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::fedtree::Node>* FedTree::Stub::PrepareAsyncGetNodesRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fedtree::Node>::Create(channel_.get(), cq, rpcmethod_GetNodes_, context, request, false, nullptr);
}

::grpc::ClientReader< ::fedtree::Ins2NodeID>* FedTree::Stub::GetIns2NodeIDRaw(::grpc::ClientContext* context, const ::fedtree::PID& request) {
  return ::grpc::internal::ClientReaderFactory< ::fedtree::Ins2NodeID>::Create(channel_.get(), rpcmethod_GetIns2NodeID_, context, request);
}

void FedTree::Stub::experimental_async::GetIns2NodeID(::grpc::ClientContext* context, ::fedtree::PID* request, ::grpc::experimental::ClientReadReactor< ::fedtree::Ins2NodeID>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::fedtree::Ins2NodeID>::Create(stub_->channel_.get(), stub_->rpcmethod_GetIns2NodeID_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::fedtree::Ins2NodeID>* FedTree::Stub::AsyncGetIns2NodeIDRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fedtree::Ins2NodeID>::Create(channel_.get(), cq, rpcmethod_GetIns2NodeID_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::fedtree::Ins2NodeID>* FedTree::Stub::PrepareAsyncGetIns2NodeIDRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fedtree::Ins2NodeID>::Create(channel_.get(), cq, rpcmethod_GetIns2NodeID_, context, request, false, nullptr);
}

::grpc::Status FedTree::Stub::CheckIfContinue(::grpc::ClientContext* context, const ::fedtree::PID& request, ::fedtree::Ready* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CheckIfContinue_, context, request, response);
}

void FedTree::Stub::experimental_async::CheckIfContinue(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CheckIfContinue_, context, request, response, std::move(f));
}

void FedTree::Stub::experimental_async::CheckIfContinue(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CheckIfContinue_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::PrepareAsyncCheckIfContinueRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fedtree::Ready, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CheckIfContinue_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::AsyncCheckIfContinueRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCheckIfContinueRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FedTree::Stub::TriggerPrune(::grpc::ClientContext* context, const ::fedtree::PID& request, ::fedtree::Ready* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TriggerPrune_, context, request, response);
}

void FedTree::Stub::experimental_async::TriggerPrune(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TriggerPrune_, context, request, response, std::move(f));
}

void FedTree::Stub::experimental_async::TriggerPrune(::grpc::ClientContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TriggerPrune_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::PrepareAsyncTriggerPruneRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fedtree::Ready, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TriggerPrune_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fedtree::Ready>* FedTree::Stub::AsyncTriggerPruneRaw(::grpc::ClientContext* context, const ::fedtree::PID& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTriggerPruneRaw(context, request, cq);
  result->StartCall();
  return result;
}

FedTree::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FedTree::Service, ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::fedtree::Ready* resp) {
               return service->TriggerUpdateGradients(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FedTree::Service, ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::fedtree::Ready* resp) {
               return service->TriggerBuildInit(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< FedTree::Service, ::fedtree::PID, ::fedtree::GHPair>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::grpc::ServerWriter<::fedtree::GHPair>* writer) {
               return service->GetGradients(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FedTree::Service, ::fedtree::DatasetInfo, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::DatasetInfo* req,
             ::fedtree::PID* resp) {
               return service->SendDatasetInfo(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[4],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< FedTree::Service, ::fedtree::GHPair, ::fedtree::PID>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::fedtree::GHPair>* reader,
             ::fedtree::PID* resp) {
               return service->SendHistograms(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[5],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< FedTree::Service, ::fedtree::FID, ::fedtree::PID>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::fedtree::FID>* reader,
             ::fedtree::PID* resp) {
               return service->SendHistFid(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FedTree::Service, ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::fedtree::Ready* resp) {
               return service->TriggerAggregate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[7],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< FedTree::Service, ::fedtree::PID, ::fedtree::BestInfo>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::grpc::ServerWriter<::fedtree::BestInfo>* writer) {
               return service->GetBestInfo(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FedTree::Service, ::fedtree::Node, ::fedtree::PID, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::Node* req,
             ::fedtree::PID* resp) {
               return service->SendNode(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[9],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< FedTree::Service, ::fedtree::Ins2NodeID, ::fedtree::PID>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::fedtree::Ins2NodeID>* reader,
             ::fedtree::PID* resp) {
               return service->SendIns2NodeID(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[10],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< FedTree::Service, ::fedtree::PID, ::fedtree::Node>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::grpc::ServerWriter<::fedtree::Node>* writer) {
               return service->GetNodes(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[11],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< FedTree::Service, ::fedtree::PID, ::fedtree::Ins2NodeID>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::grpc::ServerWriter<::fedtree::Ins2NodeID>* writer) {
               return service->GetIns2NodeID(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[12],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FedTree::Service, ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::fedtree::Ready* resp) {
               return service->CheckIfContinue(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FedTree_method_names[13],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FedTree::Service, ::fedtree::PID, ::fedtree::Ready, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FedTree::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fedtree::PID* req,
             ::fedtree::Ready* resp) {
               return service->TriggerPrune(ctx, req, resp);
             }, this)));
}

FedTree::Service::~Service() {
}

::grpc::Status FedTree::Service::TriggerUpdateGradients(::grpc::ServerContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::TriggerBuildInit(::grpc::ServerContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::GetGradients(::grpc::ServerContext* context, const ::fedtree::PID* request, ::grpc::ServerWriter< ::fedtree::GHPair>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::SendDatasetInfo(::grpc::ServerContext* context, const ::fedtree::DatasetInfo* request, ::fedtree::PID* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::SendHistograms(::grpc::ServerContext* context, ::grpc::ServerReader< ::fedtree::GHPair>* reader, ::fedtree::PID* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::SendHistFid(::grpc::ServerContext* context, ::grpc::ServerReader< ::fedtree::FID>* reader, ::fedtree::PID* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::TriggerAggregate(::grpc::ServerContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::GetBestInfo(::grpc::ServerContext* context, const ::fedtree::PID* request, ::grpc::ServerWriter< ::fedtree::BestInfo>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::SendNode(::grpc::ServerContext* context, const ::fedtree::Node* request, ::fedtree::PID* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::SendIns2NodeID(::grpc::ServerContext* context, ::grpc::ServerReader< ::fedtree::Ins2NodeID>* reader, ::fedtree::PID* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::GetNodes(::grpc::ServerContext* context, const ::fedtree::PID* request, ::grpc::ServerWriter< ::fedtree::Node>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::GetIns2NodeID(::grpc::ServerContext* context, const ::fedtree::PID* request, ::grpc::ServerWriter< ::fedtree::Ins2NodeID>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::CheckIfContinue(::grpc::ServerContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FedTree::Service::TriggerPrune(::grpc::ServerContext* context, const ::fedtree::PID* request, ::fedtree::Ready* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace fedtree

