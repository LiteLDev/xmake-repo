#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_60 { struct StorageWeightLimitItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class StorageWeightLimitItemComponent : public ::NetworkedItemComponent<StorageWeightLimitItemComponent> {
#else // @header-generator platform
class StorageWeightLimitItemComponent : public ::NetworkedItemComponent<::StorageWeightLimitItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWeightLimit;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_60::StorageWeightLimitItemComponent const&);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
