#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/BackwardsCompatTextureInfo.h"
#include "mc/deps/core/resource/ResourceLocation.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BackwardsCompatTextureInfo;
#endif // @header-generator platform
class ResourceLocationPair;
// clang-format on

class BackwardsCompatTextureGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ResourceLocation, BackwardsCompatTextureInfo>> mBackCompatMap;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkad3534;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BackwardsCompatTextureGroup& operator=(BackwardsCompatTextureGroup const&);
    BackwardsCompatTextureGroup(BackwardsCompatTextureGroup const&);
    BackwardsCompatTextureGroup();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BackwardsCompatTextureInfo const& getBackCompatInfo(::ResourceLocation const&) const;

    MCNAPI void loadTextures(::gsl::span<ResourceLocationPair> const);

    MCNAPI void populate(std::string const&);

    MCNAPI ~BackwardsCompatTextureGroup();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void loadTextures(::gsl::span<::ResourceLocationPair> texturesToLoad);

    MCNAPI void populate(::std::string const& backCompatFile);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BackwardsCompatTextureInfo const& invalidInfo();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
