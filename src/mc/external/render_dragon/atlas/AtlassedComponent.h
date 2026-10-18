#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
struct AtlassedComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mHandles;
    // NOLINTEND

public:
    // prevent constructor by default
    AtlassedComponent& operator=(AtlassedComponent const&);
    AtlassedComponent(AtlassedComponent const&);
    AtlassedComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AtlassedComponent(::dragon::frameobject::components::AtlassedComponent&&);

    MCNAPI ~AtlassedComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::frameobject::components::AtlassedComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct AtlassedComponent {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components
