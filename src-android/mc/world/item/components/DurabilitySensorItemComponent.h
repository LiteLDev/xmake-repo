#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/DurabilityThreshold.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace SharedTypes::Beta { struct DurabilitySensorItemComponent; }
namespace SharedTypes::v1_21_10 { struct DurabilitySensorItemComponent; }
// clang-format on

class DurabilitySensorItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DurabilityThreshold>> mDurabilityThresholds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DurabilitySensorItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DurabilitySensorItemComponent();

    MCNAPI explicit DurabilitySensorItemComponent(std::vector<DurabilityThreshold> const&);

    MCNAPI explicit DurabilitySensorItemComponent(::SharedTypes::v1_21_10::DurabilitySensorItemComponent);

    MCNAPI explicit DurabilitySensorItemComponent(::SharedTypes::Beta::DurabilitySensorItemComponent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::vector<DurabilityThreshold> const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::DurabilitySensorItemComponent);

    MCNAPI void* $ctor(::SharedTypes::Beta::DurabilitySensorItemComponent);
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
