#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_60 { struct StorageWeightLimitItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StorageWeightLimitItemComponent : public ::NetworkedItemComponent<StorageWeightLimitItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWeightLimit;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageWeightLimitItemComponent& operator=(StorageWeightLimitItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageWeightLimitItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StorageWeightLimitItemComponent(::SharedTypes::v1_21_60::StorageWeightLimitItemComponent const&);

    MCNAPI int getWeightLimit() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_60::StorageWeightLimitItemComponent const&);
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
