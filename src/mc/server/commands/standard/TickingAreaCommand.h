#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPosition.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
class Level;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingAreaDescription;
// clang-format on

class TickingAreaCommand : public ::Command {
public:
    // TickingAreaCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class AddAreaType : int {
        Bounds = 0,
        Circle = 1,
    };

#endif // @header-generator platform
    enum class Mode : int {
        Add       = 0,
        Remove    = 1,
        RemoveAll = 2,
        List      = 3,
        Preload   = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    };

    enum class AddAreaType : int {
        Bounds = 0,
        Circle = 1,
#else // @header-generator platform
#endif // @header-generator platform
    };

    enum class TargetDimensions : int {
        CurrentDimension = 0,
        AllDimensions    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TickingAreaCommand::Mode>             mMode;
    ::ll::TypedStorage<4, 4, ::TickingAreaCommand::AddAreaType>      mAddAreaType;
    ::ll::TypedStorage<4, 4, ::TickingAreaCommand::TargetDimensions> mTargetDimensions;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                     mPosition;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 20>                                      mMax;
    ::ll::TypedStorage<8, 24, std::string>                           mName;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>                     mMax;
    ::ll::TypedStorage<8, 32, ::std::string>                         mName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                    mRadius;
    ::ll::TypedStorage<1, 1, bool>                                   mUsePosition;
    ::ll::TypedStorage<1, 1, bool>                                   mPreloadValue;
    ::ll::TypedStorage<1, 1, bool>                                   mPreloadValueSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TickingAreaCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string formatTickingAreaList(std::vector<TickingAreaDescription> const&);
#else // @header-generator platform
    MCAPI static ::std::string formatTickingAreaList(::std::vector<::TickingAreaDescription> const& tickingAreas);
#endif // @header-generator platform

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
