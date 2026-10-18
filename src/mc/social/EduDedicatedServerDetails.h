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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk394470;
    ::ll::UntypedStorage<8, 32> mUnk75354a;
    ::ll::UntypedStorage<4, 4>  mUnkef99b3;
    ::ll::UntypedStorage<4, 4>  mUnkc7f910;
    ::ll::UntypedStorage<4, 4>  mUnkb5254f;
    ::ll::UntypedStorage<1, 1>  mUnke9a019;
    ::ll::UntypedStorage<1, 1>  mUnk98bd21;
    ::ll::UntypedStorage<1, 1>  mUnkf77e0d;
    ::ll::UntypedStorage<1, 1>  mUnke93248;
    ::ll::UntypedStorage<1, 1>  mUnkcc60a5;
    ::ll::UntypedStorage<1, 1>  mUnk5c5ed8;
    ::ll::UntypedStorage<1, 1>  mUnk717b27;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EduDedicatedServerDetails& operator=(EduDedicatedServerDetails const&);
    EduDedicatedServerDetails(EduDedicatedServerDetails const&);
    EduDedicatedServerDetails();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EduDedicatedServerDetails& operator=(EduDedicatedServerDetails const&);
    EduDedicatedServerDetails();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EduDedicatedServerDetails();

    MCNAPI ::Bedrock::Result<void, std::error_code> fromJsonValue(::Json::Value const&);

    MCNAPI ~EduDedicatedServerDetails();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI EduDedicatedServerDetails(::Social::EduDedicatedServerDetails const&);

    MCNAPI ::Bedrock::Result<void> fromJsonValue(::Json::Value const& details);

    MCNAPI ::Social::EduDedicatedServerDetails& operator=(::Social::EduDedicatedServerDetails&&);

    MCNAPI ~EduDedicatedServerDetails();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Social::EduDedicatedServerDetails const&);
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

} // namespace Social
