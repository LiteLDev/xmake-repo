#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class CircuitSceneGraph;
class CircuitTrackingInfo;
// clang-format on

class SidePoweredComponent : public ::CapacitorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CircuitComponentList> mSideComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SidePoweredComponent();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~SidePoweredComponent() /*override*/;
#else // LL_PLAT_C
    virtual ~SidePoweredComponent() /*override*/ = default;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canConsumePowerAnyDirection() const;
#else // @header-generator platform
    virtual uchar getPoweroutDirection() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canConsumerPower() const;
#else // @header-generator platform
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeSource(::BlockPos const&, ::BaseCircuitComponent const*);
#else // @header-generator platform
    virtual bool canConsumePowerAnyDirection() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
#else // @header-generator platform
    virtual bool canConsumerPower() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeFromAnySourceList(::BaseCircuitComponent const*);
#else // @header-generator platform
    virtual void removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar getPoweroutDirection() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addToSideComponents(CircuitComponentList::Item*&, ::BaseCircuitComponent*);
#else // @header-generator platform
    virtual void removeFromAnySourceList(::BaseCircuitComponent const* component) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canConsumePowerAnyDirection() const;
#else // @header-generator platform
    MCFOLD uchar $getPoweroutDirection() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canConsumerPower() const;
#else // @header-generator platform
    MCFOLD bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeSource(::BlockPos const&, ::BaseCircuitComponent const*);
#else // @header-generator platform
    MCFOLD bool $canConsumePowerAnyDirection() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
#else // @header-generator platform
    MCFOLD bool $canConsumerPower() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeFromAnySourceList(::BaseCircuitComponent const*);
#else // @header-generator platform
    MCAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getPoweroutDirection() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $removeFromAnySourceList(::BaseCircuitComponent const* component);
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
