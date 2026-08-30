#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class GameRule;
class GameRules;
class Level;
namespace Json { class Value; }
// clang-format on

class GameRuleCommand : public ::Command {
public:
    // GameRuleCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // GameRuleCommand inner types define
    struct InitProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::GameRules&> mGameRules;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit InitProxy(::Level&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Level&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mGameRule;
    ::ll::TypedStorage<8, 24, std::string> mEnumStringValue;
    ::ll::TypedStorage<4, 4, float>        mFloatValue;
    ::ll::TypedStorage<4, 4, int>          mIntValue;
    ::ll::TypedStorage<1, 1, bool>         mBoolValue;
    ::ll::TypedStorage<1, 1, bool>         mBoolValueSet;
    ::ll::TypedStorage<1, 1, bool>         mIntValueSet;
    ::ll::TypedStorage<1, 1, bool>         mFloatValueSet;
    ::ll::TypedStorage<1, 1, bool>         mEnumStringValueSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameRuleCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void createJsonIndex(std::string const&, ::GameRule const&, ::Json::Value&, std::string*);

    MCNAPI static void setup(::CommandRegistry&, ::GameRuleCommand::InitProxy&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
