#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

class SurfaceLevelCache : public ::IPreliminarySurfaceProvider {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                mBufferSizeXZ;
    ::ll::UntypedStorage<4, 8>                                     mMinPos;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                               mBufferSizeXZ;
    ::ll::TypedStorage<4, 8, ::DividedPos2d<4> const>              mMinPos;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IPreliminarySurfaceProvider const&> mPreliminarySurfaceProvider;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<short>>                  mSurfaceLevelBuffer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<short>>                mSurfaceLevelBuffer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceLevelCache& operator=(SurfaceLevelCache const&);
    SurfaceLevelCache(SurfaceLevelCache const&);
    SurfaceLevelCache();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SurfaceLevelCache();
#else // @header-generator platform
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    virtual ~SurfaceLevelCache() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SurfaceLevelCache(::DividedPos2d<4>, ::IPreliminarySurfaceProvider const&, ulong);
#else // @header-generator platform
    MCAPI SurfaceLevelCache(
        ::DividedPos2d<4>                    startPos,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceProvider,
        uint64                               bufferSizeXZ
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::DividedPos2d<4>, ::IPreliminarySurfaceProvider const&, ulong);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::DividedPos2d<4>                    startPos,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceProvider,
        uint64                               bufferSizeXZ
    );
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
