#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
// clang-format on

class LevelChunkMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CompoundTag> mMetaData;
    ::ll::TypedStorage<8, 8, ulong>          mCurrentHash;
    ::ll::TypedStorage<1, 1, bool>           mHashNeedsRecomputing;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _recomputeHash() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& INVALID_META_DATA();
    // NOLINTEND
};
