#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct PathElement; }
// clang-format on

namespace Puv::internal {

struct PathSwapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<Puv::internal::PathElement, 1>&> mPath;
    ::ll::UntypedStorage<8, 72>                                                       mTemp;
    ::ll::TypedStorage<1, 1, bool>                                                    mArmed;
    // NOLINTEND

public:
    // prevent constructor by default
    PathSwapper& operator=(PathSwapper const&);
    PathSwapper(PathSwapper const&);
    PathSwapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PathSwapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
