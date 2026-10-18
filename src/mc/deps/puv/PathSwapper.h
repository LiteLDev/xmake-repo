#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct PathElement; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Puv::internal {

struct PathSwapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<Puv::internal::PathElement, 1>&> mPath;
    ::ll::UntypedStorage<8, 72>                                                       mTemp;
    ::ll::TypedStorage<1, 1, bool>                                                    mArmed;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkb4921f;
    ::ll::UntypedStorage<8, 80> mUnkb6ad25;
    ::ll::UntypedStorage<1, 1>  mUnkb0d597;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PathSwapper& operator=(PathSwapper const&);
    PathSwapper(PathSwapper const&);
    PathSwapper();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Puv::internal
