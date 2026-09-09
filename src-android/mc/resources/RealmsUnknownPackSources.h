#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RealmsUnknownPackSource;
// clang-format on

struct RealmsUnknownPackSources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<RealmsUnknownPackSource>> realmsUnknownResourcePackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RealmsUnknownPackSource>> realmsUnknownBehaviorPackSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsUnknownPackSources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
