#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FlipbookTextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk15a5a2;
    ::ll::UntypedStorage<8, 24> mUnk312b96;
    ::ll::UntypedStorage<4, 4>  mUnk750ed3;
    ::ll::UntypedStorage<4, 4>  mUnk64ec1e;
    ::ll::UntypedStorage<1, 1>  mUnk78d83b;
    ::ll::UntypedStorage<4, 4>  mUnkfe2b9f;
    ::ll::UntypedStorage<8, 32> mUnkb5dbdb;
    ::ll::UntypedStorage<1, 1>  mUnkfda64a;
    ::ll::UntypedStorage<4, 8>  mUnka45eb7;
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
#else // @header-generator platform
struct FlipbookTextureDescription {};
#endif // @header-generator platform
#endif // @header-generator platform
