#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/library/CharEncoding.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace librarySearch {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct TelemetryData {};
#endif // @header-generator platform

} // namespace librarySearch
