#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/DisplayOrientation.h"
#include "mc/deps/core/platform/PlatformType.h"

namespace Bedrock {

struct PlatformRuntimeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         mDeviceModelName;
    ::ll::TypedStorage<8, 24, std::string>         mOSVersion;
    ::ll::TypedStorage<8, 24, std::string>         mCPUType;
    ::ll::TypedStorage<8, 24, std::string>         mCPUName;
    ::ll::TypedStorage<8, 24, std::string>         mSoCName;
    ::ll::TypedStorage<8, 24, std::string>         mCPUFeatures;
    ::ll::TypedStorage<8, 24, std::string>         mSecureId;
    ::ll::TypedStorage<8, 24, std::string>         mSerial;
    ::ll::TypedStorage<8, 24, std::string>         mBoard;
    ::ll::TypedStorage<8, 24, std::string>         mInstallerPackageName;
    ::ll::TypedStorage<8, 24, std::string>         mRegion;
    ::ll::TypedStorage<4, 4, ::PlatformType>       mPlatformType;
    ::ll::TypedStorage<8, 8, ulong>                mCachedFreeStorageSpace_Internal;
    ::ll::TypedStorage<8, 8, ulong>                mCachedFreeStorageSpace_External;
    ::ll::TypedStorage<8, 8, ulong>                mCachedFreeStorageSpace_Cloud;
    ::ll::TypedStorage<8, 8, ulong>                mTotalPhysicalMemory;
    ::ll::TypedStorage<8, 8, ulong>                mTotalVirtualMemory;
    ::ll::TypedStorage<8, 8, ulong>                mUsedMemory;
    ::ll::TypedStorage<8, 8, ulong>                mPhysicalMemorySize;
    ::ll::TypedStorage<4, 4, uint>                 mOptimalLDBSize;
    ::ll::TypedStorage<4, 4, uint>                 mUsedKernelMemory;
    ::ll::TypedStorage<4, 4, uint>                 mTotalKernelMemory;
    ::ll::TypedStorage<4, 4, int>                  mWidth;
    ::ll::TypedStorage<4, 4, int>                  mHeight;
    ::ll::TypedStorage<4, 4, float>                mDPI;
    ::ll::TypedStorage<4, 4, ::DisplayOrientation> mOrientation;
    ::ll::TypedStorage<4, 4, int>                  mSignaturesHash;
    ::ll::TypedStorage<1, 1, bool>                 mGraphicsTearingSupport;
    ::ll::TypedStorage<1, 1, bool>                 mAllowSplitScreen;
    ::ll::TypedStorage<1, 1, bool>                 mSupportsMSAA;
    ::ll::TypedStorage<1, 1, bool>                 mSupportsVibration;
    ::ll::TypedStorage<1, 1, bool>                 mSupportsTextToSpeech;
    ::ll::TypedStorage<1, 1, bool>                 mSupportsClipboard;
    ::ll::TypedStorage<1, 1, bool>                 mSupportsFilePicking;
    ::ll::TypedStorage<1, 1, bool>                 mAllowContentLogWrite;
    ::ll::TypedStorage<1, 1, bool>                 mIsRooted;
    ::ll::TypedStorage<1, 1, bool>                 mCanSelfTerminate;
    ::ll::TypedStorage<1, 1, bool>                 mCanLaunchUri;
    ::ll::TypedStorage<1, 1, uchar>                mCoreCount;
    ::ll::TypedStorage<1, 1, uchar>                mPerformanceCoreCount;
    ::ll::TypedStorage<1, 1, uchar>                mClusterCount;
    ::ll::TypedStorage<1, 1, uchar>                mThreadCount;
    ::ll::TypedStorage<1, 1, uchar>                mHighPerfThreadCount;
    ::ll::TypedStorage<1, 1, uchar>                mProcessorGrade;
    ::ll::TypedStorage<1, 1, uchar>                mGraphicsGrade;
    ::ll::TypedStorage<1, 1, uchar>                mMemoryGrade;
    ::ll::TypedStorage<1, 1, uchar>                mStorageGrade;
    ::ll::TypedStorage<1, 1, uchar>                mPowerSupplyGrade;
    ::ll::UntypedStorage<8, 24>                    mAssetStoragePath;
    ::ll::UntypedStorage<8, 24>                    mCurrentStoragePath;
    ::ll::UntypedStorage<8, 24>                    mExternalStoragePath;
    ::ll::UntypedStorage<8, 24>                    mInternalStoragePath;
    ::ll::UntypedStorage<8, 24>                    mLoggingPath;
    ::ll::UntypedStorage<8, 24>                    mPackagePath;
    ::ll::UntypedStorage<8, 24>                    mUserDataPath;
    ::ll::UntypedStorage<8, 24>                    mCacheStoragePath;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlatformRuntimeInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
