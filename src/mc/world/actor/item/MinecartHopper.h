#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDefinitionGroup;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
struct ActorDefinitionIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MinecartHopper : public ::Minecart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastPosition;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    MinecartHopper();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecartHopper();
#else // @header-generator platform
    virtual void destroy(::ActorDamageSource const& source, bool dropMinecartComponents) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void destroy(::ActorDamageSource const&, bool);
#else // @header-generator platform
    virtual void applyNaturalSlowdown(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MinecartType getType();
#else // @header-generator platform
    virtual ::MinecartType getType() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* getDefaultDisplayBlock() const;
#else // @header-generator platform
    virtual ::Block const* getDefaultDisplayBlock() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getDefaultDisplayOffset() const;

    virtual void applyNaturalSlowdown(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecartHopper(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    virtual int getDefaultDisplayOffset() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $destroy(::ActorDamageSource const&, bool);
#else // @header-generator platform
    MCAPI void $destroy(::ActorDamageSource const& source, bool dropMinecartComponents);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MinecartType $getType();
#else // @header-generator platform
    MCFOLD void $applyNaturalSlowdown(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $getDefaultDisplayBlock() const;
#else // @header-generator platform
    MCFOLD ::MinecartType $getType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDefaultDisplayOffset() const;
#else // @header-generator platform
    MCAPI ::Block const* $getDefaultDisplayBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyNaturalSlowdown(::BlockSource&);
#else // @header-generator platform
    MCFOLD int $getDefaultDisplayOffset() const;


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
