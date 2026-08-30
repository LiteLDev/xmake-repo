#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
class ItemStackBase;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct DiggerItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DiggerItemComponent : public ::NetworkedItemComponent<DiggerItemComponent> {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 168, ::BlockDescriptor> filter;
        ::ll::TypedStorage<4, 4, int>                 destroySpeed;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         mUseEfficiency;
    ::ll::TypedStorage<8, 24, std::vector<DiggerItemComponent::BlockInfo>> mDestroySpeeds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DiggerItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DiggerItemComponent(::SharedTypes::v1_20_50::DiggerItemComponent);

    MCNAPI bool canDestroySpecial(::Block const&) const;

    MCNAPI float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;
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
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::DiggerItemComponent);
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
