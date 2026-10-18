#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class LevelSettings;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class LevelSettings;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct WorldData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelData&>                    levelData;
    ::ll::UntypedStorage<8, 696>                              levelSummary;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelSettings>> levelSettings;
    ::ll::TypedStorage<1, 1, bool>                            isDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldData& operator=(WorldData const&);
    WorldData(WorldData const&);
    WorldData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct WorldData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelData&>                        levelData;
    ::ll::TypedStorage<8, 848, ::LevelSummary>                    levelSummary;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelSettings>> levelSettings;
    ::ll::TypedStorage<1, 1, bool>                                isDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldData& operator=(WorldData const&);
    WorldData(WorldData const&);
    WorldData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct WorldData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
