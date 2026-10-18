#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class PlatformBootstrap {
public:
    // PlatformBootstrap inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct CreateDirectoryResult;
#endif // @header-generator platform
    struct LoadResult;
    struct SaveResult;
#if defined(LL_PLAT_A) // @header-generator platform
    struct CreateDirectoryResult;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // PlatformBootstrap inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class CreateDirectoryResultCode : int {
        Success = 0,
        Failure = 1,
    };

#endif // @header-generator platform
    enum class LoadResultCode : int {
        Success        = 0,
        FailedToOpen   = 1,
        FailedToRead   = 2,
        BufferTooSmall = 3,
    };

    enum class SaveResultCode : int {
        Success                    = 0,
        FailedToOpen               = 1,
        FailedToWrite              = 2,
        IncorrectBytesWrittenCount = 3,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class CreateDirectoryResultCode : int {
        Success = 0,
        Failure = 1,
#else // @header-generator platform
    struct CreateDirectoryResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk1dc224;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateDirectoryResult& operator=(CreateDirectoryResult const&);
        CreateDirectoryResult(CreateDirectoryResult const&);
        CreateDirectoryResult();
#endif // @header-generator platform
    };

    struct LoadResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>                                        mBytesRead;
        ::ll::TypedStorage<4, 4, ::Bedrock::PlatformBootstrap::LoadResultCode> mResult;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk74cb47;
        ::ll::UntypedStorage<4, 4> mUnk32effc;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        LoadResult& operator=(LoadResult const&);
        LoadResult(LoadResult const&);
        LoadResult();
#endif // @header-generator platform
    };

    struct SaveResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>                                        mBytesWritten;
        ::ll::TypedStorage<4, 4, ::Bedrock::PlatformBootstrap::SaveResultCode> mResult;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk2df4c8;
        ::ll::UntypedStorage<4, 4> mUnkff834a;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct CreateDirectoryResult {
#else // @header-generator platform
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Bedrock::PlatformBootstrap::CreateDirectoryResultCode> mResult;
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        SaveResult& operator=(SaveResult const&);
        SaveResult(SaveResult const&);
        SaveResult();
#endif // @header-generator platform
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PlatformBootstrap();
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual void initialize() = 0;

    virtual ::std::string_view getAssetRoot() = 0;

    virtual ::std::string_view getSaveDataRoot() = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult
    rawLoadAssetFile(char* buffer, uint64 bufferSize, char const* path, char* errorBuffer, uint64 errorBufferSize) = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult
    rawLoadDataFile(char* buffer, uint64 bufferSize, char const* path, char* errorBuffer, uint64 errorBufferSize) = 0;

    virtual ::Bedrock::PlatformBootstrap::SaveResult
    rawSaveDataFile(char const*, uint64, char const*, bool, char*, uint64) = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadFromCustomRoot(
        char*       buffer,
        uint64      bufferSize,
        char const* fullPath,
        char*       errorBuffer,
        uint64      errorBufferSize
    ) = 0;

    virtual ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    rawCreateDirectory(char const* path, char* errorBuffer, uint64 errorBufferSize) = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize() = 0;

    virtual std::string_view getAssetRoot() = 0;

    virtual std::string_view getSaveDataRoot() = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadAssetFile(char*, ulong, char const*, char*, ulong) = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadDataFile(char*, ulong, char const*, char*, ulong) = 0;

    virtual ::Bedrock::PlatformBootstrap::SaveResult rawSaveDataFile(char const*, ulong, char const*, bool, char*, ulong) = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadFromCustomRoot(char*, ulong, char const*, char*, ulong) = 0;

    virtual ::Bedrock::PlatformBootstrap::CreateDirectoryResult rawCreateDirectory(char const*, char*, ulong) = 0;
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult
    _rawLoadFile_cstdio(char*, ulong, std::string_view, char const*, char*, ulong);
#else // @header-generator platform
    MCNAPI ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    _rawCreateDirectory_std(char const* path, char* errorBuffer, uint64 errorBufferSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PlatformBootstrap::SaveResult
    _rawSaveFile_cstdio(char const*, ulong, std::string_view, char const*, char*, ulong);
#else // @header-generator platform
    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult _rawLoadFile_cstdio(
        char*              buffer,
        uint64             bufferSize,
        ::std::string_view root,
        char const*        path,
        char*              errorBuffer,
        uint64             errorBufferSize
    );

    MCNAPI ::Bedrock::PlatformBootstrap::SaveResult _rawSaveFile_cstdio(
        char const*        buffer,
        uint64             bufferSize,
        ::std::string_view root,
        char const*        path,
        char*              errorBuffer,
        uint64             errorBufferSize
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    _makeCreateDirectoryError(::Bedrock::PlatformBootstrap::CreateDirectoryResultCode, char*, ulong, char const*);
#else // @header-generator platform
    MCNAPI static ::Bedrock::PlatformBootstrap::CreateDirectoryResult _makeCreateDirectoryError(
        ::Bedrock::PlatformBootstrap::CreateDirectoryResultCode code,
        char*                                                   errorBuffer,
        uint64                                                  errorBufferSize,
        char const*                                             errorFormat,
        ...
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::PlatformBootstrap::LoadResult
    _makeLoadError(::Bedrock::PlatformBootstrap::LoadResultCode, char*, ulong, char const*);
#else // @header-generator platform
    MCNAPI static ::Bedrock::PlatformBootstrap::LoadResult _makeLoadError(
        ::Bedrock::PlatformBootstrap::LoadResultCode code,
        char*                                        errorBuffer,
        uint64                                       errorBufferSize,
        char const*                                  errorFormat,
        ...
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::PlatformBootstrap::SaveResult
    _makeSaveError(::Bedrock::PlatformBootstrap::SaveResultCode, char*, ulong, char const*);

    MCNAPI static ::Bedrock::PlatformBootstrap& getSharedInstance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::Bedrock::PlatformBootstrap::SaveResult _makeSaveError(
        ::Bedrock::PlatformBootstrap::SaveResultCode code,
        char*                                        errorBuffer,
        uint64                                       errorBufferSize,
        char const*                                  errorFormat,
        ...
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
