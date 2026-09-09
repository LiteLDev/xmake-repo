#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IFileAccess;
class IPackIOProvider;
class ResourceLocation;
// clang-format on

struct EncryptedZipAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::UntypedStorage<8, 24>                         mKeyProvider;
    ::ll::TypedStorage<8, 8, ::IFileAccess&>            mFileAccess;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedZipAccessStrategyOptions& operator=(EncryptedZipAccessStrategyOptions const&);
    EncryptedZipAccessStrategyOptions(EncryptedZipAccessStrategyOptions const&);
    EncryptedZipAccessStrategyOptions();

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
};
