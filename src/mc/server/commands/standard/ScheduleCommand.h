#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandFilePath.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/level/chunk/AreaType.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
#else // @header-generator platform
#endif // @header-generator platform
class FunctionEntry;
class FunctionManager;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerLevel;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScheduleCommand : public ::Command {
public:
    // ScheduleCommand inner types declare
    // clang-format off
    struct FunctionInfo;
    // clang-format on

    // ScheduleCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ScheduleAction : int {
        Clear        = 0,
        Delay        = 1,
        OnAreaLoaded = 2,
    };

    enum class RequestAction : int {
        Add   = 0,
        Clear = 1,
#else // @header-generator platform
    enum class ClearType : int {
        FunctionName    = 0,
        TickingAreaName = 1,
#endif // @header-generator platform
    };

    enum class DelayMode : int {
        Append  = 0,
        Replace = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ClearType : int {
        FunctionName    = 0,
        TickingAreaName = 1,
#else // @header-generator platform
    enum class RequestAction : int {
        Add   = 0,
        Clear = 1,
    };

    enum class ScheduleAction : int {
        Clear        = 0,
        Delay        = 1,
        OnAreaLoaded = 2,
#endif // @header-generator platform
    };

    struct FunctionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::FunctionEntry*> mFunctionEntry;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>     mResolvedPath;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>   mResolvedPath;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>             mIsValid;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScheduleCommand::ScheduleAction> mScheduleAction;
    ::ll::TypedStorage<4, 4, ::ScheduleCommand::RequestAction>  mRequestAction;
    ::ll::TypedStorage<4, 4, ::ScheduleCommand::DelayMode>      mDelayMode;
    ::ll::TypedStorage<1, 1, ::AreaType>                        mAreaType;
    ::ll::TypedStorage<4, 4, ::ScheduleCommand::ClearType>      mClearType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CommandFilePath>                mFilePath;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CommandFilePath>                mFilePath;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>                mFrom;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                mTo;
    ::ll::TypedStorage<4, 4, int>                               mRadius;
    ::ll::TypedStorage<4, 4, int>                               mTime;
    ::ll::TypedStorage<1, 1, bool>                              mSecondsSet;
    ::ll::TypedStorage<1, 1, bool>                              mDaysSet;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                      mTickingAreaName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                    mTickingAreaName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScheduleCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScheduleCommand::FunctionInfo _tryGetFunction(::FunctionManager&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI ::ScheduleCommand::FunctionInfo
    _tryGetFunction(::FunctionManager& functionManager, ::CommandOutput& output) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
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
