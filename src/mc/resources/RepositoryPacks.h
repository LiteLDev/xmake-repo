#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/RepositoryPackTuple.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Pack;
class ResourceLocation;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePack;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
#endif // @header-generator platform
struct PackIdVersion;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
struct RepositoryPackTuple;
#endif // @header-generator platform
// clang-format on

class RepositoryPacks {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // RepositoryPacks inner types define
    using Iterator = RepositoryPackTuple*;

    using ConstIterator = const RepositoryPackTuple*;

    using PackTuple = ::RepositoryPackTuple;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<RepositoryPackTuple>> mAllResourcePacks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk8b45dc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RepositoryPacks& operator=(RepositoryPacks const&);
    RepositoryPacks(RepositoryPacks const&);
#endif // @header-generator platform
    RepositoryPacks();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ResourcePack> getResourcePackForPackId(::PackIdVersion const&) const;
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::ResourcePack> getResourcePackForPackId(::PackIdVersion const& idAndVersion) const;
#endif // @header-generator platform
    // NOLINTEND
};
