#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class LevelData;
// clang-format on

class DataWrapperUpdater {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>       mLevelId;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&> mLevelListCache;
    // NOLINTEND

public:
    // prevent constructor by default
    DataWrapperUpdater& operator=(DataWrapperUpdater const&);
    DataWrapperUpdater(DataWrapperUpdater const&);
    DataWrapperUpdater();
};
