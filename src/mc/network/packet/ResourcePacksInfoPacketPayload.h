#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/PackInfoData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct PackInfoData;
#endif // @header-generator platform
struct PacksInfoData;
// clang-format on

struct ResourcePacksInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                       mResourcePackRequired;
    ::ll::TypedStorage<1, 1, bool>                       mHasAddonPacks;
    ::ll::TypedStorage<1, 1, bool>                       mHasScripts;
    ::ll::TypedStorage<1, 1, bool>                       mForceDisableVibrantVisuals;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>           mWorldTemplateIdAndVersion;
    ::ll::TypedStorage<8, 24, std::vector<PackInfoData>> mResourcePacks;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                           mResourcePackRequired;
    ::ll::TypedStorage<1, 1, bool>                           mHasAddonPacks;
    ::ll::TypedStorage<1, 1, bool>                           mHasScripts;
    ::ll::TypedStorage<1, 1, bool>                           mForceDisableVibrantVisuals;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>               mWorldTemplateIdAndVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInfoData>> mResourcePacks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResourcePacksInfoPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePacksInfoPacketPayload(bool, std::vector<PackInfoData>, bool, ::PackIdVersion const&, bool);
#else // @header-generator platform
    MCAPI ResourcePacksInfoPacketPayload(
        bool                          resourcePackRequired,
        ::std::vector<::PackInfoData> resourcePacks,
        bool                          hasAddonPacks,
        ::PackIdVersion const&        worldTemplateIdVersion,
        bool                          forceDisableVibrantVisuals
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PacksInfoData toPacksInfoData() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::PacksInfoData toPacksInfoData() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool, std::vector<PackInfoData>, bool, ::PackIdVersion const&, bool);
#else // @header-generator platform
    MCAPI void* $ctor(
        bool                          resourcePackRequired,
        ::std::vector<::PackInfoData> resourcePacks,
        bool                          hasAddonPacks,
        ::PackIdVersion const&        worldTemplateIdVersion,
        bool                          forceDisableVibrantVisuals
    );
#endif // @header-generator platform
    // NOLINTEND
};
