#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class UnzipFile; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

struct StreamableAssetSource {
public:
    // StreamableAssetSource inner types declare
    // clang-format off
    struct FileSource;
    struct ZipExtractSource;
    struct EncryptedFileSource;
    struct EncryptedZipExtractSource;
    // clang-format on

    // StreamableAssetSource inner types define
    struct FileSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> mFullPath;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileSource& operator=(FileSource const&);
        FileSource(FileSource const&);
        FileSource();
    };

    struct ZipExtractSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::UnzipFile>> mZipFile;
        ::ll::UntypedStorage<8, 1032>                              mEntryPath;
        ::ll::UntypedStorage<8, 1032>                              mTempDirectory;
        // NOLINTEND
    };

    struct EncryptedFileSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032>          mFullPath;
        ::ll::TypedStorage<8, 24, std::string> mKey;
        // NOLINTEND
    };

    struct EncryptedZipExtractSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::UnzipFile>> mZipFile;
        ::ll::UntypedStorage<8, 1032>                              mEntryPath;
        ::ll::UntypedStorage<8, 1032>                              mTempDirectory;
        ::ll::TypedStorage<8, 24, std::string>                     mKey;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 2104, std::variant<StreamableAssetSource::FileSource, StreamableAssetSource::ZipExtractSource, StreamableAssetSource::EncryptedFileSource, StreamableAssetSource::EncryptedZipExtractSource>> mSource;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    StreamableAssetSource& operator=(StreamableAssetSource const&);
    StreamableAssetSource(StreamableAssetSource const&);
    StreamableAssetSource();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StreamableAssetSource();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
