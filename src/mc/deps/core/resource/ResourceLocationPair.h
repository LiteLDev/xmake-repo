#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/ResourceLocation.h"

class ResourceLocationPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mResourceLocation;
    ::ll::UntypedStorage<8, 48>                   mPackId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mResourceLocation;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>    mPackId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                 mPackPosition;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ResourceLocationPair(ResourceLocationPair const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourceLocationPair& operator=(ResourceLocationPair const&);
    ResourceLocationPair();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourceLocationPair();

    MCNAPI ResourceLocationPair(::ResourceLocation const&, ::PackIdVersion const&, int);

    MCNAPI bool operator<(::ResourceLocationPair const&) const;

    MCNAPI bool operator==(::ResourceLocationPair const&) const;

    MCNAPI ~ResourceLocationPair();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ResourceLocationPair(::ResourceLocationPair&&);

    MCAPI ResourceLocationPair(::ResourceLocationPair const&);

    MCAPI ResourceLocationPair(::ResourceLocation const& location, ::PackIdVersion const& packId, int packPosition);

    MCAPI ~ResourceLocationPair();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ResourceLocation const&, ::PackIdVersion const&, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ResourceLocationPair&&);

    MCAPI void* $ctor(::ResourceLocationPair const&);

    MCAPI void* $ctor(::ResourceLocation const& location, ::PackIdVersion const& packId, int packPosition);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
