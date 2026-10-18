#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { class IPackCommandPipeline; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct DirectoryPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceOptions> mBase;
    ::ll::UntypedStorage<1, 24>                   mPath;
    ::ll::UntypedStorage<1, 1>                    mPackType;
    ::ll::UntypedStorage<1, 1>                    mPackOrigin;
    ::ll::TypedStorage<1, 1, bool>                mIsDeveloperDirectory;
    ::ll::UntypedStorage<8, 24>                   mCommands;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkbcaf4b;
    ::ll::UntypedStorage<8, 32> mUnk1032f2;
    ::ll::UntypedStorage<1, 1>  mUnk88abc6;
    ::ll::UntypedStorage<1, 1>  mUnk769245;
    ::ll::UntypedStorage<1, 1>  mUnkbd672e;
    ::ll::UntypedStorage<8, 24> mUnk588ae8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackSourceOptions& operator=(DirectoryPackSourceOptions const&);
    DirectoryPackSourceOptions(DirectoryPackSourceOptions const&);
    DirectoryPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DirectoryPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
