#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct CanDestroyInCreativeItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CanDestroyInCreativeItemComponent : public ::NetworkedItemComponent<CanDestroyInCreativeItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanDestroyInCreative;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CanDestroyInCreativeItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
