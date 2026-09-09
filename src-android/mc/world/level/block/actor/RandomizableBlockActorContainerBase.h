#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
class Level;
class SaveContext;
struct DimensionType;
// clang-format on

class RandomizableBlockActorContainerBase : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLootTable;
    ::ll::TypedStorage<4, 4, int>          mLootTableSeed;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomizableBlockActorContainerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomizableBlockActorContainerBase();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void eraseLootTable();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RandomizableBlockActorContainerBase(::BlockActorType, ::BlockPos const&, ::BlockActorRendererId);

    MCNAPI void setLootTable(std::string const&, int const);

    MCNAPI void unPackLootTable(::Level&, ::Container&, ::DimensionType, ::Actor*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockActorType, ::BlockPos const&, ::BlockActorRendererId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $eraseLootTable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
