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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IGameTestHelperProvider();
#else // @header-generator platform
    virtual ~IGameTestHelperProvider() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<gametest::BaseGameTestHelper> createGameTestHelper(::gametest::BaseGameTestInstance&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::gametest::BaseGameTestHelper>
    createGameTestHelper(::gametest::BaseGameTestInstance& testInstance) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<gametest::IGameTestHelperProvider> clone() = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::gametest::IGameTestHelperProvider> clone() = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace gametest
