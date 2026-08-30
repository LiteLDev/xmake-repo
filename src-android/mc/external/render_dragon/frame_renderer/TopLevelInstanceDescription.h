#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::frameobject::components { struct RaytraceObject; }
namespace dragon::frameobject::components { struct Transform; }
// clang-format on

namespace dragon::framerenderer::drawcommands {

struct TopLevelInstanceDescription {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const dragon::frameobject::components::RaytraceObject>> rayTraceObject;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const dragon::frameobject::components::Transform>> transform;
    // clang-format on
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawcommands
