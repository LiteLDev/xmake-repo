#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class NavigationComponent;
class Path;
class Vec3;
struct NavigationDescription;
// clang-format on

class FlyingPathNavigation : public ::PathNavigation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mHadGravity;
    ::ll::TypedStorage<1, 1, bool>        mCanPathFromAir;
    ::ll::TypedStorage<4, 4, float const> mMinWaypointRadius;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FlyingPathNavigation();
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
    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Actor const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);
#else // @header-generator platform
    virtual void stop(::NavigationComponent& parent, ::Mob& mob) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    virtual bool canUpdatePath(::Mob const& mob) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUpdatePath(::Mob const&) const;

    virtual void updatePath(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _disableGravity(::Mob&);
#else // @header-generator platform
    MCAPI void _restorePreviousGravityFlag(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _restorePreviousGravityFlag(::Mob&);

    MCNAPI void _storePreviousGravityFlag(::Mob&);
#else // @header-generator platform
    MCAPI void _storePreviousGravityFlag(::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void _disableGravity(::Mob& mob);
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
    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Actor const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $stop(::NavigationComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUpdatePath(::Mob const&) const;
#else // @header-generator platform
    MCAPI bool $canUpdatePath(::Mob const& mob) const;
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
