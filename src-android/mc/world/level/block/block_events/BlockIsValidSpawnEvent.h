#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace BlockEvents {

class BlockIsValidSpawnEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           canSpawn;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                 mRegion;
    ::ll::TypedStorage<8, 8, ::Block const&>                 mState;
    ::ll::TypedStorage<8, 8, ::br::spawn::EntityType const&> mEntityType;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockIsValidSpawnEvent& operator=(BlockIsValidSpawnEvent const&);
    BlockIsValidSpawnEvent(BlockIsValidSpawnEvent const&);
    BlockIsValidSpawnEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockIsValidSpawnEvent();

    virtual ::Block const& getBlock() const;

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockIsValidSpawnEvent(::BlockSource&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&);

    MCNAPI ::br::spawn::EntityType const& entityType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getBlock() const;

    MCNAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
