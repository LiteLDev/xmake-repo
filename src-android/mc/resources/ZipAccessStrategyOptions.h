#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class IPackIOProvider;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

struct ZipAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::TypedStorage<1, 1, bool>                      mCreateWriter;
    ::ll::TypedStorage<1, 1, bool>                      mOptimizeForSpeedOverMemory;
    ::ll::TypedStorage<8, 8, ::Core::Path const&>       mZipSubDir;
    ::ll::TypedStorage<8, 8, ::IFileAccess&>            mFileAccess;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipAccessStrategyOptions& operator=(ZipAccessStrategyOptions const&);
    ZipAccessStrategyOptions(ZipAccessStrategyOptions const&);
    ZipAccessStrategyOptions();
};
