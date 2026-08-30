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
namespace SharedTypes::v1_20_50 { struct ShouldDespawnItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShouldDespawnItemComponent : public ::NetworkedItemComponent<ShouldDespawnItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShouldDespawn;
    // NOLINTEND

public:
    // prevent constructor by default
    ShouldDespawnItemComponent& operator=(ShouldDespawnItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShouldDespawnItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ShouldDespawnItemComponent(::SharedTypes::v1_20_50::ShouldDespawnItemComponent);
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
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::ShouldDespawnItemComponent);
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
