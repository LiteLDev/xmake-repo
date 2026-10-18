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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnEnteredBlock;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnExitedBlock;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
    ::ll::TypedStorage<1, 1, bool>                          mWatchEnter;
    ::ll::TypedStorage<1, 1, bool>                          mWatchExit;
    ::ll::TypedStorage<1, 1, bool>                          mCurrentlyInside;
    ::ll::TypedStorage<1, 1, bool>                          mWasInside;
    ::ll::TypedStorage<1, 1, bool>                          mIgnoreStates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnEnteredBlock;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnExitedBlock;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
    ::ll::TypedStorage<1, 1, bool>                            mWatchEnter;
    ::ll::TypedStorage<1, 1, bool>                            mWatchExit;
    ::ll::TypedStorage<1, 1, bool>                            mCurrentlyInside;
    ::ll::TypedStorage<1, 1, bool>                            mWasInside;
    ::ll::TypedStorage<1, 1, bool>                            mIgnoreStates;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    InsideBlockEventMap& operator=(InsideBlockEventMap const&);
    InsideBlockEventMap();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~InsideBlockEventMap();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
