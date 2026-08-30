#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IJsonRpcComponent;
class ISignalingJsonRpcInterop;
class TaskGroup;
namespace Json { class Value; }
namespace JsonRpc { class IResultHandler; }
namespace JsonRpc { class JsonRpcError; }
// clang-format on

namespace JsonRpc {

class JsonRpcProvider : public ::std::enable_shared_from_this<JsonRpc::JsonRpcProvider> {
public:
    // JsonRpcProvider inner types declare
    // clang-format off
    struct JsonRpcPendingResult;
    // clang-format on

    // JsonRpcProvider inner types define
    struct JsonRpcPendingResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<JsonRpc::IResultHandler>> mHandler;
        ::ll::UntypedStorage<8, 16>                                        mExpirationTask;
        // NOLINTEND

    public:
        // prevent constructor by default
        JsonRpcPendingResult& operator=(JsonRpcPendingResult const&);
        JsonRpcPendingResult(JsonRpcPendingResult const&);
        JsonRpcPendingResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~JsonRpcPendingResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<1, 144> mJsonRpcMethodsMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<JsonRpc::IResultHandler>>> mJsonRpcMethods;
    ::ll::UntypedStorage<8, 40> mJsonRpcRequestMethods;
    ::ll::TypedStorage<4, 40, std::mutex> mJsonRpcResultsMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, JsonRpc::JsonRpcProvider::JsonRpcPendingResult>> mJsonRpcPendingResults;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mCerealCtx;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup> const> mTaskGroup;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IJsonRpcComponent>>> mComponents;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mResultTimeout;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ISignalingJsonRpcInterop>> mSignalingServiceInterop;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcProvider(std::shared_ptr<ISignalingJsonRpcInterop>, std::vector<std::shared_ptr<IJsonRpcComponent>>);

    MCNAPI void _expirePendingResult(std::string const&);

    MCNAPI ::cereal::ReflectionCtx& getReflectionContext();

    MCNAPI void handleJsonRpcResult(std::string const&, ::Bedrock::Result<Json::Value, JsonRpc::JsonRpcError>&&);

    MCNAPI void initialize();

    MCNAPI void onMessage(std::string_view);

    MCNAPI std::unique_ptr<std::string, std::function<void(std::string*)>>
           registerJsonRpcMethod(std::string, std::unique_ptr<JsonRpc::IResultHandler>);

    MCNAPI ~JsonRpcProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ISignalingJsonRpcInterop>, std::vector<std::shared_ptr<IJsonRpcComponent>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
