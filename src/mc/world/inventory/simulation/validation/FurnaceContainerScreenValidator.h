#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

// auto generated forward declare list
// clang-format off
class ContainerValidationCommitObject;
class ItemStack;
// clang-format on

class FurnaceContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // FurnaceContainerScreenValidator inner types declare
    // clang-format off
    struct ExperienceRewards;
    // clang-format on

    // FurnaceContainerScreenValidator inner types define
    struct ExperienceRewards {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mLastItemRemovedExperienceReward;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<FurnaceContainerScreenValidator::ExperienceRewards>> mExperienceRewards;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FurnaceContainerScreenValidator::ExperienceRewards>>
        mExperienceRewards;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FurnaceContainerScreenValidator();
#else // @header-generator platform
    virtual ::std::shared_ptr<::ContainerValidationCommitObject> postCommitItemRemoved(
        ::ContainerEnumName const containerEnumName,
        int const                 slot,
        ::ItemStack const&        item
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ContainerValidationCommitObject> postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);
    // clang-format on
#else // @header-generator platform
    virtual ~FurnaceContainerScreenValidator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FurnaceContainerScreenValidator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ContainerValidationCommitObject>
           $postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ContainerValidationCommitObject>
    $postCommitItemRemoved(::ContainerEnumName const containerEnumName, int const slot, ::ItemStack const& item);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
