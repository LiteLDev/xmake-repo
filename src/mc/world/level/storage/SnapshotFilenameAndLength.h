#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SnapshotFilenameAndLength {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> filename;
    ::ll::TypedStorage<8, 8, ulong>        filesize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb4503f;
    ::ll::UntypedStorage<8, 8>  mUnk2eae88;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotFilenameAndLength& operator=(SnapshotFilenameAndLength const&);
    SnapshotFilenameAndLength(SnapshotFilenameAndLength const&);
    SnapshotFilenameAndLength();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SnapshotFilenameAndLength(::std::string filename, uint64 filesize);

#ifdef LL_PLAT_S
    MCNAPI ::std::string toString();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string filename, uint64 filesize);
    // NOLINTEND
#endif // @header-generator platform
};
