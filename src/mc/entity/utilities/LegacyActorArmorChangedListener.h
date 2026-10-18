#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/ContainerContentChangeListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

class LegacyActorArmorChangedListener : public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24> mActorEntity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnka51d7e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LegacyActorArmorChangedListener& operator=(LegacyActorArmorChangedListener const&);
    LegacyActorArmorChangedListener(LegacyActorArmorChangedListener const&);
    LegacyActorArmorChangedListener();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual void containerContentChanged(int) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyActorArmorChangedListener();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void containerContentChanged(::Actor&);
#else // @header-generator platform
    virtual ~LegacyActorArmorChangedListener() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initializeEntity(::EntityContext&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI static void containerContentChanged(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static void initializeEntity(::EntityContext& entity);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int);
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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
