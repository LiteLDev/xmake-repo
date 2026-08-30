#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

class SurfaceLevelCache : public ::IPreliminarySurfaceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                mBufferSizeXZ;
    ::ll::UntypedStorage<4, 8>                                     mMinPos;
    ::ll::TypedStorage<8, 8, ::IPreliminarySurfaceProvider const&> mPreliminarySurfaceProvider;
    ::ll::TypedStorage<8, 24, std::vector<short>>                  mSurfaceLevelBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceLevelCache& operator=(SurfaceLevelCache const&);
    SurfaceLevelCache(SurfaceLevelCache const&);
    SurfaceLevelCache();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceLevelCache();

    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SurfaceLevelCache(::DividedPos2d<4>, ::IPreliminarySurfaceProvider const&, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DividedPos2d<4>, ::IPreliminarySurfaceProvider const&, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
