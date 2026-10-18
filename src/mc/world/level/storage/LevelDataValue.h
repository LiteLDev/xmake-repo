#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/LevelSeed64.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct LevelDataValue {
public:
    // LevelDataValue inner types declare
    // clang-format off
    struct Tag;
    // clang-format on

    // LevelDataValue inner types define
    struct Tag {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mTag;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::LevelDataValue::Tag& operator=(::LevelDataValue::Tag&&);
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mTag;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 32, std::variant<int, bool, float, std::string, GeneratorType, GameType, BlockPos, LevelSeed64, LevelDataValue::Tag, DaylightCycle>> mValue;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            int,
            bool,
            float,
            ::std::string,
            ::GeneratorType,
            ::GameType,
            ::BlockPos,
            ::LevelSeed64,
            ::LevelDataValue::Tag,
            ::DaylightCycle>>
        mValue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~LevelDataValue();
#else // @header-generator platform
    MCAPI ~LevelDataValue();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
