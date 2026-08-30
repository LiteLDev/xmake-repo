#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonWebRtcMessage : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonWebRtcMessage inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonWebRtcMessage inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mInnerMessage;
        ::ll::TypedStorage<8, 24, std::string> mToPlayerId;
        ::ll::TypedStorage<8, 24, std::string> mInnerId;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Params(::JsonRpc::JsonWebRtcMessage::Params const&);

        MCNAPI ~Params();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::JsonRpc::JsonWebRtcMessage::Params const&);
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
    ::ll::TypedStorage<8, 72, ::JsonRpc::JsonWebRtcMessage::Params> mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonWebRtcMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonWebRtcMessage(std::string const&, std::string const&);

    MCNAPI ~JsonWebRtcMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
