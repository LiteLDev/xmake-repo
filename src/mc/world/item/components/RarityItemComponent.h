#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Rarity.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_30 { struct RarityItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class RarityItemComponent : public ::NetworkedItemComponent<RarityItemComponent> {
#else // @header-generator platform
class RarityItemComponent : public ::NetworkedItemComponent<::RarityItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Rarity> mRarity;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RarityItemComponent& operator=(RarityItemComponent const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RarityItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RarityItemComponent(::SharedTypes::v1_21_30::RarityItemComponent const&);
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_30::RarityItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeComponent(::ComponentItem&);
#else // @header-generator platform
    MCAPI void $_initializeComponent(::ComponentItem& owner);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
