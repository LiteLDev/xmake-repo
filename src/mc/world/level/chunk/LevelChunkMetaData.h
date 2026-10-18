#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
#if defined(LL_PLAT_A) // @header-generator platform
class IDataOutput;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelChunkMetaData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag> mMetaData;
    ::ll::TypedStorage<8, 8, ulong>          mCurrentHash;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag> mMetaData;
    ::ll::TypedStorage<8, 8, uint64>         mCurrentHash;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>           mHashNeedsRecomputing;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelChunkMetaData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _recomputeHash() const;
#else // @header-generator platform
    MCAPI LevelChunkMetaData(::LevelChunkMetaData const& otherMetaData);

#ifdef LL_PLAT_S
    MCAPI explicit LevelChunkMetaData(::IDataInput& stream);
#endif

    MCAPI void _recomputeHash() const;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong const& INVALID_META_DATA();
#else // @header-generator platform
    MCAPI void* $ctor(::LevelChunkMetaData const& otherMetaData);

#ifdef LL_PLAT_S
    MCAPI void* $ctor(::IDataInput& stream);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
