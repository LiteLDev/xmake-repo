#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFileLibrary.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/UnzipResult.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class PathView; }
// clang-format on

namespace Core {

class UnzipFile {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnzipFile() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult locateFile(char const*, int) = 0;
#else // @header-generator platform
    virtual ::Core::ZipUtils::UnzipResult locateFile(char const* fileName, int caseSensitivity) = 0;
#endif // @header-generator platform

    virtual ::Core::ZipUtils::UnzipResult goToFirstFile() = 0;

    virtual ::Core::ZipUtils::UnzipResult goToNextFile() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getCurrentFileName() const = 0;
#else // @header-generator platform
    virtual ::std::string getCurrentFileName() const = 0;
#endif // @header-generator platform

    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading() = 0;

    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readCurrentFileContentsIntoMemory(std::string&) = 0;
#else // @header-generator platform
    virtual void readCurrentFileContentsIntoMemory(::std::string& str) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readCurrentFileContents(ulong, std::function<void(int, const void*)>) = 0;
#else // @header-generator platform
    virtual void readCurrentFileContents(uint64 bufferSize, ::std::function<void(int, void const*)> onReadCallback) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTotalFilesInZip() = 0;
#else // @header-generator platform
    virtual uint64 getTotalFilesInZip() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getCurrentFileUncompressedSize() = 0;
#else // @header-generator platform
    virtual uint64 getCurrentFileUncompressedSize() = 0;
#endif // @header-generator platform

    virtual bool _isGood() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Core::UnzipFile>
        create(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, ::Core::PathView, ::Core::UnzipFileLibrary);
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::Core::UnzipFile> create(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess,
        ::Core::PathView                             zipPath,
        ::Core::UnzipFileLibrary                     library
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
