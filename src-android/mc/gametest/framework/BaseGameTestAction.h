#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class BaseGameTestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<int> const> mExpectedDelay;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGameTestAction() = default;

    virtual std::optional<gametest::GameTestError> run() = 0;
    // NOLINTEND
};

} // namespace gametest
