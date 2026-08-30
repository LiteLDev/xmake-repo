#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

struct FlipbookTextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation> resourceLocation;
    ::ll::TypedStorage<8, 24, std::vector<int>>   frames;
    ::ll::TypedStorage<4, 4, int>                 replicate;
    ::ll::TypedStorage<4, 4, int>                 ticksPerFrame;
    ::ll::TypedStorage<1, 1, bool>                blend;
    ::ll::TypedStorage<4, 4, int>                 blockVariant;
    ::ll::TypedStorage<8, 24, std::string>        tileName;
    ::ll::TypedStorage<1, 1, bool>                animationDisabled;
    ::ll::TypedStorage<4, 8, std::optional<int>>  textureVariant;
    // NOLINTEND

public:
    // prevent constructor by default
    FlipbookTextureDescription& operator=(FlipbookTextureDescription const&);
    FlipbookTextureDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlipbookTextureDescription(::FlipbookTextureDescription const&);

    MCNAPI ~FlipbookTextureDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FlipbookTextureDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
