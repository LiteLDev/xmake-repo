#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"
#include "mc/client/services/catalog/DurableDocument.h"

struct DurableSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DurableDocument>> mDocuments;
    // NOLINTEND

public:
    // prevent constructor by default
    DurableSearchResults& operator=(DurableSearchResults const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DurableSearchResults();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct DurableSearchResults {};
#endif // @header-generator platform
