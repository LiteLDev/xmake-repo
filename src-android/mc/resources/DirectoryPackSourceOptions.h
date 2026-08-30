#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { class IPackCommandPipeline; }
// clang-format on

struct DirectoryPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceOptions> mBase;
    ::ll::UntypedStorage<1, 24>                   mPath;
    ::ll::UntypedStorage<1, 1>                    mPackType;
    ::ll::UntypedStorage<1, 1>                    mPackOrigin;
    ::ll::TypedStorage<1, 1, bool>                mIsDeveloperDirectory;
    ::ll::UntypedStorage<8, 24>                   mCommands;
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
