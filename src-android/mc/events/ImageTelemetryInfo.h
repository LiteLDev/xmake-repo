#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImageTelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                 mTotalImageCount;
    ::ll::TypedStorage<4, 4, uint>                 mImageFailCount;
    ::ll::TypedStorage<4, 4, uint>                 mImageSuccessCount;
    ::ll::TypedStorage<4, 4, uint>                 mImageCachedCount;
    ::ll::TypedStorage<8, 8, ulong>                mTotalImagesSize;
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mImageResponseCodes;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageTelemetryInfo& operator=(ImageTelemetryInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ImageTelemetryInfo& operator+=(::ImageTelemetryInfo);
    // NOLINTEND
};
