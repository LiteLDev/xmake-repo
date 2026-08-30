#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/AgentActionType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct AgentActionEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AgentActionType> mAction;
    ::ll::TypedStorage<8, 24, std::string>      mRequestId;
    ::ll::UntypedStorage<8, 16>                 mResponse;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AgentActionEventPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
