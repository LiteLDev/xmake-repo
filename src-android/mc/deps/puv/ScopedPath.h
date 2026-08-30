#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct PathElement; }
// clang-format on

namespace Puv::internal {

struct ScopedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<Puv::internal::PathElement, 1>&> mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedPath& operator=(ScopedPath const&);
    ScopedPath(ScopedPath const&);
    ScopedPath();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScopedPath();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
