#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ScreenshotPostProcessFilter.h"
#include "mc/deps/core/file/PathBuffer.h"

struct ScreenshotOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                               mCropToRatio;
    ::ll::TypedStorage<4, 4, int>                                mWidthRatio;
    ::ll::TypedStorage<4, 4, int>                                mHeightRatio;
    ::ll::TypedStorage<4, 4, uint>                               mMaxWidth;
    ::ll::TypedStorage<4, 4, uint>                               mMaxHeight;
    ::ll::TypedStorage<1, 1, bool>                               mRestrictScreenshotSize;
    ::ll::TypedStorage<1, 1, bool>                               mApplySquareFrame;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mRequestedFileName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mRequestedFilePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mRequestedExtension;
    ::ll::TypedStorage<1, 1, bool>                               mReplaceImage;
    ::ll::TypedStorage<1, 1, bool>                               mUseScreenshotsFolder;
    ::ll::TypedStorage<1, 1, bool>                               mHideUI;
    ::ll::TypedStorage<1, 1, bool>                               mLogRequest;
    ::ll::TypedStorage<1, 1, bool>                               mWriteScreenshotToFile;
    ::ll::TypedStorage<1, 1, bool>                               mIsSavegameScreenshot;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mOutFileName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mOutFileDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mOutExtension;
    ::ll::TypedStorage<4, 4, ::ScreenshotPostProcessFilter>      mPostProcessFilter;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mScreenshotBorderResourcePath;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ScreenshotOptions(ScreenshotOptions const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScreenshotOptions& operator=(ScreenshotOptions const&);
    ScreenshotOptions();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScreenshotOptions();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ScreenshotOptions(::ScreenshotOptions const&);

    MCAPI ~ScreenshotOptions();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ScreenshotOptions const&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
