#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/LoadingScreenId.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct LoadingScreenId;
// clang-format on
#endif // @header-generator platform

struct ServerAnticipateClientLoadingScreenComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<LoadingScreenId>> mLoadingScreenIds;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::LoadingScreenId>> mLoadingScreenIds;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerAnticipateClientLoadingScreenComponent& operator=(ServerAnticipateClientLoadingScreenComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
