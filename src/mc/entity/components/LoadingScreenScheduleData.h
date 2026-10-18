#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/components/LoadingScreenSchedule.h"
#include "mc/util/LoadingScreenId.h"
#else // @header-generator platform
#endif // @header-generator platform

struct LoadingScreenScheduleData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::LoadingScreenSchedule> mLoadingScreenSchedule;
    ::ll::UntypedStorage<4, 8>                        mLoadingScreenId;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkc397c6;
    ::ll::UntypedStorage<4, 8> mUnk689063;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LoadingScreenScheduleData& operator=(LoadingScreenScheduleData const&);
    LoadingScreenScheduleData(LoadingScreenScheduleData const&);
    LoadingScreenScheduleData();
#endif // @header-generator platform
};
