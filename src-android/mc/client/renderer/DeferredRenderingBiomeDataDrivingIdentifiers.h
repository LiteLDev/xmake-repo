#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct DeferredRenderingBiomeDataDrivingIdentifiers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mLighting;
    ::ll::TypedStorage<8, 40, ::HashedString> mAtmospheric;
    ::ll::TypedStorage<8, 40, ::HashedString> mWater;
    ::ll::TypedStorage<8, 40, ::HashedString> mColorGrading;
    ::ll::TypedStorage<8, 40, ::HashedString> mSkybox;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredRenderingBiomeDataDrivingIdentifiers(::DeferredRenderingBiomeDataDrivingIdentifiers const&);

    MCNAPI ~DeferredRenderingBiomeDataDrivingIdentifiers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DeferredRenderingBiomeDataDrivingIdentifiers const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
