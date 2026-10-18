#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpLogSectionHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 16, char[16]> mItemName;
    ::ll::TypedStorage<4, 4, uint>      mItemCount;
    ::ll::TypedStorage<4, 4, uint>      mItemSizeInBytes;
    ::ll::TypedStorage<4, 4, uint>      mItemFormatSizeInBytes;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 16> mUnk966daa;
    ::ll::UntypedStorage<4, 4>  mUnk5e7841;
    ::ll::UntypedStorage<4, 4>  mUnk9d5d23;
    ::ll::UntypedStorage<4, 4>  mUnk6769f2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpLogSectionHeader& operator=(CrashDumpLogSectionHeader const&);
    CrashDumpLogSectionHeader(CrashDumpLogSectionHeader const&);
    CrashDumpLogSectionHeader();
#endif // @header-generator platform
};
