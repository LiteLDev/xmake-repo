#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/DisplayOrientation.h"
#include "mc/deps/core/platform/PlatformType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

struct PlatformRuntimeInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk42ea1e;
    ::ll::UntypedStorage<8, 32> mUnk87d0ce;
    ::ll::UntypedStorage<8, 32> mUnk716bc4;
    ::ll::UntypedStorage<8, 32> mUnk9cb263;
    ::ll::UntypedStorage<8, 32> mUnkf9c9d3;
    ::ll::UntypedStorage<8, 32> mUnkb4d290;
    ::ll::UntypedStorage<8, 32> mUnka99107;
    ::ll::UntypedStorage<8, 32> mUnk316409;
    ::ll::UntypedStorage<8, 32> mUnk1c4702;
    ::ll::UntypedStorage<8, 32> mUnkaaa3ba;
    ::ll::UntypedStorage<8, 32> mUnkab22f0;
    ::ll::UntypedStorage<4, 4>  mUnk7be153;
    ::ll::UntypedStorage<8, 8>  mUnke26e46;
    ::ll::UntypedStorage<8, 8>  mUnke184bc;
    ::ll::UntypedStorage<8, 8>  mUnk8f8931;
    ::ll::UntypedStorage<8, 8>  mUnkc866ca;
    ::ll::UntypedStorage<8, 8>  mUnk7da328;
    ::ll::UntypedStorage<8, 8>  mUnk109670;
    ::ll::UntypedStorage<8, 8>  mUnkb58086;
    ::ll::UntypedStorage<4, 4>  mUnk752258;
    ::ll::UntypedStorage<4, 4>  mUnk7f42d3;
    ::ll::UntypedStorage<4, 4>  mUnkfddc74;
    ::ll::UntypedStorage<4, 4>  mUnke6f100;
    ::ll::UntypedStorage<4, 4>  mUnkdb8438;
    ::ll::UntypedStorage<4, 4>  mUnk8fca59;
    ::ll::UntypedStorage<4, 4>  mUnka55450;
    ::ll::UntypedStorage<4, 4>  mUnkb1ab31;
    ::ll::UntypedStorage<1, 1>  mUnkc18517;
    ::ll::UntypedStorage<1, 1>  mUnk46af60;
    ::ll::UntypedStorage<1, 1>  mUnkd61296;
    ::ll::UntypedStorage<1, 1>  mUnk5eb061;
    ::ll::UntypedStorage<1, 1>  mUnka19644;
    ::ll::UntypedStorage<1, 1>  mUnk345f9e;
    ::ll::UntypedStorage<1, 1>  mUnkc40ac2;
    ::ll::UntypedStorage<1, 1>  mUnk441fb3;
    ::ll::UntypedStorage<1, 1>  mUnka8890e;
    ::ll::UntypedStorage<1, 1>  mUnk6e1bf7;
    ::ll::UntypedStorage<1, 1>  mUnk629fc5;
    ::ll::UntypedStorage<1, 1>  mUnkec4292;
    ::ll::UntypedStorage<1, 1>  mUnk60321b;
    ::ll::UntypedStorage<1, 1>  mUnk4c0235;
    ::ll::UntypedStorage<1, 1>  mUnkf9b459;
    ::ll::UntypedStorage<1, 1>  mUnk913b7e;
    ::ll::UntypedStorage<1, 1>  mUnkbb179f;
    ::ll::UntypedStorage<1, 1>  mUnk22b989;
    ::ll::UntypedStorage<1, 1>  mUnkc6204f;
    ::ll::UntypedStorage<1, 1>  mUnk10ec6e;
    ::ll::UntypedStorage<1, 1>  mUnk683774;
    ::ll::UntypedStorage<8, 32> mUnkbd7c3c;
    ::ll::UntypedStorage<8, 32> mUnke5e041;
    ::ll::UntypedStorage<8, 32> mUnkd4b470;
    ::ll::UntypedStorage<8, 32> mUnk518ef4;
    ::ll::UntypedStorage<8, 32> mUnk3b5b2a;
    ::ll::UntypedStorage<8, 32> mUnkd4d740;
    ::ll::UntypedStorage<8, 32> mUnkce6174;
    ::ll::UntypedStorage<8, 32> mUnke72f18;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PlatformRuntimeInfo& operator=(PlatformRuntimeInfo const&);
    PlatformRuntimeInfo(PlatformRuntimeInfo const&);
    PlatformRuntimeInfo();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlatformRuntimeInfo();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~PlatformRuntimeInfo() = default;
#else // LL_PLAT_C
    virtual ~PlatformRuntimeInfo();
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
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
