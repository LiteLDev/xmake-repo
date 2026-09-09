#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class PlatformBootstrap {
public:
    // PlatformBootstrap inner types declare
    // clang-format off
    struct LoadResult;
    struct SaveResult;
    struct CreateDirectoryResult;
    // clang-format on

    // PlatformBootstrap inner types define
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

    enum class CreateDirectoryResultCode : int {
        Success = 0,
        Failure = 1,
    };

    struct LoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                                        mBytesRead;
        ::ll::TypedStorage<4, 4, ::Bedrock::PlatformBootstrap::LoadResultCode> mResult;
        // NOLINTEND
    };

    struct SaveResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                                        mBytesWritten;
        ::ll::TypedStorage<4, 4, ::Bedrock::PlatformBootstrap::SaveResultCode> mResult;
        // NOLINTEND
    };

    struct CreateDirectoryResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Bedrock::PlatformBootstrap::CreateDirectoryResultCode> mResult;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlatformBootstrap();

    virtual void initialize() = 0;

    virtual std::string_view getAssetRoot() = 0;

    virtual std::string_view getSaveDataRoot() = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadAssetFile(char*, ulong, char const*, char*, ulong) = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadDataFile(char*, ulong, char const*, char*, ulong) = 0;

    virtual ::Bedrock::PlatformBootstrap::SaveResult rawSaveDataFile(char const*, ulong, char const*, bool, char*, ulong) = 0;

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadFromCustomRoot(char*, ulong, char const*, char*, ulong) = 0;

    virtual ::Bedrock::PlatformBootstrap::CreateDirectoryResult rawCreateDirectory(char const*, char*, ulong) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult
    _rawLoadFile_cstdio(char*, ulong, std::string_view, char const*, char*, ulong);

    MCNAPI ::Bedrock::PlatformBootstrap::SaveResult
    _rawSaveFile_cstdio(char const*, ulong, std::string_view, char const*, char*, ulong);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    _makeCreateDirectoryError(::Bedrock::PlatformBootstrap::CreateDirectoryResultCode, char*, ulong, char const*);

    MCNAPI static ::Bedrock::PlatformBootstrap::LoadResult
    _makeLoadError(::Bedrock::PlatformBootstrap::LoadResultCode, char*, ulong, char const*);

    MCNAPI static ::Bedrock::PlatformBootstrap::SaveResult
    _makeSaveError(::Bedrock::PlatformBootstrap::SaveResultCode, char*, ulong, char const*);

    MCNAPI static ::Bedrock::PlatformBootstrap& getSharedInstance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
