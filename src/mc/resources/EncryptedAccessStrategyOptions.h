#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IPackIOProvider;
class ResourceLocation;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct EncryptedAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const&>  mContentIdentity;
    ::ll::UntypedStorage<8, 24>                         mKeyProvider;
    ::ll::TypedStorage<1, 1, bool>                      mCanRecurse;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk7c5425;
    ::ll::UntypedStorage<8, 8>  mUnk83f2ae;
    ::ll::UntypedStorage<8, 24> mUnk2fbcb5;
    ::ll::UntypedStorage<1, 1>  mUnk366833;
    ::ll::UntypedStorage<8, 8>  mUnk4ef6f3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedAccessStrategyOptions& operator=(EncryptedAccessStrategyOptions const&);
    EncryptedAccessStrategyOptions(EncryptedAccessStrategyOptions const&);
    EncryptedAccessStrategyOptions();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EncryptedAccessStrategyOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
