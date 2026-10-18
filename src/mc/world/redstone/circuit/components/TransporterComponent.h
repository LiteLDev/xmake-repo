#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class TransporterComponent : public ::BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mNextStrength;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TransporterComponent();
#else // @header-generator platform
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canConsumerPower() const;
#else // @header-generator platform
    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);
#else // @header-generator platform
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& directlyPowered) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
#else // @header-generator platform
    virtual bool canConsumerPower() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual ::CircuitComponentType getCircuitComponentType() const;
#else // @header-generator platform
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isDotOrDirectLine(::CircuitSceneGraph&, ::BlockPos const&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static bool
    isDotOrDirectLine(::CircuitSceneGraph& graph, ::BlockPos const& nearestPos, ::BlockPos const& deltaIn);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canConsumerPower() const;
#else // @header-generator platform
    MCAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);
#else // @header-generator platform
    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
#else // @header-generator platform
    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& directlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD bool $canConsumerPower() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $cacheValues(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;
#else // @header-generator platform
    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;
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
