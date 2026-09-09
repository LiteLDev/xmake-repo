#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourcePackManager;
struct PackIdVersion;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace OreUI { struct RouteData; }
// clang-format on

namespace OreUI {

class RouteDataParser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&> mPackManager;
    ::ll::UntypedStorage<8, 24>                            mFileAccess;
    ::ll::UntypedStorage<8, 24>                            mFileSystem;
    ::ll::UntypedStorage<8, 24>                            mDataPath;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteDataParser& operator=(RouteDataParser const&);
    RouteDataParser();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RouteDataParser(
        ::ResourcePackManager const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FileSystem>> const&,
        ::Core::Path const&
    );

    MCNAPI ~RouteDataParser();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourcePackManager const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FileSystem>> const&,
        ::Core::Path const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
