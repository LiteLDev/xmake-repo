#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

namespace mce {

struct CameraMatrices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix> world;
    ::ll::TypedStorage<4, 64, ::Matrix> view;
    ::ll::TypedStorage<4, 64, ::Matrix> proj;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraMatrices& operator=(CameraMatrices const&);
};

} // namespace mce
