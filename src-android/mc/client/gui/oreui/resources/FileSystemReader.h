#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
