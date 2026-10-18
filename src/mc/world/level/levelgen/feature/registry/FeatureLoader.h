#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
struct FeatureParserContext;
struct FeatureResult;
struct SupportedFeatureSchema;
struct SupportedFeatureUpgrader;
namespace Puv { class Input; }
// clang-format on

class FeatureLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 144> mLoader;
#else // @header-generator platform
    ::ll::TypedStorage<8, 168, ::Puv::Loader<::FeatureResult, ::FeatureResult>> mLoader;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FeatureLoader();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI FeatureLoader(
        ::FeatureParserContext&                          context,
        ::std::vector<::SupportedFeatureSchema> const&   supportedSchemas,
        ::std::vector<::SupportedFeatureUpgrader> const& supportedUpgraders
    );

    MCAPI ::Puv::LoadResult<::FeatureResult> load(::Puv::Input const& input) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FeatureLoader();
#else // @header-generator platform
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::FeatureParserContext&                          context,
        ::std::vector<::SupportedFeatureSchema> const&   supportedSchemas,
        ::std::vector<::SupportedFeatureUpgrader> const& supportedUpgraders
    );
#endif
    // NOLINTEND
#endif // @header-generator platform
};
