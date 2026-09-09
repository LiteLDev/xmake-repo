#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class InsideBlockEventMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnEnteredBlock;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnExitedBlock;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
    ::ll::TypedStorage<1, 1, bool>                          mWatchEnter;
    ::ll::TypedStorage<1, 1, bool>                          mWatchExit;
    ::ll::TypedStorage<1, 1, bool>                          mCurrentlyInside;
    ::ll::TypedStorage<1, 1, bool>                          mWasInside;
    ::ll::TypedStorage<1, 1, bool>                          mIgnoreStates;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockEventMap& operator=(InsideBlockEventMap const&);
    InsideBlockEventMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InsideBlockEventMap(::InsideBlockEventMap const&);

    MCNAPI InsideBlockEventMap(
        ::Block const&,
        bool,
        bool,
        bool,
        ::ActorDefinitionTrigger const&,
        ::ActorDefinitionTrigger const&
    );

    MCNAPI ::gsl::not_null<const Block*> getBlock() const;

    MCNAPI ::ActorDefinitionTrigger const& getExitedEvent() const;

    MCNAPI bool isActorCurrentlyInside() const;

    MCNAPI bool isIgnoringStates() const;

    MCNAPI bool isWatchingIfActorEnters() const;

    MCNAPI bool isWatchingIfActorExits() const;

    MCNAPI void setCurrentlyInside(bool);

    MCNAPI void setWasInside(bool);

    MCNAPI bool wasActorInsideLastTick() const;

    MCNAPI ~InsideBlockEventMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InsideBlockEventMap const&);

    MCNAPI void*
    $ctor(::Block const&, bool, bool, bool, ::ActorDefinitionTrigger const&, ::ActorDefinitionTrigger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
