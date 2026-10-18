#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackCapability.h"

// auto generated forward declare list
// clang-format off
class PackCapability;
// clang-format on

class PackCapabilityRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mPackCapabilities;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk27dd51;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackCapabilityRegistry(PackCapabilityRegistry const&);
#endif // @header-generator platform
    PackCapabilityRegistry();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PackCapabilityRegistry(std::initializer_list<PackCapability> const&);
#else // @header-generator platform
    MCNAPI explicit PackCapabilityRegistry(::std::initializer_list<::PackCapability> const& packCapabilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<
        PackCapability::ValidationResult::Succeeded,
        PackCapability::ValidationResult::Failed,
        PackCapability::ValidationResult::NotFound>
        lookup(std::string_view) const;
#else // @header-generator platform
    MCNAPI ::std::variant<
        ::PackCapability::ValidationResult::Succeeded,
        ::PackCapability::ValidationResult::Failed,
        ::PackCapability::ValidationResult::NotFound>
    lookup(::std::string_view name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void merge(::PackCapabilityRegistry&);
#else // @header-generator platform
    MCNAPI ~PackCapabilityRegistry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::initializer_list<PackCapability> const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::initializer_list<::PackCapability> const& packCapabilities);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
