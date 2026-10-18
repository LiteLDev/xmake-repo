#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class ResourceLocation;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct DirectoryAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::TypedStorage<1, 1, bool>                      mCreateWriter;
    ::ll::TypedStorage<1, 1, bool>                      mCanRecurse;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkbafe28;
    ::ll::UntypedStorage<1, 1> mUnk58ac1a;
    ::ll::UntypedStorage<1, 1> mUnk5afea0;
    ::ll::UntypedStorage<8, 8> mUnk6c6cd0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryAccessStrategyOptions& operator=(DirectoryAccessStrategyOptions const&);
    DirectoryAccessStrategyOptions(DirectoryAccessStrategyOptions const&);
    DirectoryAccessStrategyOptions();
};
