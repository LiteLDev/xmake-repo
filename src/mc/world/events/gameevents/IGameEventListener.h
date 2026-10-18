#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class GameEvent;
struct GameEventContext;
namespace GameEvents { class PositionSource; }
// clang-format on

class IGameEventListener {
public:
    // IGameEventListener inner types define
    enum class DeliveryMode : int {
        Unspecified = 0,
        ByDistance  = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameEventListener() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&) = 0;
#else // @header-generator platform
    virtual void handleGameEvent(
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext,
        ::BlockSource&            region
    ) = 0;
#endif // @header-generator platform

    virtual ::GameEvents::PositionSource const& getPositionSource() const = 0;

    virtual uint getRange() const = 0;

    virtual ::IGameEventListener::DeliveryMode getDeliveryMode() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IGameEventListener::DeliveryMode $getDeliveryMode() const;
#else // @header-generator platform
    MCFOLD ::IGameEventListener::DeliveryMode $getDeliveryMode() const;


#endif // @header-generator platform
    // NOLINTEND
};
