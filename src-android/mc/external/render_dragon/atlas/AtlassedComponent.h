#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

namespace dragon::frameobject::components {

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

} // namespace dragon::frameobject::components
