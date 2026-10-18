#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IFileAccess;
class IPackIOProvider;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ZipAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::TypedStorage<1, 1, bool>                      mCreateWriter;
    ::ll::TypedStorage<1, 1, bool>                      mOptimizeForSpeedOverMemory;
    ::ll::TypedStorage<8, 8, ::Core::Path const&>       mZipSubDir;
    ::ll::TypedStorage<8, 8, ::IFileAccess&>            mFileAccess;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkcf2934;
    ::ll::UntypedStorage<1, 1> mUnk885419;
    ::ll::UntypedStorage<1, 1> mUnk5674dd;
    ::ll::UntypedStorage<8, 8> mUnkf62425;
    ::ll::UntypedStorage<8, 8> mUnke6d013;
    ::ll::UntypedStorage<8, 8> mUnk20e28f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ZipAccessStrategyOptions& operator=(ZipAccessStrategyOptions const&);
    ZipAccessStrategyOptions(ZipAccessStrategyOptions const&);
    ZipAccessStrategyOptions();
};
