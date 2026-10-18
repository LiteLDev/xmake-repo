#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/poi/TagBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Poi { class TagProvider; }
namespace Poi { struct Registry; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

struct TagRegistrar {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Poi::TagProvider*>           mProvider;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*>        mRegistry;
    ::ll::TypedStorage<8, 24, std::vector<Poi::TagBuilder>> mBuilders;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk2a4bb8;
    ::ll::UntypedStorage<8, 8>  mUnk64e834;
    ::ll::UntypedStorage<8, 24> mUnk623d99;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TagRegistrar& operator=(TagRegistrar const&);
    TagRegistrar(TagRegistrar const&);
    TagRegistrar();
#endif // @header-generator platform
};

} // namespace Poi
