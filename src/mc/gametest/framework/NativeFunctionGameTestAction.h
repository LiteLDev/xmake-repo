#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestAction.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gametest/framework/GameTestError.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on
#endif // @header-generator platform

namespace gametest {

class NativeFunctionGameTestAction : public ::gametest::BaseGameTestAction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mFn;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk69d2a1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NativeFunctionGameTestAction& operator=(NativeFunctionGameTestAction const&);
    NativeFunctionGameTestAction(NativeFunctionGameTestAction const&);
#endif // @header-generator platform
    NativeFunctionGameTestAction();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NativeFunctionGameTestAction();

    virtual std::optional<gametest::GameTestError> run();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> run() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError> $run();
#else // @header-generator platform
    MCNAPI ::std::optional<::gametest::GameTestError> $run();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
