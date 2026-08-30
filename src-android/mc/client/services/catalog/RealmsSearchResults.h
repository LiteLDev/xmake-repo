#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"
#include "mc/client/services/catalog/RealmsDocument.h"

struct RealmsSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RealmsDocument>> mDocuments;
    // NOLINTEND
};
