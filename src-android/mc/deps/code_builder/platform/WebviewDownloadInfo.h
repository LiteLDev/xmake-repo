#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebviewDownloadInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mContentDisposition;
    ::ll::TypedStorage<8, 24, std::string> mMimeType;
    ::ll::TypedStorage<8, 24, std::string> mOriginalURL;
    ::ll::TypedStorage<8, 24, std::string> mURL;
    ::ll::TypedStorage<4, 4, uint>         mId;
    ::ll::TypedStorage<8, 24, std::string> mSuggestedFileName;
    ::ll::TypedStorage<8, 24, std::string> mFullPath;
    ::ll::TypedStorage<8, 8, long>         mReceivedBytes;
    ::ll::TypedStorage<8, 8, long>         mTotalBytes;
    ::ll::TypedStorage<8, 8, long>         mCurrentSpeed;
    ::ll::TypedStorage<4, 4, int>          mPercentComplete;
    ::ll::TypedStorage<8, 8, long>         mStartTime;
    ::ll::TypedStorage<8, 8, long>         mEndTime;
    // NOLINTEND
};
