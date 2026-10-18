#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFile.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/UnzipResult.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ZlibFileAccessWrapper;
namespace Core { class PathView; }
namespace Core { class UnzipInternals; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class UnzipFileMinizip : public ::Core::UnzipFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ZlibFileAccessWrapper>> mZipFileSystemWrapper;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::UnzipInternals>>  mZipFile;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk9c298d;
    ::ll::UntypedStorage<8, 8> mUnkb4dede;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    UnzipFileMinizip& operator=(UnzipFileMinizip const&);
    UnzipFileMinizip(UnzipFileMinizip const&);
#endif // @header-generator platform
    UnzipFileMinizip();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~UnzipFileMinizip();
#else // @header-generator platform
    virtual ~UnzipFileMinizip() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult locateFile(char const*, int);
#else // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult locateFile(char const* fileName, int caseSensitivity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult goToFirstFile();
#else // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult goToFirstFile() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult goToNextFile();
#else // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult goToNextFile() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getCurrentFileName() const;
#else // @header-generator platform
    virtual ::std::string getCurrentFileName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading();
#else // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile();
#else // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readCurrentFileContentsIntoMemory(std::string&);
#else // @header-generator platform
    virtual void readCurrentFileContentsIntoMemory(::std::string& str) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readCurrentFileContents(ulong, std::function<void(int, const void*)>);
#else // @header-generator platform
    virtual void
    readCurrentFileContents(uint64 bufferSize, ::std::function<void(int, void const*)> onReadCallback) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTotalFilesInZip();
#else // @header-generator platform
    virtual uint64 getTotalFilesInZip() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getCurrentFileUncompressedSize();
#else // @header-generator platform
    virtual uint64 getCurrentFileUncompressedSize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual bool _isGood() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::ZipUtils::UnzipResult $locateFile(char const*, int);
#else // @header-generator platform
    MCNAPI ::Core::ZipUtils::UnzipResult $locateFile(char const* fileName, int caseSensitivity);
#endif // @header-generator platform

    MCNAPI ::Core::ZipUtils::UnzipResult $goToFirstFile();

    MCNAPI ::Core::ZipUtils::UnzipResult $goToNextFile();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getCurrentFileName() const;
#else // @header-generator platform
    MCNAPI ::std::string $getCurrentFileName() const;
#endif // @header-generator platform

    MCNAPI ::Core::ZipUtils::UnzipResult $openCurrentFileForReading();

    MCNAPI ::Core::ZipUtils::UnzipResult $closeCurrentFile();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readCurrentFileContentsIntoMemory(std::string&);
#else // @header-generator platform
    MCNAPI void $readCurrentFileContentsIntoMemory(::std::string& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readCurrentFileContents(ulong, std::function<void(int, const void*)>);
#else // @header-generator platform
    MCNAPI void $readCurrentFileContents(uint64 bufferSize, ::std::function<void(int, void const*)> onReadCallback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getTotalFilesInZip();
#else // @header-generator platform
    MCNAPI uint64 $getTotalFilesInZip();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getCurrentFileUncompressedSize();
#else // @header-generator platform
    MCNAPI uint64 $getCurrentFileUncompressedSize();
#endif // @header-generator platform

    MCNAPI bool $_isGood() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
