#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mPlacesFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string> mPlacesFeature;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AutomaticFeatureRuleDescription& operator=(AutomaticFeatureRuleDescription const&);
#endif // @header-generator platform
    AutomaticFeatureRuleDescription();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AutomaticFeatureRuleDescription();
#else // @header-generator platform
    MCAPI AutomaticFeatureRuleDescription(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription const&);

    MCFOLD ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&&);

    MCAPI ~AutomaticFeatureRuleDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
