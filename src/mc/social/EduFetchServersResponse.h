#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/social/EduDedicatedServerDetails.h"
#include "mc/social/EduResponseError.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Social {

struct EduFetchServersResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, std::optional<Social::EduResponseError>> error;
    ::ll::UntypedStorage<8, 56>                                        servers;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk92312f;
    ::ll::UntypedStorage<8, 56> mUnkfcf064;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);
    EduFetchServersResponse(EduFetchServersResponse const&);
    EduFetchServersResponse();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);
    EduFetchServersResponse();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~EduFetchServersResponse();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI EduFetchServersResponse(::Social::EduFetchServersResponse const&);

    MCNAPI ~EduFetchServersResponse();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Social::EduFetchServersResponse const&);
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
