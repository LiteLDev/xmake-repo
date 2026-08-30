#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_50 { struct CompostableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CompostableItemComponent : public ::NetworkedItemComponent<CompostableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar> mCompostingChance;
    // NOLINTEND

public:
    // prevent constructor by default
    CompostableItemComponent& operator=(CompostableItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompostableItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CompostableItemComponent(::SharedTypes::v1_21_50::CompostableItemComponent);
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CompostableItemComponent);
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
