#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class ClientInstanceScreenModel;
// clang-format on

class BlockScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockEntityType;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>  mEntityUniqueID;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockScreenController();

    virtual void setAssociatedBlockPos(::BlockPos const&);

    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const);

    virtual bool _isStillValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::BlockPos const&,
        ::BlockActorType,
        ::ActorUniqueID const
    );

    MCNAPI ::BlockActor* _getBaseBlockEntity(::BlockPos const&, ::BlockActorType const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::BlockPos const&, ::BlockActorType, ::ActorUniqueID const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setAssociatedBlockPos(::BlockPos const&);

    MCNAPI void $setAssociatedEntityUniqueID(::ActorUniqueID const);

    MCNAPI bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
