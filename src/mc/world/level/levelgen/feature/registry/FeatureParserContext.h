#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
class ResourcePackManager;
// clang-format on

struct FeatureParserContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IWorldRegistriesProvider&>  mLookupProvider;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&> mRpm;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                            mMinEngineVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>          mMinEngineVersion;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureParserContext& operator=(FeatureParserContext const&);
    FeatureParserContext(FeatureParserContext const&);
    FeatureParserContext();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void update(::MinEngineVersion const& minEngineVersion);
#endif
    // NOLINTEND
#endif // @header-generator platform
};
