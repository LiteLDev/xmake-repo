#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainerBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Vec3;
// clang-format on

class RandomizableBlockActorContainer : public ::RandomizableBlockActorContainerBase, public ::Container {
public:
    // prevent constructor by default
    RandomizableBlockActorContainer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RandomizableBlockActorContainer();
#else // @header-generator platform
    virtual ~RandomizableBlockActorContainer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemoved(::BlockSource&);
#else // @header-generator platform
    virtual void setContainerChanged(int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerChanged(int);
#else // @header-generator platform
    virtual void startOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startOpen(::Actor&);
#else // @header-generator platform
    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);
#else // @header-generator platform
    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dropContents(::BlockSource&, ::Vec3 const&, bool);
#else // @header-generator platform
    virtual void onRemoved(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeContainerContents(::BlockSource&);
#else // @header-generator platform
    virtual void initializeContainerContents(::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RandomizableBlockActorContainer(
        ::BlockActorType,
        ::BlockPos const&,
#else // @header-generator platform
    MCAPI RandomizableBlockActorContainer(
        ::BlockActorType  blockEntityType,
        ::BlockPos const& pos,
#endif // @header-generator platform
        ::SharedTypes::Legacy::ContainerType,
#if defined(LL_PLAT_A) // @header-generator platform
        ::BlockActorRendererId
#else // @header-generator platform
        ::BlockActorRendererId rendererId
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::BlockActorType, ::BlockPos const&, ::SharedTypes::Legacy::ContainerType, ::BlockActorRendererId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::BlockActorType  blockEntityType,
        ::BlockPos const& pos,
        ::SharedTypes::Legacy::ContainerType,
        ::BlockActorRendererId rendererId
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemoved(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $setContainerChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerChanged(int);
#else // @header-generator platform
    MCFOLD void $startOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startOpen(::Actor&);
#else // @header-generator platform
    MCFOLD void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);
#else // @header-generator platform
    MCFOLD void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropContents(::BlockSource&, ::Vec3 const&, bool);
#else // @header-generator platform
    MCFOLD void $onRemoved(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeContainerContents(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $initializeContainerContents(::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
