#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourcePackManager;
namespace Core { class FileSystem; }
namespace Core { class Path; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RouteDataParser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                    mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>      mFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>> mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mDataPath;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteDataParser& operator=(RouteDataParser const&);
    RouteDataParser();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouteDataParser(::OreUI::RouteDataParser const&);

    MCAPI RouteDataParser(
        ::ResourcePackManager const&                             packManager,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      fileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const& fileSystem,
        ::Core::Path const&                                      dataPath
    );

    MCAPI ~RouteDataParser();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RouteDataParser const&);

    MCAPI void* $ctor(
        ::ResourcePackManager const&                             packManager,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      fileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const& fileSystem,
        ::Core::Path const&                                      dataPath
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RouteDataParser {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
