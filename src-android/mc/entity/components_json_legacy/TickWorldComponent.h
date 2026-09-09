#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ITickingArea;
// clang-format on

class TickWorldComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                         mChunkRadius;
    ::ll::TypedStorage<4, 4, float>                        mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                         mAlwaysActive;
    ::ll::TypedStorage<1, 1, bool>                         mChanged;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ITickingArea>> mTickingArea;
    // NOLINTEND

public:
    // prevent constructor by default
    TickWorldComponent& operator=(TickWorldComponent const&);
    TickWorldComponent(TickWorldComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickWorldComponent();

    MCNAPI TickWorldComponent(::TickWorldComponent&&);

    MCNAPI uint getChunkRadius() const;

    MCNAPI float getMaxDistToPlayers() const;

    MCNAPI std::shared_ptr<ITickingArea> getTickingArea();

    MCNAPI bool hasTickingArea() const;

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI bool isAlwaysActive() const;

    MCNAPI ::TickWorldComponent& operator=(::TickWorldComponent&&);

    MCNAPI void removeArea();

    MCNAPI void setTickingArea(::Actor&, std::shared_ptr<ITickingArea>);

    MCNAPI void updateArea(::Actor&);

    MCNAPI ~TickWorldComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::TickWorldComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
