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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mFilesAdded;
    ::ll::TypedStorage<8, 8, ulong> mFilesDeleted;
    ::ll::TypedStorage<8, 8, ulong> mFilesModified;
    ::ll::TypedStorage<8, 8, ulong> mBytesAdded;
    ::ll::TypedStorage<8, 8, ulong> mBytesDeleted;
    ::ll::TypedStorage<8, 8, ulong> mBytesModified;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkcb0011;
    ::ll::UntypedStorage<8, 8> mUnka0b677;
    ::ll::UntypedStorage<8, 8> mUnk6230b1;
    ::ll::UntypedStorage<8, 8> mUnked6311;
    ::ll::UntypedStorage<8, 8> mUnkdcb150;
    ::ll::UntypedStorage<8, 8> mUnk613e08;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FolderSizeAndModifyDateSnapshotDiff& operator=(FolderSizeAndModifyDateSnapshotDiff const&);
    FolderSizeAndModifyDateSnapshotDiff(FolderSizeAndModifyDateSnapshotDiff const&);
#endif // @header-generator platform
    FolderSizeAndModifyDateSnapshotDiff();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FolderSizeAndModifyDateSnapshotDiff(
        ::FolderSizeAndModifyDateSnapshot const&,
        ::FolderSizeAndModifyDateSnapshot const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI FolderSizeAndModifyDateSnapshotDiff(
        ::FolderSizeAndModifyDateSnapshot const& older,
        ::FolderSizeAndModifyDateSnapshot const& newer
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::FolderSizeAndModifyDateSnapshot const&, ::FolderSizeAndModifyDateSnapshot const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::FolderSizeAndModifyDateSnapshot const& older, ::FolderSizeAndModifyDateSnapshot const& newer);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
