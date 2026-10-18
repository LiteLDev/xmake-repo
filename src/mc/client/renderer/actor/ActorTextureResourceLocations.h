#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

struct ActorTextureResourceLocations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>              mColorLocation;
    ::ll::TypedStorage<8, 56, std::optional<ResourceLocation>> mMERSLocation;
    ::ll::TypedStorage<8, 56, std::optional<ResourceLocation>> mNormalLocation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorTextureResourceLocations(::ActorTextureResourceLocations const&);

    MCNAPI ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations&&);

    MCNAPI ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorTextureResourceLocations const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

struct ActorTextureResourceLocations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                  mColorLocation;
    ::ll::TypedStorage<8, 64, ::std::optional<::ResourceLocation>> mMERSLocation;
    ::ll::TypedStorage<8, 64, ::std::optional<::ResourceLocation>> mNormalLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorTextureResourceLocations();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorTextureResourceLocations(::ActorTextureResourceLocations const&);

    MCFOLD ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations&&);

    MCFOLD ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations const&);

    MCAPI ~ActorTextureResourceLocations();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorTextureResourceLocations const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ActorTextureResourceLocations {};
#endif // @header-generator platform
#endif // @header-generator platform
