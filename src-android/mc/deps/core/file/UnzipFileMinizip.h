#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFile.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/UnzipResult.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ZlibFileAccessWrapper;
namespace Core { class PathView; }
namespace Core { class UnzipInternals; }
// clang-format on

namespace Core {

class UnzipFileMinizip : public ::Core::UnzipFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ZlibFileAccessWrapper>> mZipFileSystemWrapper;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::UnzipInternals>>  mZipFile;
    // NOLINTEND

public:
    // prevent constructor by default
    UnzipFileMinizip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnzipFileMinizip();

    virtual ::Core::ZipUtils::UnzipResult locateFile(char const*, int);

    virtual ::Core::ZipUtils::UnzipResult goToFirstFile();

    virtual ::Core::ZipUtils::UnzipResult goToNextFile();

    virtual std::string getCurrentFileName() const;

    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading();

    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile();

    virtual void readCurrentFileContentsIntoMemory(std::string&);

    virtual void readCurrentFileContents(ulong, std::function<void(int, const void*)>);

    virtual ulong getTotalFilesInZip();

    virtual ulong getCurrentFileUncompressedSize();

    virtual bool _isGood() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UnzipFileMinizip(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, ::Core::PathView);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, ::Core::PathView);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::ZipUtils::UnzipResult $locateFile(char const*, int);

    MCNAPI ::Core::ZipUtils::UnzipResult $goToFirstFile();

    MCNAPI ::Core::ZipUtils::UnzipResult $goToNextFile();

    MCNAPI std::string $getCurrentFileName() const;

    MCNAPI ::Core::ZipUtils::UnzipResult $openCurrentFileForReading();

    MCNAPI ::Core::ZipUtils::UnzipResult $closeCurrentFile();

    MCNAPI void $readCurrentFileContentsIntoMemory(std::string&);

    MCNAPI void $readCurrentFileContents(ulong, std::function<void(int, const void*)>);

    MCNAPI ulong $getTotalFilesInZip();

    MCNAPI ulong $getCurrentFileUncompressedSize();

    MCNAPI bool $_isGood() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
