#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class ItemDescriptor;
class ItemStackBase;
class SemVersion;
namespace Bedrock::Safety { class RedactableString; }
namespace SharedTypes::v1_21_30 { struct DyeableItemComponent; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class DyeableItemComponent : public ::NetworkedItemComponent<DyeableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mDefaultColor;
    // NOLINTEND

public:
    // prevent constructor by default
    DyeableItemComponent& operator=(DyeableItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DyeableItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DyeableItemComponent(::mce::Color const&);

    MCNAPI explicit DyeableItemComponent(::SharedTypes::v1_21_30::DyeableItemComponent);

    MCNAPI void
    appendFormattedHovertext(::ItemStackBase const&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI void clearColor(::ItemStackBase&) const;

    MCNAPI ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCNAPI ::mce::Color const& getDefaultColor() const;

    MCNAPI bool hasCustomColor(::ItemStackBase const&) const;

    MCNAPI void setColor(::ItemStackBase&, ::mce::Color const&) const;
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
    MCNAPI void* $ctor(::mce::Color const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_30::DyeableItemComponent);
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
