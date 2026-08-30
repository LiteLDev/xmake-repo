#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

struct glTFExportData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    mModelName;
    ::ll::UntypedStorage<8, 24>               mFilePath;
    ::ll::TypedStorage<8, 24, std::string>    mModelId;
    ::ll::TypedStorage<4, 4, int>             mBlockCount;
    ::ll::TypedStorage<4, 4, int>             mEntityCount;
    ::ll::TypedStorage<4, 4, int>             mPlayerCount;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;
    ::ll::TypedStorage<4, 4, int>             mGameTime;
    ::ll::TypedStorage<8, 8, ulong>           mFileSize;
    ::ll::TypedStorage<8, 8, ulong>           mStartTime;
    ::ll::TypedStorage<8, 8, ulong>           mEndTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void writeEvent(::Social::Events::Event&) const;

    MCNAPI ~glTFExportData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
