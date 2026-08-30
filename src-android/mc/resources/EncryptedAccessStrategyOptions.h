#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IPackIOProvider;
class ResourceLocation;
// clang-format on

struct EncryptedAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const&>  mContentIdentity;
    ::ll::UntypedStorage<8, 24>                         mKeyProvider;
    ::ll::TypedStorage<1, 1, bool>                      mCanRecurse;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedAccessStrategyOptions& operator=(EncryptedAccessStrategyOptions const&);
    EncryptedAccessStrategyOptions(EncryptedAccessStrategyOptions const&);
    EncryptedAccessStrategyOptions();

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
};
