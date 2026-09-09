#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/library/CharEncoding.h"

namespace librarySearch {

struct TelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::librarySearch::CharEncoding> mCharEncoding;
    ::ll::TypedStorage<4, 4, int>                           mSearchSessionId;
    ::ll::TypedStorage<4, 4, int>                           mSearchCorrelationId;
    ::ll::TypedStorage<4, 4, uint>                          mSearchCharacters;
    ::ll::TypedStorage<4, 4, uint>                          mResultCount;
    ::ll::TypedStorage<4, 4, uint>                          mRowCount;
    ::ll::TypedStorage<8, 24, std::string>                  mSortType;
    // NOLINTEND
};

} // namespace librarySearch
