#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockStepOffEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&> mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStepOffEvent& operator=(BlockStepOffEvent const&);
    BlockStepOffEvent(BlockStepOffEvent const&);
    BlockStepOffEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockStepOffEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockStepOffEvent(::BlockPos const, ::Actor&);

    MCNAPI void configureRenderParamsForTrigger(::RenderParams&) const;

    MCNAPI ::Actor const& getEntity() const;

    MCNAPI bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const, ::Actor&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
