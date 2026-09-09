#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PackCapabilityTrustLevel.h"

// auto generated forward declare list
// clang-format off
class PackError;
// clang-format on

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
        struct Succeeded;
        struct Failed;
        struct NotFound;
        // clang-format on

        // ValidationResult inner types define
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

        struct Failed {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<PackError>>> mError;
            // NOLINTEND

        public:
            // prevent constructor by default
            Failed& operator=(Failed const&);
            Failed(Failed const&);
            Failed();

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
        };

        struct NotFound {};

        using Variant = std::variant<
            PackCapability::ValidationResult::Succeeded,
            PackCapability::ValidationResult::Failed,
            PackCapability::ValidationResult::NotFound>;
    };

    using TrustLevel = ::PackCapabilityTrustLevel;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mName;
    ::ll::UntypedStorage<8, 48> mValidator;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackCapability();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
