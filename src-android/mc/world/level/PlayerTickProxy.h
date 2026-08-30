#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IPlayerTickProxy.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
class Player;
class ServerPlayer;
struct Tick;
// clang-format on

class PlayerTickProxy : public ::IPlayerTickProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerTickProxy();

    virtual void preReplicationTick(::ServerPlayer&, ::Tick const&, ::EntityContext&);

    virtual void playerTick(::Player&, ::Tick const&);

    virtual void clearDimensionPlayerReplicationList(::Dimension&);

    virtual void processDimensionPlayerReplication(::Dimension&);

    virtual void postReplicationtick(::ServerPlayer&, ::Tick const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preReplicationTick(::ServerPlayer&, ::Tick const&, ::EntityContext&);

    MCNAPI void $playerTick(::Player&, ::Tick const&);

    MCNAPI void $clearDimensionPlayerReplicationList(::Dimension&);

    MCNAPI void $processDimensionPlayerReplication(::Dimension&);

    MCNAPI void $postReplicationtick(::ServerPlayer&, ::Tick const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
