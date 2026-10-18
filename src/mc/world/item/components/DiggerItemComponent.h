#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class HashedString;
class ItemStackBase;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
namespace SharedTypes::v1_20_50 { struct DiggerItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class DiggerItemComponent : public ::NetworkedItemComponent<DiggerItemComponent> {
#else // @header-generator platform
class DiggerItemComponent : public ::NetworkedItemComponent<::DiggerItemComponent> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 168, ::BlockDescriptor> filter;
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::BlockDescriptor> filter;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                 destroySpeed;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                         mUseEfficiency;
    ::ll::TypedStorage<8, 24, std::vector<DiggerItemComponent::BlockInfo>> mDestroySpeeds;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                             mUseEfficiency;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiggerItemComponent::BlockInfo>> mDestroySpeeds;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DiggerItemComponent();
    // NOLINTEND

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DiggerItemComponent();

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DiggerItemComponent(::SharedTypes::v1_20_50::DiggerItemComponent);

    MCNAPI bool canDestroySpecial(::Block const&) const;

    MCNAPI float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI explicit DiggerItemComponent(::SharedTypes::v1_20_50::DiggerItemComponent component);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::v1_20_50::DiggerItemComponent component);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
