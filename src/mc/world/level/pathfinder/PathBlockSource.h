#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/IPathBlockSource.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class CachedChunkBlockSource;
struct ActorPathingData;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PathBlockSource : public ::IPathBlockSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                mIsInWater;
    ::ll::TypedStorage<1, 1, bool const>                mIsInLava;
    ::ll::TypedStorage<8, 8, ::CachedChunkBlockSource&> mBlockSource;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkf4b1d0;
    ::ll::UntypedStorage<1, 1> mUnka0ab3a;
    ::ll::UntypedStorage<8, 8> mUnkf2f219;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PathBlockSource& operator=(PathBlockSource const&);
    PathBlockSource(PathBlockSource const&);
    PathBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PathBlockSource();
#else // @header-generator platform
    virtual ~PathBlockSource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInWater() const;
#else // @header-generator platform
    virtual bool isInWater() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInLava() const;
#else // @header-generator platform
    virtual bool isInLava() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWaterBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isWaterBlock(::BlockPos const& blockPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLavaBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isLavaBlock(::BlockPos const& blockPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSolidBlock(::BlockPos const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool isSolidBlock(::BlockPos const& blockPos) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInWater() const;

    MCNAPI bool $isInLava() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWaterBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCNAPI bool $isWaterBlock(::BlockPos const& blockPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLavaBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCNAPI bool $isLavaBlock(::BlockPos const& blockPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSolidBlock(::BlockPos const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI bool $isSolidBlock(::BlockPos const& blockPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
