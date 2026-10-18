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

struct EncryptedZipAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::UntypedStorage<8, 24>                         mKeyProvider;
    ::ll::TypedStorage<8, 8, ::IFileAccess&>            mFileAccess;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk6a7448;
    ::ll::UntypedStorage<8, 24> mUnkf8d237;
    ::ll::UntypedStorage<8, 8>  mUnk164bb0;
    ::ll::UntypedStorage<8, 8>  mUnk43628c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedZipAccessStrategyOptions& operator=(EncryptedZipAccessStrategyOptions const&);
    EncryptedZipAccessStrategyOptions(EncryptedZipAccessStrategyOptions const&);
    EncryptedZipAccessStrategyOptions();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EncryptedZipAccessStrategyOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
