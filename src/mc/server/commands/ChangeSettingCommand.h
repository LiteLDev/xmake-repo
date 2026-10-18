#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class ChangeSettingCommand {
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class ChangeSettingCommand : public ::ServerCommand {
#endif // @header-generator platform
public:
    // ChangeSettingCommand inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Setting : int {};
#else // @header-generator platform
    enum class Setting : int {
        AllowCheats = 0,
        Difficulty  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ChangeSettingCommand::Setting>   mSetting;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty> mDifficulty;
    ::ll::TypedStorage<4, 4, int>                               mIntValue;
    ::ll::TypedStorage<1, 1, bool>                              mBoolValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND
#endif // @header-generator platform
};
#endif // @header-generator platform
