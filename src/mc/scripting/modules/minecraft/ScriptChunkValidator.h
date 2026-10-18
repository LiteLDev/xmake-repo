#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptChunkValidator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::set<ChunkPos>> mChunkPositions;
    ::ll::TypedStorage<4, 4, int const>           mMaxHeight;
    ::ll::TypedStorage<4, 4, int const>           mMinHeight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::set<::ChunkPos>> mChunkPositions;
    ::ll::TypedStorage<4, 4, int const>               mMaxHeight;
    ::ll::TypedStorage<4, 4, int const>               mMinHeight;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChunkValidator();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptChunkValidator(std::set<ChunkPos> const&, ::BlockSource const&);
#else // @header-generator platform
    MCAPI ScriptChunkValidator(::std::set<::ChunkPos> const& chunkPositions, ::BlockSource const& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator()(::BlockPos const&) const;

    MCNAPI ulong size() const;
#else // @header-generator platform
    MCAPI ~ScriptChunkValidator();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::set<ChunkPos> const&, ::BlockSource const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::set<::ChunkPos> const& chunkPositions, ::BlockSource const& region);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
