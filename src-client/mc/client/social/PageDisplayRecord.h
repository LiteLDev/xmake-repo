#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/RowDisplayRecord.h"

namespace Social::Events {

struct PageDisplayRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                pageName;
    ::ll::TypedStorage<8, 24, std::string>                                                linkType;
    ::ll::TypedStorage<8, 24, std::string>                                                viewSessionId;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> startTime;
    ::ll::TypedStorage<8, 24, std::vector<Social::Events::RowDisplayRecord>>              rowsOnPage;
    ::ll::TypedStorage<8, 8, double>                                                      verticalScrollSpeedSum;
    ::ll::TypedStorage<8, 8, long>                                                        verticalScrollSpeedSamples;
    ::ll::TypedStorage<4, 4, float>                                                       verticalScrollSpeedPeak;
    ::ll::TypedStorage<4, 4, float>                                                       verticalScrollSpeedAvg;
    ::ll::TypedStorage<8, 8, long>                                                        pageHeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PageDisplayRecord();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
