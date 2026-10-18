#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class UnzipFile; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct StreamableAssetSource {
public:
    // StreamableAssetSource inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct FileSource;
    struct ZipExtractSource;
#else // @header-generator platform
#endif // @header-generator platform
    struct EncryptedFileSource;
    struct EncryptedZipExtractSource;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct FileSource;
    struct ZipExtractSource;
#endif // @header-generator platform
    // clang-format on

    // StreamableAssetSource inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct EncryptedFileSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> mUnkcec3cf;
        ::ll::UntypedStorage<8, 32>   mUnke80587;
        // NOLINTEND

    public:
        // prevent constructor by default
        EncryptedFileSource& operator=(EncryptedFileSource const&);
        EncryptedFileSource(EncryptedFileSource const&);
        EncryptedFileSource();
    };

    struct EncryptedZipExtractSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>    mUnk8f08b7;
        ::ll::UntypedStorage<8, 1032> mUnkf1bd8c;
        ::ll::UntypedStorage<8, 1032> mUnkad7aed;
        ::ll::UntypedStorage<8, 32>   mUnk1a01c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        EncryptedZipExtractSource& operator=(EncryptedZipExtractSource const&);
        EncryptedZipExtractSource(EncryptedZipExtractSource const&);
        EncryptedZipExtractSource();
    };

#endif // @header-generator platform
    struct FileSource {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 1032> mFullPath;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 1032> mUnkf8f530;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::UnzipFile>> mZipFile;
        ::ll::UntypedStorage<8, 1032>                              mEntryPath;
        ::ll::UntypedStorage<8, 1032>                              mTempDirectory;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>    mUnkc5b638;
        ::ll::UntypedStorage<8, 1032> mUnkebc8ac;
        ::ll::UntypedStorage<8, 1032> mUnkc67195;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct EncryptedFileSource {
#else // @header-generator platform
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        // prevent constructor by default
        ZipExtractSource& operator=(ZipExtractSource const&);
        ZipExtractSource(ZipExtractSource const&);
        ZipExtractSource();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 2104, std::variant<StreamableAssetSource::FileSource, StreamableAssetSource::ZipExtractSource, StreamableAssetSource::EncryptedFileSource, StreamableAssetSource::EncryptedZipExtractSource>> mSource;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 2112> mUnka0154c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StreamableAssetSource& operator=(StreamableAssetSource const&);
    StreamableAssetSource(StreamableAssetSource const&);
    StreamableAssetSource();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
