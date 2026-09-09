#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SnapshotFilenameAndLength {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> filename;
    ::ll::TypedStorage<8, 8, ulong>        filesize;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotFilenameAndLength& operator=(SnapshotFilenameAndLength const&);
    SnapshotFilenameAndLength(SnapshotFilenameAndLength const&);
    SnapshotFilenameAndLength();
};
