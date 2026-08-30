#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SubClientConnectionRequest;
// clang-format on

struct SubClientLoginPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
