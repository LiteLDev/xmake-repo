#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStorageIds {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> MsaId;
    ::ll::TypedStorage<8, 24, std::string> GuestId;
    ::ll::TypedStorage<8, 24, std::string> PlatformId;
    ::ll::TypedStorage<8, 24, std::string> PlatformOnlineId;
    ::ll::TypedStorage<8, 24, std::string> PlatformOfflineId;
    ::ll::TypedStorage<8, 24, std::string> SelfSignedId;
    ::ll::TypedStorage<8, 24, std::string> RandomClientId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> MsaId;
    ::ll::TypedStorage<8, 32, ::std::string> GuestId;
    ::ll::TypedStorage<8, 32, ::std::string> PlatformId;
    ::ll::TypedStorage<8, 32, ::std::string> PlatformOnlineId;
    ::ll::TypedStorage<8, 32, ::std::string> PlatformOfflineId;
    ::ll::TypedStorage<8, 32, ::std::string> SelfSignedId;
    ::ll::TypedStorage<8, 32, ::std::string> RandomClientId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerStorageIds& operator=(PlayerStorageIds const&);
    PlayerStorageIds(PlayerStorageIds const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerStorageIds& operator=(::PlayerStorageIds&&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~PlayerStorageIds();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
