#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

class AtlasTileCaptureDescription {
public:
    // AtlasTileCaptureDescription inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // AtlasTileCaptureDescription inner types define
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
};
