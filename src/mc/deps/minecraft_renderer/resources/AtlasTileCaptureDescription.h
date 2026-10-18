#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#else // @header-generator platform
#endif // @header-generator platform

class AtlasTileCaptureDescription {
public:
    // AtlasTileCaptureDescription inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // AtlasTileCaptureDescription inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle> mTile;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl(Impl const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<AtlasTileCaptureDescription::Impl>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AtlasTileCaptureDescription(::dragon::atlas::AtlasTileHandle const&);

    MCNAPI AtlasTileCaptureDescription(::AtlasTileCaptureDescription const&);

    MCNAPI ::dragon::atlas::AtlasTileHandle const& get() const;

    MCNAPI ::AtlasTileCaptureDescription& operator=(::AtlasTileCaptureDescription const&);

    MCNAPI ~AtlasTileCaptureDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::atlas::AtlasTileHandle const&);

    MCNAPI void* $ctor(::AtlasTileCaptureDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct Impl {};
#endif // @header-generator platform
};
