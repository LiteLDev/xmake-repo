#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class IGameTestHelperProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IGameTestHelperProvider();

    virtual std::unique_ptr<gametest::BaseGameTestHelper> createGameTestHelper(::gametest::BaseGameTestInstance&) = 0;

    virtual std::unique_ptr<gametest::IGameTestHelperProvider> clone() = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
