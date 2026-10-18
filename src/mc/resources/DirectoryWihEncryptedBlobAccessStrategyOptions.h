#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IFileAccess;
class IPackIOProvider;
class ResourceLocation;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct DirectoryWihEncryptedBlobAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                      mCreateWriter;
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mEncryptedContentLocation;
    ::ll::UntypedStorage<8, 24>                         mKeyProvider;
    ::ll::TypedStorage<8, 8, ::IFileAccess&>            mFileAccess;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkac58fb;
    ::ll::UntypedStorage<8, 8>  mUnkd3b9f4;
    ::ll::UntypedStorage<8, 8>  mUnk7d6b02;
    ::ll::UntypedStorage<8, 24> mUnk393a5d;
    ::ll::UntypedStorage<8, 8>  mUnk5b288c;
    ::ll::UntypedStorage<8, 8>  mUnk5a09c0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryWihEncryptedBlobAccessStrategyOptions& operator=(DirectoryWihEncryptedBlobAccessStrategyOptions const&);
    DirectoryWihEncryptedBlobAccessStrategyOptions(DirectoryWihEncryptedBlobAccessStrategyOptions const&);
    DirectoryWihEncryptedBlobAccessStrategyOptions();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DirectoryWihEncryptedBlobAccessStrategyOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
