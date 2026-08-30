#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

namespace BlockEvents {

class ActorInternalEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>           mEntity;
    ::ll::TypedStorage<8, 24, std::string const> mName;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInternalEvent& operator=(ActorInternalEvent const&);
    ActorInternalEvent(ActorInternalEvent const&);
    ActorInternalEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorInternalEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor& getEntity() const;

    MCNAPI std::string const& getName() const;
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
