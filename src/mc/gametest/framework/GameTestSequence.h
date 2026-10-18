#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestAction; }
namespace gametest { class BaseGameTestInstance; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class GameTestSequence {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                         mLastTick;
    ::ll::TypedStorage<8, 8, ::gametest::BaseGameTestInstance&>                           mTestInstance;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<gametest::BaseGameTestAction>>> mActions;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk10d998;
    ::ll::UntypedStorage<8, 8>  mUnk8825e0;
    ::ll::UntypedStorage<8, 24> mUnkb23583;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestSequence& operator=(GameTestSequence const&);
    GameTestSequence(GameTestSequence const&);
    GameTestSequence();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError> _executeWithoutFail(std::optional<gametest::GameTestError> const&);
#else // @header-generator platform
    MCNAPI ::std::optional<::gametest::GameTestError>
    _executeWithoutFail(::std::optional<::gametest::GameTestError> const& error);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError> _tick(int);
#else // @header-generator platform
    MCNAPI ::std::optional<::gametest::GameTestError> _tick(int currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gametest::GameTestSequence& thenExecute(std::function<std::optional<gametest::GameTestError>()>);
#else // @header-generator platform
    MCNAPI ::gametest::GameTestSequence& thenExecute(::std::function<::std::optional<::gametest::GameTestError>()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gametest::GameTestSequence& thenExecuteAfter(int, std::function<std::optional<gametest::GameTestError>()>);
#else // @header-generator platform
    MCNAPI ::gametest::GameTestSequence&
    thenExecuteAfter(int tickDelay, ::std::function<::std::optional<::gametest::GameTestError>()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gametest::GameTestSequence& thenExecuteFor(int, std::function<std::optional<gametest::GameTestError>()>);
#else // @header-generator platform
    MCNAPI ::gametest::GameTestSequence&
    thenExecuteFor(int tickCount, ::std::function<::std::optional<::gametest::GameTestError>()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void thenFail(::gametest::GameTestError);

    MCNAPI ::gametest::GameTestSequence& thenIdle(int);
#else // @header-generator platform
    MCNAPI void thenFail(::gametest::GameTestError error);
#endif // @header-generator platform

    MCNAPI void thenSucceed();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gametest::GameTestSequence& thenWait(std::function<std::optional<gametest::GameTestError>()>);
#else // @header-generator platform
    MCNAPI ::gametest::GameTestSequence& thenWait(::std::function<::std::optional<::gametest::GameTestError>()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gametest::GameTestSequence& thenWaitAfter(int, std::function<std::optional<gametest::GameTestError>()>);
#else // @header-generator platform
    MCNAPI ::gametest::GameTestSequence&
    thenWaitAfter(int tickDelay, ::std::function<::std::optional<::gametest::GameTestError>()> fn);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace gametest
