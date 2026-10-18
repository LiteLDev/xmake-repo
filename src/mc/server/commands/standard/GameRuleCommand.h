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
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mGameRule;
    ::ll::TypedStorage<8, 24, std::string> mEnumStringValue;
    ::ll::TypedStorage<4, 4, float>        mFloatValue;
    ::ll::TypedStorage<4, 4, int>          mIntValue;
    ::ll::TypedStorage<1, 1, bool>         mBoolValue;
    ::ll::TypedStorage<1, 1, bool>         mBoolValueSet;
    ::ll::TypedStorage<1, 1, bool>         mIntValueSet;
    ::ll::TypedStorage<1, 1, bool>         mFloatValueSet;
    ::ll::TypedStorage<1, 1, bool>         mEnumStringValueSet;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mGameRule;
    ::ll::TypedStorage<8, 32, ::std::string> mEnumStringValue;
    ::ll::TypedStorage<4, 4, float>          mFloatValue;
    ::ll::TypedStorage<4, 4, int>            mIntValue;
    ::ll::TypedStorage<1, 1, bool>           mBoolValue;
    ::ll::TypedStorage<1, 1, bool>           mBoolValueSet;
    ::ll::TypedStorage<1, 1, bool>           mIntValueSet;
    ::ll::TypedStorage<1, 1, bool>           mFloatValueSet;
    ::ll::TypedStorage<1, 1, bool>           mEnumStringValueSet;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameRuleCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void createJsonIndex(std::string const&, ::GameRule const&, ::Json::Value&, std::string*);
#else // @header-generator platform
    MCAPI static void
    createJsonIndex(::std::string const& ruleName, ::GameRule const& rule, ::Json::Value& json, ::std::string* value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&, ::GameRuleCommand::InitProxy&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry, ::GameRuleCommand::InitProxy&& dependencies);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
