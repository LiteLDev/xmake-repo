#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/resource/ResourceLocation.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct InvalidPacksFilterGroup;
#else // @header-generator platform
class ResourceLocation;
#endif // @header-generator platform
// clang-format on

class InvalidPacks {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidPackLocation;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidBehaviorPackLocation;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidResourcePackLocation;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidTemplatePackLocation;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk8e3c55;
    ::ll::UntypedStorage<8, 24> mUnk1ad14b;
    ::ll::UntypedStorage<8, 24> mUnk76cedd;
    ::ll::UntypedStorage<8, 24> mUnkf4d38b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidPacks& operator=(InvalidPacks const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    InvalidPacks(InvalidPacks const&);
    InvalidPacks();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InvalidPacks(::InvalidPacks const&);
#else // @header-generator platform
    MCNAPI void addInvalidPack(::ResourceLocation const& packLocation, ::PackType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addInvalidPack(::ResourceLocation const&, ::PackType);

    MCNAPI std::vector<ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const;

    MCNAPI std::vector<ResourceLocation> const& getInvalidPacks(::PackType) const;

    MCNAPI ::InvalidPacks& operator=(::InvalidPacks&&);

    MCNAPI void untrackInvalidPack(::ResourceLocation const&);

    MCNAPI ~InvalidPacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InvalidPacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void untrackInvalidPack(::ResourceLocation const& packLocation);
#endif // @header-generator platform
    // NOLINTEND
};
