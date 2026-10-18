#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/cohtml/IFileSystemReader.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace Gameface { class ISyncStreamReader; }
namespace cohtml { class ISyncStreamReader; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/cohtml/IFileSystemReader.h"
#include "mc/external/gameface/cohtml/ISyncStreamReader.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace Gameface { class ISyncStreamReader; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class FileSystemReader : public ::cohtml::IFileSystemReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mFileSystem;
    ::ll::UntypedStorage<8, 24> mFileAccess;
    ::ll::UntypedStorage<8, 24> mCurrentFolderFiles;
    ::ll::UntypedStorage<8, 32> mCurrentFileName;
    ::ll::UntypedStorage<8, 48> mSyncStreamReaderFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSystemReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSystemReader();

    virtual bool EnumerateFolder(char const*);

    virtual char const* NextFile();

    virtual ::cohtml::ISyncStreamReader* OpenFile(char const*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSystemReader(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FileSystem>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        std::function<Gameface::ISyncStreamReader*(IFileAccess&, Core::Path)> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FileSystem>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        std::function<Gameface::ISyncStreamReader*(IFileAccess&, Core::Path)> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $EnumerateFolder(char const*);

    MCNAPI char const* $NextFile();

    MCNAPI ::cohtml::ISyncStreamReader* $OpenFile(char const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class FileSystemReader : public ::cohtml::IFileSystemReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>>   mFileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>        mFileAccess;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mCurrentFolderFiles;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mCurrentFileName;
    ::ll::TypedStorage<8, 64, ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)>>
        mSyncStreamReaderFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSystemReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSystemReader() /*override*/ = default;

    virtual bool EnumerateFolder(char const* path) /*override*/;

    virtual char const* NextFile() /*override*/;

    virtual ::cohtml::ISyncStreamReader* OpenFile(char const* path) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileSystemReader(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                             fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                  fileAccess,
        ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)> const& syncStreamReaderFactory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                             fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                  fileAccess,
        ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)> const& syncStreamReaderFactory
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $EnumerateFolder(char const* path);

    MCAPI char const* $NextFile();

    MCAPI ::cohtml::ISyncStreamReader* $OpenFile(char const* path);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class FileSystemReader {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
