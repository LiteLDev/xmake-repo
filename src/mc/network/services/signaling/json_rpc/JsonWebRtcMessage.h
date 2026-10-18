#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mInnerMessage;
        ::ll::TypedStorage<8, 24, std::string> mToPlayerId;
        ::ll::TypedStorage<8, 24, std::string> mInnerId;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkbe59e4;
        ::ll::UntypedStorage<8, 32> mUnke3d5d4;
        ::ll::UntypedStorage<8, 32> mUnk5a107a;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::JsonRpc::JsonWebRtcMessage::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 96> mUnk390060;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    JsonWebRtcMessage& operator=(JsonWebRtcMessage const&);
    JsonWebRtcMessage(JsonWebRtcMessage const&);
#endif // @header-generator platform
    JsonWebRtcMessage();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JsonWebRtcMessage(std::string const&, std::string const&);

    MCNAPI ~JsonWebRtcMessage();
#else // @header-generator platform
    MCNAPI JsonWebRtcMessage(::std::string const& toPlayerId, ::std::string const& innerMessage);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& toPlayerId, ::std::string const& innerMessage);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace JsonRpc
