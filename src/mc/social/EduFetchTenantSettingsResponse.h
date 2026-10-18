#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/social/EduResponseError.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Social {

struct EduFetchTenantSettingsResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, std::optional<Social::EduResponseError>>                           error;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                enabled;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>> refreshAfterSeconds;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk3a593a;
    ::ll::UntypedStorage<1, 2>  mUnk55888f;
    ::ll::UntypedStorage<8, 16> mUnk2fc83d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EduFetchTenantSettingsResponse& operator=(EduFetchTenantSettingsResponse const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EduFetchTenantSettingsResponse(EduFetchTenantSettingsResponse const&);
    EduFetchTenantSettingsResponse();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~EduFetchTenantSettingsResponse();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~EduFetchTenantSettingsResponse();
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
