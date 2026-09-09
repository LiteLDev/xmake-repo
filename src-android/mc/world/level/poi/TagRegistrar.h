#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/poi/TagBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Poi { class TagProvider; }
namespace Poi { struct Registry; }
// clang-format on

namespace Poi {

struct TagRegistrar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Poi::TagProvider*>           mProvider;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*>        mRegistry;
    ::ll::TypedStorage<8, 24, std::vector<Poi::TagBuilder>> mBuilders;
    // NOLINTEND
};

} // namespace Poi
