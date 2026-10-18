#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
class Player;
class ServerPlayer;
struct Tick;
// clang-format on

class IPlayerTickProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IPlayerTickProxy();
#else // @header-generator platform
    virtual ~IPlayerTickProxy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void preReplicationTick(::ServerPlayer&, ::Tick const&, ::EntityContext&) = 0;
#else // @header-generator platform
    virtual void
    preReplicationTick(::ServerPlayer& serverPlayer, ::Tick const& currentTick, ::EntityContext& userEntity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerTick(::Player&, ::Tick const&) = 0;
#else // @header-generator platform
    virtual void playerTick(::Player& player, ::Tick const& currentTick) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearDimensionPlayerReplicationList(::Dimension&) = 0;
#else // @header-generator platform
    virtual void clearDimensionPlayerReplicationList(::Dimension& dimension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void processDimensionPlayerReplication(::Dimension&) = 0;
#else // @header-generator platform
    virtual void processDimensionPlayerReplication(::Dimension& dimension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postReplicationtick(::ServerPlayer&, ::Tick const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void postReplicationtick(::ServerPlayer& serverPlayer, ::Tick const& currentTick) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
