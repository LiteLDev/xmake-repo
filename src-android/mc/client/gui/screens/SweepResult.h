#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct SweepResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControl>> collision;
    // NOLINTEND

public:
    // prevent constructor by default
    SweepResult& operator=(SweepResult const&);
    SweepResult(SweepResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SweepResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
