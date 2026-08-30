#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

// auto generated forward declare list
// clang-format off
class CircuitSceneGraph;
class CircuitTrackingInfo;
// clang-format on

class DirectionalProducerComponent : public ::ProducerComponent {
public:
    // DirectionalProducerComponent inner types define
    using AllowedConnections = std::bitset<6>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<6>> mAllowedConnections;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DirectionalProducerComponent();

    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirectionalProducerComponent();

    MCNAPI void setAllowedConnections(std::bitset<6>);
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
