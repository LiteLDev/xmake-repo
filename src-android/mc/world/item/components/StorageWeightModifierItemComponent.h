#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_60 { struct StorageWeightModifierItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StorageWeightModifierItemComponent : public ::NetworkedItemComponent<StorageWeightModifierItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWeightInStorageItem;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageWeightModifierItemComponent& operator=(StorageWeightModifierItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageWeightModifierItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StorageWeightModifierItemComponent(
        ::SharedTypes::v1_21_60::StorageWeightModifierItemComponent const&
    );

    MCNAPI int getWeightInStorageItem() const;
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_60::StorageWeightModifierItemComponent const&);
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
