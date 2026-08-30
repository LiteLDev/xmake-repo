#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

struct Transform {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 72, std::variant<glm::mat<4, 4, float, (glm::qualifier)0>, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>, ulong>> mWorldMatrix;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Transform& operator=(Transform const&);
    Transform();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Transform(::dragon::frameobject::components::Transform&&);

    MCNAPI ~Transform();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::frameobject::components::Transform&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::frameobject::components
