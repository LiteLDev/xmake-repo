#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#else // @header-generator platform
#endif // @header-generator platform

struct DisconnectionScreenParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason> disconnectFailReason;
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectionStage>   disconnectStage;
    ::ll::TypedStorage<8, 24, std::string>                       messageTitle;
    ::ll::TypedStorage<8, 24, std::string>                       messageBody;
    ::ll::TypedStorage<8, 24, std::string>                       messageFromServer;
    ::ll::TypedStorage<8, 24, std::string>                       screenNameOverride;
    ::ll::TypedStorage<8, 24, std::string>                       telemetryString;
    ::ll::TypedStorage<8, 24, std::string>                       codeword;
    ::ll::TypedStorage<8, 16, std::optional<long>>               realmId;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk9b233b;
    ::ll::UntypedStorage<4, 4>  mUnk14d4ea;
    ::ll::UntypedStorage<8, 32> mUnk214c4a;
    ::ll::UntypedStorage<8, 32> mUnkce2469;
    ::ll::UntypedStorage<8, 32> mUnkc7b50b;
    ::ll::UntypedStorage<8, 32> mUnk571c86;
    ::ll::UntypedStorage<8, 32> mUnk93de36;
    ::ll::UntypedStorage<8, 32> mUnke5cfd8;
    ::ll::UntypedStorage<8, 16> mUnkce69d6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectionScreenParams& operator=(DisconnectionScreenParams const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DisconnectionScreenParams(DisconnectionScreenParams const&);
#endif // @header-generator platform
    DisconnectionScreenParams();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DisconnectionScreenParams(::Connection::DisconnectFailReason);

    MCNAPI ~DisconnectionScreenParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Connection::DisconnectFailReason);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~DisconnectionScreenParams();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
