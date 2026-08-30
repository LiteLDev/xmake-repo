#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/inventory/FillingContainer.h"
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

class RandomizableBlockActorFillingContainer : public ::RandomizableBlockActorContainerBase, public ::FillingContainer {
public:
    // prevent constructor by default
    RandomizableBlockActorFillingContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomizableBlockActorFillingContainer();

    virtual void onRemoved(::BlockSource&);

    virtual void setContainerChanged(int);

    virtual void startOpen(::Actor&);

    virtual void dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);

    virtual void dropContents(::BlockSource&, ::Vec3 const&, bool);

    virtual void initializeContainerContents(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RandomizableBlockActorFillingContainer(
        ::BlockActorType,
        ::BlockPos const&,
        int,
        ::SharedTypes::Legacy::ContainerType,
        ::BlockActorRendererId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::BlockActorType, ::BlockPos const&, int, ::SharedTypes::Legacy::ContainerType, ::BlockActorRendererId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $setContainerChanged(int);

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $dropSlotContent(::BlockSource&, ::Vec3 const&, bool, int);

    MCNAPI void $dropContents(::BlockSource&, ::Vec3 const&, bool);

    MCNAPI void $initializeContainerContents(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
