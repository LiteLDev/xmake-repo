#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorChangeContext.h"
#include "mc/world/level/block/EnvironmentChangeContext.h"
#include "mc/world/level/block/StatelessBlockChangeContext.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class BlockChangeContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 32, std::variant<std::monostate, EnvironmentChangeContext, ActorChangeContext, StatelessBlockChangeContext>> mContextSource;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::
            variant<::std::monostate, ::EnvironmentChangeContext, ::ActorChangeContext, ::StatelessBlockChangeContext>>
                                   mContextSource;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mTickSchedulingEnabled;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor* getActorSource() const;

    MCNAPI bool const hasValue() const;

    MCNAPI bool const isMultiBlockBreakContext() const;

    MCNAPI bool const isStatelessChangeContext(::StatelessBlockChangeContext) const;

    MCNAPI bool const shouldSendBlockBreakEvent() const;

    MCNAPI ::BlockChangeContext withTickSchedulingDisabled() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockChangeContext actorChange(::Actor*);

    MCNAPI static ::BlockChangeContext commandsChange();

    MCNAPI static ::BlockChangeContext environmentChange(::BlockPos const&);

    MCNAPI static ::BlockChangeContext multiBlockChange();

    MCNAPI static ::BlockChangeContext scriptsChange();

    MCNAPI static ::BlockChangeContext statelessChangeContext(::StatelessBlockChangeContext);

    MCNAPI static ::BlockChangeContext structureChange();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
