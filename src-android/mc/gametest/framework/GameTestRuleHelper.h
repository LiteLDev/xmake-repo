#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/gametest/framework/IGameTestRuleHelper.h"
#include "mc/world/level/storage/GameRule.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

namespace gametest {

class GameTestRuleHelper : public ::gametest::IGameTestRuleHelper {
public:
    // GameTestRuleHelper inner types declare
    // clang-format off
    struct GameRuleInfo;
    // clang-format on

    // GameTestRuleHelper inner types define
    struct GameRuleInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                              mId;
        ::ll::UntypedStorage<1, 1>                                                 mRestorationType;
        ::ll::TypedStorage<4, 8, std::variant<cereal::NullType, bool, int, float>> mRestorationValue;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevel&>                                                mLevel;
    ::ll::TypedStorage<1, 1, bool>                                                     mAlreadyCleared;
    ::ll::TypedStorage<8, 24, std::vector<gametest::GameTestRuleHelper::GameRuleInfo>> mRulesToClear;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestRuleHelper& operator=(GameTestRuleHelper const&);
    GameTestRuleHelper(GameTestRuleHelper const&);
    GameTestRuleHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTestRuleHelper();

    virtual void addRuleToClear(int);

    virtual void clearRules();

    virtual void restoreRules();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addRuleToClear(int);

    MCNAPI void $clearRules();

    MCNAPI void $restoreRules();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
