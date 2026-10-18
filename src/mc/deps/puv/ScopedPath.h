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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<Puv::internal::PathElement, 1>&> mPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk16802b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedPath& operator=(ScopedPath const&);
    ScopedPath(ScopedPath const&);
    ScopedPath();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScopedPath();
#else // @header-generator platform
    MCNAPI
    ScopedPath(::Bedrock::small_vector<::Puv::internal::PathElement, 1>& path, ::Puv::internal::PathElement point);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void*
    $ctor(::Bedrock::small_vector<::Puv::internal::PathElement, 1>& path, ::Puv::internal::PathElement point);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Puv::internal
