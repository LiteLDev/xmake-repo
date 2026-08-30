#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentTierInfo;
class PackInstance;
struct SubpackInfo;
// clang-format on

class ValidatorRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ValidatorRegistry inner types declare
    // clang-format off
    class ValidatorRegistryValidators;
    struct ValidatorRegisterer;
    // clang-format on

    // ValidatorRegistry inner types define
    class ValidatorRegistryValidators {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mFuncPackValidator;
        ::ll::UntypedStorage<8, 48> mFuncSubpackValidator;
        // NOLINTEND

    public:
        // prevent constructor by default
        ValidatorRegistryValidators(ValidatorRegistryValidators const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::function<ContentTierIncompatibleReason(const PackInstance&, const ContentTierInfo&)>
               getPackInstanceValidatorFunction() const;

        MCNAPI std::function<ContentTierIncompatibleReason(const SubpackInfo&, const ContentTierInfo&)>
               getSubpackInfoValidatorFunction() const;

        MCNAPI ~ValidatorRegistryValidators();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ValidatorRegisterer {
    public:
        // prevent constructor by default
        ValidatorRegisterer();
    };

    using ValidatorMap = std::unordered_map<std::string, ValidatorRegistry::ValidatorRegistryValidators>;

    using FNPackInstanceValidator =
        std::function<ContentTierIncompatibleReason(const PackInstance&, const ContentTierInfo&)>;

    using FNSubpackInfoValidator =
        std::function<ContentTierIncompatibleReason(const SubpackInfo&, const ContentTierInfo&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ValidatorRegistry::ValidatorRegistryValidators>> mValidatorList;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ValidatorRegistry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ValidatorRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<std::string, ValidatorRegistry::ValidatorRegistryValidators> const&
    getValidatorMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
