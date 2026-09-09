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

struct DirectoryWihEncryptedBlobAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mCreateWriter;
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mLocation;
    ::ll::TypedStorage<8, 8, ::ResourceLocation const&> mEncryptedContentLocation;
    ::ll::UntypedStorage<8, 24>                         mKeyProvider;
    ::ll::TypedStorage<8, 8, ::IFileAccess&>            mFileAccess;
    ::ll::TypedStorage<8, 8, ::IPackIOProvider const&>  mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryWihEncryptedBlobAccessStrategyOptions& operator=(DirectoryWihEncryptedBlobAccessStrategyOptions const&);
    DirectoryWihEncryptedBlobAccessStrategyOptions(DirectoryWihEncryptedBlobAccessStrategyOptions const&);
    DirectoryWihEncryptedBlobAccessStrategyOptions();

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
};
