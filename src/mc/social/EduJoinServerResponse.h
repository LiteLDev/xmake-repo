#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/social/EduHeadlessConnectionHandshake.h"
#include "mc/social/EduResponseError.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Social {

struct EduJoinServerResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, std::optional<Social::EduResponseError>>                error;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                             ip;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                      port;
    ::ll::TypedStorage<8, 120, std::optional<Social::EduHeadlessConnectionHandshake>> handshake;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72>  mUnkce4b98;
    ::ll::UntypedStorage<8, 40>  mUnk7d94d0;
    ::ll::UntypedStorage<4, 8>   mUnk9dc522;
    ::ll::UntypedStorage<8, 152> mUnk9150cd;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EduJoinServerResponse& operator=(EduJoinServerResponse const&);
    EduJoinServerResponse(EduJoinServerResponse const&);
    EduJoinServerResponse();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EduJoinServerResponse(::Social::EduJoinServerResponse const&);

    MCNAPI EduJoinServerResponse(::Social::EduJoinServerResponse&&);

    MCNAPI ~EduJoinServerResponse();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::EduJoinServerResponse const&);

    MCNAPI void* $ctor(::Social::EduJoinServerResponse&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~EduJoinServerResponse();
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
