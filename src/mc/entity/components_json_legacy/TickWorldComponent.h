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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                         mChunkRadius;
    ::ll::TypedStorage<4, 4, float>                        mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                         mAlwaysActive;
    ::ll::TypedStorage<1, 1, bool>                         mChanged;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ITickingArea>> mTickingArea;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                             mChunkRadius;
    ::ll::TypedStorage<4, 4, float>                            mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                             mAlwaysActive;
    ::ll::TypedStorage<1, 1, bool>                             mChanged;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITickingArea>> mTickingArea;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TickWorldComponent& operator=(TickWorldComponent const&);
    TickWorldComponent(TickWorldComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TickWorldComponent();
#else // @header-generator platform
    MCAPI void removeArea();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TickWorldComponent(::TickWorldComponent&&);
#else // @header-generator platform
    MCAPI void setTickingArea(::Actor& owner, ::std::shared_ptr<::ITickingArea> tickingArea);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getChunkRadius() const;
#else // @header-generator platform
    MCAPI void updateArea(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~TickWorldComponent();
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
