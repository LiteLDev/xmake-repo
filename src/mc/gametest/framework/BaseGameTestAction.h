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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<int> const> mExpectedDelay;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8> mUnkf1db7c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BaseGameTestAction& operator=(BaseGameTestAction const&);
    BaseGameTestAction(BaseGameTestAction const&);
    BaseGameTestAction();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGameTestAction() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> run() = 0;
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> run() = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace gametest
