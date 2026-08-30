#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FlatFileManifest; }
namespace Core { class FlatFileManifestInfo; }
// clang-format on

namespace Core {

class FlatFileSearchResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<const Core::FlatFileManifest>> mManifest;
    ::ll::TypedStorage<8, 8, ::Core::FlatFileManifestInfo const*>            mManifestInfoEntry;
    // NOLINTEND

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
