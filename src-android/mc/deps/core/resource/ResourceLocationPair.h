#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/ResourceLocation.h"

class ResourceLocationPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mResourceLocation;
    ::ll::UntypedStorage<8, 48>                   mPackId;
    ::ll::TypedStorage<4, 4, int>                 mPackPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLocationPair(ResourceLocationPair const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceLocationPair();

    MCNAPI ResourceLocationPair(::ResourceLocation const&, ::PackIdVersion const&, int);

    MCNAPI bool operator<(::ResourceLocationPair const&) const;

    MCNAPI bool operator==(::ResourceLocationPair const&) const;

    MCNAPI ~ResourceLocationPair();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ResourceLocation const&, ::PackIdVersion const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
