#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FlatFileManifest; }
namespace Core { class FlatFileManifestInfo; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class FlatFileSearchResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<const Core::FlatFileManifest>> mManifest;
    ::ll::TypedStorage<8, 8, ::Core::FlatFileManifestInfo const*>            mManifestInfoEntry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk52cace;
    ::ll::UntypedStorage<8, 8>  mUnkf09954;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FlatFileSearchResult& operator=(FlatFileSearchResult const&);
    FlatFileSearchResult(FlatFileSearchResult const&);
    FlatFileSearchResult();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FlatFileSearchResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
