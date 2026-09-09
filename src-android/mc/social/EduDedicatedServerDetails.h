#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

struct EduDedicatedServerDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> serverName;
    ::ll::TypedStorage<8, 24, std::string> serverId;
    ::ll::TypedStorage<4, 4, int>          playerCount;
    ::ll::TypedStorage<4, 4, int>          maxPlayers;
    ::ll::TypedStorage<4, 4, int>          health;
    ::ll::TypedStorage<1, 1, bool>         isPasscodeProtected;
    ::ll::TypedStorage<1, 1, bool>         isOwningTenant;
    ::ll::TypedStorage<1, 1, bool>         isEnabled;
    ::ll::TypedStorage<1, 1, bool>         isSharingEnabled;
    ::ll::TypedStorage<1, 1, bool>         isClientAdded;
    ::ll::TypedStorage<1, 1, bool>         isBroadcasted;
    ::ll::TypedStorage<1, 1, bool>         hasReceivedDataFromMess;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduDedicatedServerDetails();

    MCNAPI ::Bedrock::Result<void, std::error_code> fromJsonValue(::Json::Value const&);

    MCNAPI ~EduDedicatedServerDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
