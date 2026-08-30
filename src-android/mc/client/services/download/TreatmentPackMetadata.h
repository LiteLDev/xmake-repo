#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/DateRange.h"

struct TreatmentPackMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::DateRange> mDateRange;
    ::ll::TypedStorage<8, 24, std::string> mRequiredTreatmentTag;
    ::ll::TypedStorage<8, 24, std::string> mMinClientVersion;
    ::ll::TypedStorage<8, 24, std::string> mMaxClientVersion;
    ::ll::TypedStorage<4, 4, int>          mPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentPackMetadata(TreatmentPackMetadata const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TreatmentPackMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
