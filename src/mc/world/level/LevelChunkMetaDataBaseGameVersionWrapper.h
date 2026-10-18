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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mBaseGameVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::BaseGameVersion> mBaseGameVersion;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LevelChunkMetaDataBaseGameVersionWrapper();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LevelChunkMetaDataBaseGameVersionWrapper(::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI void initializeLevelChunkMetaData(::LevelChunkMetaData& metaData, bool use3DBiomeMaps) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUninitializedDataForMetaData(::LevelChunkMetaData&, bool) const;

    MCNAPI void updateLevelChunkMetaDataForSaving(::LevelChunkMetaData&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI void updateLevelChunkMetaDataForSaving(::LevelChunkMetaData& metaData) const;
#endif // @header-generator platform
    // NOLINTEND
};
