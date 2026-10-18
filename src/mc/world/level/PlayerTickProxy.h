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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlayerTickProxy();
#else // @header-generator platform
    virtual void preReplicationTick(
        ::ServerPlayer&  serverPlayer,
        ::Tick const&    currentTick,
        ::EntityContext& userEntity
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void preReplicationTick(::ServerPlayer&, ::Tick const&, ::EntityContext&);
#else // @header-generator platform
    virtual void playerTick(::Player& player, ::Tick const& currentTick) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerTick(::Player&, ::Tick const&);
#else // @header-generator platform
    virtual void clearDimensionPlayerReplicationList(::Dimension& dimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearDimensionPlayerReplicationList(::Dimension&);
#else // @header-generator platform
    virtual void processDimensionPlayerReplication(::Dimension& dimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void processDimensionPlayerReplication(::Dimension&);

    virtual void postReplicationtick(::ServerPlayer&, ::Tick const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void postReplicationtick(::ServerPlayer& serverPlayer, ::Tick const& currentTick) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $preReplicationTick(::ServerPlayer&, ::Tick const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI void
    $preReplicationTick(::ServerPlayer& serverPlayer, ::Tick const& currentTick, ::EntityContext& userEntity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerTick(::Player&, ::Tick const&);
#else // @header-generator platform
    MCAPI void $playerTick(::Player& player, ::Tick const& currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearDimensionPlayerReplicationList(::Dimension&);
#else // @header-generator platform
    MCAPI void $clearDimensionPlayerReplicationList(::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $processDimensionPlayerReplication(::Dimension&);
#else // @header-generator platform
    MCAPI void $processDimensionPlayerReplication(::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postReplicationtick(::ServerPlayer&, ::Tick const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $postReplicationtick(::ServerPlayer& serverPlayer, ::Tick const& currentTick);
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
