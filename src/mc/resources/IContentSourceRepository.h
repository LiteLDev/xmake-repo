#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackStack;
struct InvalidPacksFilterGroup;
struct PackInstanceId;
// clang-format on

class IContentSourceRepository {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentSourceRepository() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deletePackFiles(::ResourceLocation const&) = 0;
#else // @header-generator platform
    virtual void deletePackFiles(::ResourceLocation const& packLocation) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postDeletePack(::ResourceLocation const&) = 0;
#else // @header-generator platform
    virtual void postDeletePack(::ResourceLocation const& packLocation) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePackStack createStack(std::vector<PackInstanceId> const&) = 0;
#else // @header-generator platform
    virtual ::ResourcePackStack createStack(::std::vector<::PackInstanceId> const& identities) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
