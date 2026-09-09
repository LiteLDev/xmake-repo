#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FolderSizeAndModifyDateSnapshot;
// clang-format on

class FolderSizeAndModifyDateSnapshotDiff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mFilesAdded;
    ::ll::TypedStorage<8, 8, ulong> mFilesDeleted;
    ::ll::TypedStorage<8, 8, ulong> mFilesModified;
    ::ll::TypedStorage<8, 8, ulong> mBytesAdded;
    ::ll::TypedStorage<8, 8, ulong> mBytesDeleted;
    ::ll::TypedStorage<8, 8, ulong> mBytesModified;
    // NOLINTEND

public:
    // prevent constructor by default
    FolderSizeAndModifyDateSnapshotDiff();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FolderSizeAndModifyDateSnapshotDiff(
        ::FolderSizeAndModifyDateSnapshot const&,
        ::FolderSizeAndModifyDateSnapshot const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FolderSizeAndModifyDateSnapshot const&, ::FolderSizeAndModifyDateSnapshot const&);
    // NOLINTEND
};
