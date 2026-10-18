#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/poi/RegionRegistry.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::Poi { struct RegionRegistry; }
// clang-format on
#endif // @header-generator platform

namespace Poi {

struct FileStorage {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // FileStorage inner types define
    using RegionRegistry = ::SharedTypes::v1_21_130::Poi::RegionRegistry;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_130::Poi::RegionRegistry> mRegionRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkdacbec;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FileStorage& operator=(FileStorage const&);
    FileStorage(FileStorage const&);
    FileStorage();
#endif // @header-generator platform
};

} // namespace Poi
