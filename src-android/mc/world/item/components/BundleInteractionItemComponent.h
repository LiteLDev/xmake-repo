#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_30 { struct BundleInteractionItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BundleInteractionItemComponent : public ::NetworkedItemComponent<BundleInteractionItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mNumViewableSlots;
    // NOLINTEND

public:
    // prevent constructor by default
    BundleInteractionItemComponent& operator=(BundleInteractionItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BundleInteractionItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getNumViewableSlots() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
