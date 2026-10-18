#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/PackCapabilityTrustLevel.h"

// auto generated forward declare list
// clang-format off
class PackError;
// clang-format on
#else // @header-generator platform
#include "mc/resources/PackCapabilityTrustLevel.h"
#endif // @header-generator platform

class PackCapability {
public:
    // PackCapability inner types declare
    // clang-format off
    struct ValidationResult;
    // clang-format on

    // PackCapability inner types define
    struct ValidationResult {
    public:
        // ValidationResult inner types declare
        // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
        struct Succeeded;
#else // @header-generator platform
#endif // @header-generator platform
        struct Failed;
        struct NotFound;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        struct Succeeded;
#endif // @header-generator platform
        // clang-format on

        // ValidationResult inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct Succeeded {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, ::PackCapabilityTrustLevel>  mTrustLevel;
            ::ll::TypedStorage<8, 16, std::shared_ptr<PackError>> mWarning;
            // NOLINTEND

        public:
            // prevent constructor by default
            Succeeded& operator=(Succeeded const&);
            Succeeded(Succeeded const&);
            Succeeded();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~Succeeded();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

#else // @header-generator platform
#endif // @header-generator platform
        struct Failed {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<PackError>>> mError;
#else // @header-generator platform
            ::ll::UntypedStorage<8, 16> mUnkf8fbdc;
#endif // @header-generator platform
            // NOLINTEND

        public:
            // prevent constructor by default
            Failed& operator=(Failed const&);
            Failed(Failed const&);
            Failed();
#if defined(LL_PLAT_A) // @header-generator platform

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~Failed();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
        };

        struct NotFound {};

#if defined(LL_PLAT_A) // @header-generator platform
        using Variant = std::variant<
            PackCapability::ValidationResult::Succeeded,
            PackCapability::ValidationResult::Failed,
            PackCapability::ValidationResult::NotFound>;
    };
#else // @header-generator platform
        struct Succeeded {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4>  mUnkc8a8bf;
            ::ll::UntypedStorage<8, 16> mUnkebceb3;
            // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using TrustLevel = ::PackCapabilityTrustLevel;
#else // @header-generator platform
        public:
            // prevent constructor by default
            Succeeded& operator=(Succeeded const&);
            Succeeded(Succeeded const&);
            Succeeded();
        };
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mName;
    ::ll::UntypedStorage<8, 48> mValidator;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkcc441d;
    ::ll::UntypedStorage<8, 64> mUnk2bab95;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackCapability();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    PackCapability& operator=(PackCapability const&);
    PackCapability(PackCapability const&);
    PackCapability();
#endif // @header-generator platform
};
