#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/WorldTemplateMutableInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class WorldTemplateCollectionView;
struct WorldTemplateData;
#else // @header-generator platform
#endif // @header-generator platform
struct WorldTemplateInfo;
// clang-format on

class WorldTemplateCollection {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // WorldTemplateCollection inner types define
    using Storage = std::vector<std::unique_ptr<const WorldTemplateInfo>>;

    using SortMethod = ::brstd::function_ref<
        bool(const std::unique_ptr<const WorldTemplateInfo>&, const std::unique_ptr<const WorldTemplateInfo>&)>;

    using Finder = ::brstd::function_ref<bool(const WorldTemplateInfo&) const, bool(const WorldTemplateInfo&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<std::vector<std::unique_ptr<const WorldTemplateInfo>>>>> mWorldTemplates;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, WorldTemplateMutableInfo>> mWorldTemplatesMutable;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnke6f53b;
    ::ll::UntypedStorage<8, 64> mUnkb4d91e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateCollection& operator=(WorldTemplateCollection const&);
    WorldTemplateCollection(WorldTemplateCollection const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldTemplateCollection();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldTemplateMutableInfo* getMutableInfo(::WorldTemplateInfo const&);
#else // @header-generator platform
    MCNAPI ~WorldTemplateCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
