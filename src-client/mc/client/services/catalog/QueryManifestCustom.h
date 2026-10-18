#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
class StoreVisualStyle;
namespace Json { class Value; }
// clang-format on

struct QueryManifestCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mStoreScreenLayout;
    // NOLINTEND

public:
    // prevent constructor by default
    QueryManifestCustom& operator=(QueryManifestCustom const&);
    QueryManifestCustom(QueryManifestCustom const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromJson(::Json::Value const&, bool, ::CustomDocumentModifier*);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
