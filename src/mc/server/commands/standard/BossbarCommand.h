#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/actor/ai/util/BossBarColor.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
struct BossbarInfo;
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BossbarCommand : public ::Command {
public:
    // BossbarCommand inner types define
    enum class BossbarAction : int {
        Add    = 0,
        Get    = 1,
        List   = 2,
        Remove = 3,
        Set    = 4,
    };

    enum class BossbarGetOption : int {
        Max     = 0,
        Players = 1,
        Value   = 2,
        Visible = 3,
    };

    enum class BossbarSetOption : int {
        Color   = 0,
        Max     = 1,
        Name    = 2,
        Players = 3,
        Value   = 4,
        Visible = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BossbarCommand::BossbarAction>    mAction;
    ::ll::TypedStorage<4, 4, ::BossbarCommand::BossbarGetOption> mGetOption;
    ::ll::TypedStorage<4, 4, ::BossbarCommand::BossbarSetOption> mSetOption;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                       mId;
    ::ll::UntypedStorage<8, 16>                                  mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                     mId;
    ::ll::TypedStorage<8, 16, ::Json::Value>                     mName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::BossBarColor>                     mColor;
    ::ll::TypedStorage<4, 4, int>                                mMax;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                                 mTargets;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>      mTargets;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                mValue;
    ::ll::TypedStorage<1, 1, bool>                               mVisible;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
