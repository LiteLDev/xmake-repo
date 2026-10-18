#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFile.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/UniqueLock.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/UnzipResult.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IFileAccess;
struct zip;
struct zip_error;
struct zip_file;
namespace Core { class PathView; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class UnzipFileLibZip : public ::Core::UnzipFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>            mAccess;
    ::ll::TypedStorage<8, 8, ::zip*>       mArchive;
    ::ll::UntypedStorage<8, 16>            mErr;
    ::ll::TypedStorage<4, 40, std::mutex>  mMutex;
    ::ll::TypedStorage<8, 24, std::string> mCurrentFileNameCache;
    ::ll::TypedStorage<8, 8, long>         mCurrentFileIndex;
    ::ll::TypedStorage<8, 8, ::zip_file*>  mCurrentFile;
    ::ll::TypedStorage<8, 8, long>         mNumEntries;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkd963bc;
    ::ll::UntypedStorage<8, 8>  mUnkad17b4;
    ::ll::UntypedStorage<8, 16> mUnkb7af5d;
    ::ll::UntypedStorage<8, 80> mUnk32ee59;
    ::ll::UntypedStorage<8, 32> mUnk45f722;
    ::ll::UntypedStorage<8, 8>  mUnkd58109;
    ::ll::UntypedStorage<8, 8>  mUnk3631e8;
    ::ll::UntypedStorage<8, 8>  mUnkba5020;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    UnzipFileLibZip& operator=(UnzipFileLibZip const&);
    UnzipFileLibZip(UnzipFileLibZip const&);
#endif // @header-generator platform
    UnzipFileLibZip();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~UnzipFileLibZip();
#else // @header-generator platform
    virtual ~UnzipFileLibZip() /*override*/ = default;
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
    MCNAPI UnzipFileLibZip(::Bedrock::NonOwnerPointer<IFileAccess>, ::Core::PathView);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<IFileAccess>, ::Core::PathView);
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
