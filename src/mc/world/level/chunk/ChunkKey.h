#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ChunkKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos const>      pos;
    ::ll::TypedStorage<4, 4, ::DimensionType const> id;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ChunkKey();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChunkKey(::LevelChunk const&);

    MCNAPI ChunkKey(::ChunkPos const&, ::DimensionType);

    MCNAPI std::string_view asSpan() const;

    MCNAPI ulong hashCode() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelChunk const&);

    MCNAPI void* $ctor(::ChunkPos const&, ::DimensionType);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
