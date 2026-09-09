#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DanceComponentListener;
class Vec3;
// clang-format on

class DanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<DanceComponentListener>> mListener;
    // NOLINTEND

public:
    // prevent constructor by default
    DanceComponent& operator=(DanceComponent const&);
    DanceComponent(DanceComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DanceComponent();

    MCNAPI bool inListenDistance(::Vec3 const&) const;

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void initFromDefinition(::Actor&, float const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
