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
class ContentIdentity;
#else // @header-generator platform
struct PackInfoData;
#endif // @header-generator platform
// clang-format on

struct PacksInfoData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                       mResourcePackRequired;
    ::ll::TypedStorage<1, 1, bool>                       mHasAddonPacks;
    ::ll::TypedStorage<1, 1, bool>                       mHasScripts;
    ::ll::TypedStorage<1, 1, bool>                       mForceDisableVibrantVisuals;
    ::ll::UntypedStorage<8, 48>                          mWorldTemplateIdAndVersion;
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

public:
    // prevent constructor by default
    PacksInfoData(PacksInfoData const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<ContentIdentity, std::string> collectKeys() const;

    MCNAPI ulong getRequiredResourcePackSize() const;

    MCNAPI ulong getResourcePackSize() const;

    MCNAPI ~PacksInfoData();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~PacksInfoData();
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
