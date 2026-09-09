#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ScreenshotPostProcessFilter.h"
#include "mc/deps/core/file/PathBuffer.h"

struct ScreenshotOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          mCropToRatio;
    ::ll::TypedStorage<4, 4, int>                           mWidthRatio;
    ::ll::TypedStorage<4, 4, int>                           mHeightRatio;
    ::ll::TypedStorage<4, 4, uint>                          mMaxWidth;
    ::ll::TypedStorage<4, 4, uint>                          mMaxHeight;
    ::ll::TypedStorage<1, 1, bool>                          mRestrictScreenshotSize;
    ::ll::TypedStorage<1, 1, bool>                          mApplySquareFrame;
    ::ll::UntypedStorage<8, 24>                             mRequestedFileName;
    ::ll::UntypedStorage<8, 24>                             mRequestedFilePath;
    ::ll::UntypedStorage<8, 24>                             mRequestedExtension;
    ::ll::TypedStorage<1, 1, bool>                          mReplaceImage;
    ::ll::TypedStorage<1, 1, bool>                          mUseScreenshotsFolder;
    ::ll::TypedStorage<1, 1, bool>                          mHideUI;
    ::ll::TypedStorage<1, 1, bool>                          mLogRequest;
    ::ll::TypedStorage<1, 1, bool>                          mWriteScreenshotToFile;
    ::ll::TypedStorage<1, 1, bool>                          mIsSavegameScreenshot;
    ::ll::UntypedStorage<8, 24>                             mOutFileName;
    ::ll::UntypedStorage<8, 24>                             mOutFileDir;
    ::ll::UntypedStorage<8, 24>                             mOutExtension;
    ::ll::TypedStorage<4, 4, ::ScreenshotPostProcessFilter> mPostProcessFilter;
    ::ll::UntypedStorage<8, 24>                             mScreenshotBorderResourcePath;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotOptions(ScreenshotOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScreenshotOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
