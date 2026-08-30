#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
