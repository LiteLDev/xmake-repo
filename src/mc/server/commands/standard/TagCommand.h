#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/WildcardCommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class TagCommand : public ::Command {
public:
    // TagCommand inner types define
    enum class Action : uchar {
        Add    = 0,
        Remove = 1,
        List   = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ActorRefList = std::vector<std::reference_wrapper<Actor>>;
#else // @header-generator platform
    using ActorRefList = ::std::vector<::std::reference_wrapper<::Actor>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::TagCommand::Action> mAction;
    ::ll::UntypedStorage<8, 200>                   mSelector;
    ::ll::TypedStorage<8, 24, std::string>         mTagString;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::TagCommand::Action>                 mAction;
    ::ll::TypedStorage<8, 200, ::WildcardCommandSelector<::Actor>> mSelector;
    ::ll::TypedStorage<8, 32, ::std::string>                       mTagString;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TagCommand();
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string _getTagWithPercentageFixed() const;
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
