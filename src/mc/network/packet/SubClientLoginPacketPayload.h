#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/SubClientConnectionRequest.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class SubClientConnectionRequest;
// clang-format on

struct SubClientLoginPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubClientConnectionRequest>> mConnectionRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SubClientLoginPacketPayload(::SubClientConnectionRequest const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientConnectionRequest const&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubClientConnectionRequest>> mConnectionRequest;
#endif // @header-generator platform
    // NOLINTEND
};
