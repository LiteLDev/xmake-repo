#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebviewDownloadInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb6a730;
    ::ll::UntypedStorage<8, 32> mUnkeb9ca9;
    ::ll::UntypedStorage<8, 32> mUnk7f7382;
    ::ll::UntypedStorage<8, 32> mUnkea37f5;
    ::ll::UntypedStorage<4, 4>  mUnk2ac638;
    ::ll::UntypedStorage<8, 32> mUnk22f808;
    ::ll::UntypedStorage<8, 32> mUnk9dd2a3;
    ::ll::UntypedStorage<8, 8>  mUnk5bc599;
    ::ll::UntypedStorage<8, 8>  mUnkbb7d12;
    ::ll::UntypedStorage<8, 8>  mUnk4b5e6a;
    ::ll::UntypedStorage<4, 4>  mUnkb2eebe;
    ::ll::UntypedStorage<8, 8>  mUnkd2fd0d;
    ::ll::UntypedStorage<8, 8>  mUnk4306d6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WebviewDownloadInfo& operator=(WebviewDownloadInfo const&);
    WebviewDownloadInfo(WebviewDownloadInfo const&);
    WebviewDownloadInfo();
#endif // @header-generator platform
};
