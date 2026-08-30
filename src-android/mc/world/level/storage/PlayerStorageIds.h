#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStorageIds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> MsaId;
    ::ll::TypedStorage<8, 24, std::string> GuestId;
    ::ll::TypedStorage<8, 24, std::string> PlatformId;
    ::ll::TypedStorage<8, 24, std::string> PlatformOnlineId;
    ::ll::TypedStorage<8, 24, std::string> PlatformOfflineId;
    ::ll::TypedStorage<8, 24, std::string> SelfSignedId;
    ::ll::TypedStorage<8, 24, std::string> RandomClientId;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStorageIds& operator=(PlayerStorageIds const&);
    PlayerStorageIds(PlayerStorageIds const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PlayerStorageIds& operator=(::PlayerStorageIds&&);

    MCNAPI ~PlayerStorageIds();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
