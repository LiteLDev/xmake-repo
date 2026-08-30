#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Subpack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mFolderName;
    ::ll::TypedStorage<4, 4, int>          mMemoryTier;
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
