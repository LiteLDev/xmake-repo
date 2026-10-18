#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

// auto generated forward declare list
// clang-format off
class Mob;
class NavigationComponent;
class Vec3;
struct NavigationDescription;
// clang-format on

class GenericPathNavigation : public ::PathNavigation {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GenericPathNavigation();
#else // @header-generator platform
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription const* description) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeInternal(::Mob&, ::NavigationDescription const*);
#else // @header-generator platform
    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    virtual ::Vec3 getTempMobPos(::Mob const& mob) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getTempMobPos(::Mob const&) const;
#else // @header-generator platform
    virtual void stop(::NavigationComponent& parent, ::Mob& mob) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(::NavigationComponent&, ::Mob&);

    virtual void updatePath(::NavigationComponent&, ::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeInternal(::Mob&, ::NavigationDescription const*);
#else // @header-generator platform
    MCAPI void $initializeInternal(::Mob& mob, ::NavigationDescription const* description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $tick(::NavigationComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getTempMobPos(::Mob const&) const;
#else // @header-generator platform
    MCAPI ::Vec3 $getTempMobPos(::Mob const& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $stop(::NavigationComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updatePath(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $updatePath(::NavigationComponent& parent, ::Mob& mob);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
