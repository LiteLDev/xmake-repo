#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class LevelChunkMetaData;
// clang-format on

class LevelChunkMetaDataBaseGameVersionWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mBaseGameVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkMetaDataBaseGameVersionWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LevelChunkMetaDataBaseGameVersionWrapper(::BaseGameVersion const&);

    MCNAPI void setUninitializedDataForMetaData(::LevelChunkMetaData&, bool) const;

    MCNAPI void updateLevelChunkMetaDataForSaving(::LevelChunkMetaData&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseGameVersion const&);
    // NOLINTEND
};
