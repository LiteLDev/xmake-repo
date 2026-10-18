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
#if defined(LL_PLAT_A) // @header-generator platform
    class ValidatorRegistryValidators;
#else // @header-generator platform
#endif // @header-generator platform
    struct ValidatorRegisterer;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class ValidatorRegistryValidators;
#endif // @header-generator platform
    // clang-format on

    // ValidatorRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ValidatorRegisterer {};

#endif // @header-generator platform
    class ValidatorRegistryValidators {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 48> mFuncPackValidator;
        ::ll::UntypedStorage<8, 48> mFuncSubpackValidator;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnk25ba02;
        ::ll::UntypedStorage<8, 64> mUnk317db0;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ValidatorRegistryValidators& operator=(ValidatorRegistryValidators const&);
#endif // @header-generator platform
        ValidatorRegistryValidators(ValidatorRegistryValidators const&);
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
        ValidatorRegistryValidators();
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ValidatorRegistry::ValidatorRegistryValidators>> mValidatorList;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk8ed098;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ValidatorRegistry();
    // NOLINTEND

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ValidatorRegistry& operator=(ValidatorRegistry const&);
    ValidatorRegistry(ValidatorRegistry const&);
    ValidatorRegistry();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ValidatorRegistry& operator=(ValidatorRegistry const&);
    ValidatorRegistry(ValidatorRegistry const&);

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ValidatorRegistry();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ValidatorRegistry();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, ValidatorRegistry::ValidatorRegistryValidators> const&
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::NonOwnerPointer<::ValidatorRegistry> _get();
#endif

#ifdef LL_PLAT_S
    MCNAPI static ::Bedrock::NonOwnerPointer<::ValidatorRegistry> _get();
#endif

    MCNAPI static ::std::unordered_map<::std::string, ::ValidatorRegistry::ValidatorRegistryValidators> const&
#endif // @header-generator platform
    getValidatorMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
