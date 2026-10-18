#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gametest/framework/IGameTestRuleHelper.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/GameRule.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                                              mId;
        ::ll::UntypedStorage<1, 1>                                                 mRestorationType;
        ::ll::TypedStorage<4, 8, std::variant<cereal::NullType, bool, int, float>> mRestorationValue;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk79ff04;
        ::ll::UntypedStorage<1, 1> mUnk11ddbd;
        ::ll::UntypedStorage<4, 8> mUnkf91432;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        GameRuleInfo& operator=(GameRuleInfo const&);
        GameRuleInfo(GameRuleInfo const&);
        GameRuleInfo();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ILevel&>                                                mLevel;
    ::ll::TypedStorage<1, 1, bool>                                                     mAlreadyCleared;
    ::ll::TypedStorage<8, 24, std::vector<gametest::GameTestRuleHelper::GameRuleInfo>> mRulesToClear;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk849153;
    ::ll::UntypedStorage<1, 1>  mUnk5d4cbc;
    ::ll::UntypedStorage<8, 24> mUnk839b45;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestRuleHelper& operator=(GameTestRuleHelper const&);
    GameTestRuleHelper(GameTestRuleHelper const&);
    GameTestRuleHelper();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameTestRuleHelper();
#else // @header-generator platform
    virtual ~GameTestRuleHelper() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addRuleToClear(int);
#else // @header-generator platform
    virtual void addRuleToClear(int ruleID) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearRules();
#else // @header-generator platform
    virtual void clearRules() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void restoreRules();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void restoreRules() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addRuleToClear(int);
#else // @header-generator platform
    MCNAPI void $addRuleToClear(int ruleID);
#endif // @header-generator platform

    MCNAPI void $clearRules();

    MCNAPI void $restoreRules();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
