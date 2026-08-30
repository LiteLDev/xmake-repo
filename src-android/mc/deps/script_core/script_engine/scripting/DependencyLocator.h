#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class DependencyLocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<entt::meta_any>> mServices;
    // NOLINTEND
};

} // namespace Scripting
