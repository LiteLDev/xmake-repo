#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PFEntityKey.h"
#include "mc/PFLobbyStateChange.h"

// auto generated forward declare list
// clang-format off
struct PFLobby;
// clang-format on

struct PFLobbyMemberAddedStateChange : public ::PFLobbyStateChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PFLobby const*> lobby;
    ::ll::TypedStorage<8, 16, ::PFEntityKey>   member;
    // NOLINTEND
};
