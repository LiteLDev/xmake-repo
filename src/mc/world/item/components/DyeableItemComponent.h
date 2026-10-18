#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class ItemDescriptor;
class ItemStackBase;
class SemVersion;
namespace Bedrock::Safety { class RedactableString; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_30 { struct DyeableItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class DyeableItemComponent : public ::NetworkedItemComponent<DyeableItemComponent> {
#else // @header-generator platform
class DyeableItemComponent : public ::NetworkedItemComponent<::DyeableItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mDefaultColor;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DyeableItemComponent& operator=(DyeableItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DyeableItemComponent();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DyeableItemComponent(::mce::Color const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void
    appendFormattedHovertext(::ItemStackBase const& item, ::Bedrock::Safety::RedactableString& hovertext, bool) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DyeableItemComponent(::SharedTypes::v1_21_30::DyeableItemComponent);
#else // @header-generator platform
    MCAPI ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    appendFormattedHovertext(::ItemStackBase const&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI void clearColor(::ItemStackBase&) const;

    MCNAPI ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCNAPI ::mce::Color const& getDefaultColor() const;

    MCNAPI bool hasCustomColor(::ItemStackBase const&) const;

    MCNAPI void setColor(::ItemStackBase&, ::mce::Color const&) const;
#else // @header-generator platform
    MCAPI void setColor(::ItemStackBase& instance, ::mce::Color const& color) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
