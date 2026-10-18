#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class RepeaterCapacitor : public ::SidePoweredComponent {
public:
    // RepeaterCapacitor inner types define
    enum class States : int {
#if defined(LL_PLAT_A) // @header-generator platform
        OFF        = 0,
        ON         = 1,
        OFF_LOCKED = 2,
        ON_LOCKED  = 3,
#else // @header-generator platform
        Off       = 0,
        On        = 1,
        OffLocked = 2,
        OnLocked  = 3,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::RepeaterCapacitor::States[5]> mOnStates;
    ::ll::TypedStorage<4, 4, int>                             mInsertAt;
    ::ll::TypedStorage<1, 1, bool>                            mPowered;
    ::ll::TypedStorage<1, 1, bool>                            mNextPower;
    ::ll::TypedStorage<1, 1, bool>                            mLocked;
    ::ll::TypedStorage<4, 4, int>                             mPulseCount;
    ::ll::TypedStorage<1, 1, bool>                            mPulse;
    ::ll::TypedStorage<1, 1, bool>                            mNextPulse;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const>    mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RepeaterCapacitor();
#else // @header-generator platform
    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getStrength() const;
#else // @header-generator platform
    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setStrength(int);
#else // @header-generator platform
    virtual void checkLock(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);
#else // @header-generator platform
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void checkLock(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual void setStrength(int strength) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual int getStrength() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual ::CircuitComponentType getCircuitComponentType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RepeaterCapacitor();

    MCNAPI void setDelay(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getStrength() const;
#else // @header-generator platform
    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setStrength(int);
#else // @header-generator platform
    MCAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);
#else // @header-generator platform
    MCAPI void $checkLock(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $checkLock(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $cacheValues(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $setStrength(int strength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI int $getStrength() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;
#else // @header-generator platform
    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
#else // @header-generator platform
    MCAPI ::CircuitComponentType $getCircuitComponentType() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
