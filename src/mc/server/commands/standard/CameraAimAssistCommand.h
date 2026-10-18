#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class CameraAimAssistCommand : public ::Command {
public:
    // CameraAimAssistCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class TargetMode : uchar {
        Distance = 0,
        Angle    = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class Action : uchar {
        Set   = 0,
        Clear = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class TargetMode : uchar {
        Distance = 0,
        Angle    = 1,
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                                   mPlayerTargets;
    ::ll::TypedStorage<8, 24, std::string>                         mPresetId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>        mPlayerTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                       mPresetId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                mViewAngleX;
    ::ll::TypedStorage<4, 4, float>                                mViewAngleY;
    ::ll::TypedStorage<4, 4, float>                                mDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistCommand::TargetMode> mTargetMode;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistCommand::Action>     mAction;
    ::ll::TypedStorage<1, 1, bool>                                 mShowDebugRender;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CameraAimAssistCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
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
