#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class LevelData;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class DataWrapperUpdater {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>       mLevelId;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&> mLevelListCache;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd315fe;
    ::ll::UntypedStorage<8, 8>  mUnkd7efe6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DataWrapperUpdater& operator=(DataWrapperUpdater const&);
    DataWrapperUpdater(DataWrapperUpdater const&);
    DataWrapperUpdater();
};
