#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestAction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class GameTestSequence {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                         mLastTick;
    ::ll::TypedStorage<8, 8, ::gametest::BaseGameTestInstance&>                           mTestInstance;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<gametest::BaseGameTestAction>>> mActions;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestSequence& operator=(GameTestSequence const&);
    GameTestSequence(GameTestSequence const&);
    GameTestSequence();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<gametest::GameTestError> _executeWithoutFail(std::optional<gametest::GameTestError> const&);

    MCNAPI std::optional<gametest::GameTestError> _tick(int);

    MCNAPI ::gametest::GameTestSequence& thenExecute(std::function<std::optional<gametest::GameTestError>()>);

    MCNAPI ::gametest::GameTestSequence& thenExecuteAfter(int, std::function<std::optional<gametest::GameTestError>()>);

    MCNAPI ::gametest::GameTestSequence& thenExecuteFor(int, std::function<std::optional<gametest::GameTestError>()>);

    MCNAPI void thenFail(::gametest::GameTestError);

    MCNAPI ::gametest::GameTestSequence& thenIdle(int);

    MCNAPI void thenSucceed();

    MCNAPI ::gametest::GameTestSequence& thenWait(std::function<std::optional<gametest::GameTestError>()>);

    MCNAPI ::gametest::GameTestSequence& thenWaitAfter(int, std::function<std::optional<gametest::GameTestError>()>);
    // NOLINTEND
};

} // namespace gametest
