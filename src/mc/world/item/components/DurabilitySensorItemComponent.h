#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/DurabilityThreshold.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::Beta { struct DurabilitySensorItemComponent; }
namespace SharedTypes::v1_21_10 { struct DurabilitySensorItemComponent; }
// clang-format on

class DurabilitySensorItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<DurabilityThreshold>> mDurabilityThresholds;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::DurabilityThreshold>> mDurabilityThresholds;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DurabilitySensorItemComponent();
    // NOLINTEND

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DurabilitySensorItemComponent();

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DurabilitySensorItemComponent();

    MCNAPI explicit DurabilitySensorItemComponent(std::vector<DurabilityThreshold> const&);

    MCNAPI explicit DurabilitySensorItemComponent(::SharedTypes::v1_21_10::DurabilitySensorItemComponent);

    MCNAPI explicit DurabilitySensorItemComponent(::SharedTypes::Beta::DurabilitySensorItemComponent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI explicit DurabilitySensorItemComponent(::SharedTypes::Beta::DurabilitySensorItemComponent data);

    MCAPI explicit DurabilitySensorItemComponent(::SharedTypes::v1_21_10::DurabilitySensorItemComponent data);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::vector<DurabilityThreshold> const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::DurabilitySensorItemComponent);

    MCNAPI void* $ctor(::SharedTypes::Beta::DurabilitySensorItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::Beta::DurabilitySensorItemComponent data);

    MCAPI void* $ctor(::SharedTypes::v1_21_10::DurabilitySensorItemComponent data);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
