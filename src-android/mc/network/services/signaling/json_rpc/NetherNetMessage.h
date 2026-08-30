#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

struct NetherNetMessage : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // NetherNetMessage inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // NetherNetMessage inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mNetherNetId;
        ::ll::TypedStorage<8, 24, std::string> mMessage;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Params();
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
    ::ll::TypedStorage<8, 48, ::JsonRpc::NetherNetMessage::Params> mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetMessage(std::string, std::string);

    MCNAPI ~NetherNetMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
