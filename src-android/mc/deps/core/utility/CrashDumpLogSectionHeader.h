#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpLogSectionHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 16, char[16]> mItemName;
    ::ll::TypedStorage<4, 4, uint>      mItemCount;
    ::ll::TypedStorage<4, 4, uint>      mItemSizeInBytes;
    ::ll::TypedStorage<4, 4, uint>      mItemFormatSizeInBytes;
    // NOLINTEND
};
