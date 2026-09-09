#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileHandlePool; }
// clang-format on

struct ZipPackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                                     mPath;
    ::ll::UntypedStorage<1, 24>                                                       mSubPath;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsTrusted;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>> mHandlePool;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ZipPackArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
