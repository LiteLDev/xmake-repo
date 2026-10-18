#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Boat.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDefinitionGroup;
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDefinitionIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ChestBoat : public ::Boat {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ChestBoat();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ChestBoat();
#else // @header-generator platform
    virtual void kill() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getEntityLocNameString() const;
#else // @header-generator platform
    virtual void destroy(::Actor* sourceActor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void kill();

    virtual void destroy(::Actor*);
#else // @header-generator platform
    virtual ::std::string getEntityLocNameString() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChestBoat(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _dropChestContents(::Vec3 const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _dropChestContents(::Vec3 const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getEntityLocNameString() const;
#else // @header-generator platform
    MCAPI void $kill();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $kill();
#else // @header-generator platform
    MCAPI void $destroy(::Actor* sourceActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $destroy(::Actor*);
#else // @header-generator platform
    MCAPI ::std::string $getEntityLocNameString() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
