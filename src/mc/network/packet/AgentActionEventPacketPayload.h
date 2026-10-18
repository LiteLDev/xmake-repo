#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/network/packet/AgentActionType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct AgentActionEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AgentActionType> mAction;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>      mRequestId;
    ::ll::UntypedStorage<8, 16>                 mResponse;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>    mRequestId;
    ::ll::TypedStorage<8, 16, ::Json::Value>    mResponse;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AgentActionEventPacketPayload();
#else // @header-generator platform
    MCAPI AgentActionEventPacketPayload();

    MCAPI AgentActionEventPacketPayload(
        ::std::string const& requestId,
        ::AgentActionType    action,
        ::Json::Value const& response
    );
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string const& requestId, ::AgentActionType action, ::Json::Value const& response);
#endif // @header-generator platform
    // NOLINTEND
};
