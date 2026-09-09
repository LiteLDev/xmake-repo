#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::frameobject::components { struct ScreenSpaceOccupancyResult; }
// clang-format on

namespace dragon::frameobject::components {

struct BoundingVolume {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 28, std::variant<std::pair<glm::vec<3, float, (glm::qualifier)0>, glm::vec<3, float, (glm::qualifier)0>>>> mBounds;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BoundingVolume& operator=(BoundingVolume const&);
    BoundingVolume();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BoundingVolume(::dragon::frameobject::components::BoundingVolume&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::frameobject::components::BoundingVolume&&);
    // NOLINTEND
};

} // namespace dragon::frameobject::components
