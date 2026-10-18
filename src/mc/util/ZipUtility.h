#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"
#include "mc/util/IZipUtility.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {

class ZipUtility : public ::Core::ZipUtils::IZipUtility {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ZipUtility();
#else // @header-generator platform
    virtual ::Bedrock::Result<void>
    zip(::Core::Path const&                  inputPath,
        ::Core::Path const&                  zipOutputPath,
        ::Core::ZipUtils::ZipProgress&       progress,
        bool                                 useLowMemMode,
        ::Core::ZipUtils::ZipSettings const& zipSettings) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> zip(std::vector<Core::PathBuffer<std::string>> const&, ::Core::PathView, ::Core::ZipUtils::ZipProgress&, bool, std::function<std::string (Core::PathView)>, ::Core::ZipUtils::ZipSettings const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void>
    zip(::std::vector<::Core::PathBuffer<::std::string>> const& filesToZip,
        ::Core::PathView                                        zipOutputPath,
        ::Core::ZipUtils::ZipProgress&                          progress,
        bool                                                    useLowMemMode,
        ::std::function<::std::string(::Core::PathView)>        overrideNameCallback,
        ::Core::ZipUtils::ZipSettings const&                    zipSettings) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> zip(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::ZipProgress&, bool, ::Core::ZipUtils::ZipSettings const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> zipFromZip(
        ::Core::PathView                     zipInputPath,
        ::Core::PathView                     zipInputSubPath,
        ::Core::PathView                     zipOutputPath,
        ::Core::ZipUtils::ZipProgress&       progress,
        bool                                 useLowMemMode,
        ::Core::ZipUtils::ZipSettings const& zipSettings
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> zipFromZip(::Core::PathView, ::Core::PathView, ::Core::PathView, ::Core::ZipUtils::ZipProgress&, bool, ::Core::ZipUtils::ZipSettings const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> unzipInTransaction(
        ::Core::Path const&                    zipInputPath,
        ::Core::Path const&                    outputFolderPath,
        ::Core::ZipUtils::ZipProgress&         progress,
        bool                                   useLowMemMode,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> unzipInTransaction(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::ZipProgress&, bool, ::Core::ZipUtils::UnzipSettings const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> unzipToFlatFile(
        ::Core::Path const&                    zipInputPath,
        ::Core::Path const&                    outputFolderPath,
        ::Core::ZipUtils::ZipProgress&         progress,
        ::Core::FileBufferingMode              bufferMode,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> unzipToFlatFile(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::ZipProgress&, ::Core::FileBufferingMode, ::Core::ZipUtils::UnzipSettings const&) const;
#else // @header-generator platform
    virtual bool getFilenames(
        ::Core::Path const&                               zipPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& result,
        ::Core::ZipUtils::UnzipSettings const&            unzipSettings
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getFilenames(::Core::Path const&, std::vector<Core::PathBuffer<std::string>>&, ::Core::ZipUtils::UnzipSettings const&) const;

    virtual bool exists(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::UnzipSettings const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool exists(
        ::Core::Path const&                    zipPath,
        ::Core::Path const&                    filePath,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $zip(
        std::vector<Core::PathBuffer<std::string>> const&,
        ::Core::PathView,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        std::function<std::string(Core::PathView)>,
        ::Core::ZipUtils::ZipSettings const&
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $zip(
        ::Core::Path const&                  inputPath,
        ::Core::Path const&                  zipOutputPath,
        ::Core::ZipUtils::ZipProgress&       progress,
        bool                                 useLowMemMode,
        ::Core::ZipUtils::ZipSettings const& zipSettings
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $zip(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::Core::ZipUtils::ZipSettings const&
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $zip(
        ::std::vector<::Core::PathBuffer<::std::string>> const& filesToZip,
        ::Core::PathView                                        zipOutputPath,
        ::Core::ZipUtils::ZipProgress&                          progress,
        bool                                                    useLowMemMode,
        ::std::function<::std::string(::Core::PathView)>        overrideNameCallback,
        ::Core::ZipUtils::ZipSettings const&                    zipSettings
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $zipFromZip(
        ::Core::PathView,
        ::Core::PathView,
        ::Core::PathView,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::Core::ZipUtils::ZipSettings const&
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $zipFromZip(
        ::Core::PathView                     zipInputPath,
        ::Core::PathView                     zipInputSubPath,
        ::Core::PathView                     zipOutputPath,
        ::Core::ZipUtils::ZipProgress&       progress,
        bool                                 useLowMemMode,
        ::Core::ZipUtils::ZipSettings const& zipSettings
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $unzipInTransaction(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::Core::ZipUtils::UnzipSettings const&
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $unzipInTransaction(
        ::Core::Path const&                    zipInputPath,
        ::Core::Path const&                    outputFolderPath,
        ::Core::ZipUtils::ZipProgress&         progress,
        bool                                   useLowMemMode,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $unzipToFlatFile(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        ::Core::FileBufferingMode,
        ::Core::ZipUtils::UnzipSettings const&
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $unzipToFlatFile(
        ::Core::Path const&                    zipInputPath,
        ::Core::Path const&                    outputFolderPath,
        ::Core::ZipUtils::ZipProgress&         progress,
        ::Core::FileBufferingMode              bufferMode,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getFilenames(
        ::Core::Path const&,
        std::vector<Core::PathBuffer<std::string>>&,
        ::Core::ZipUtils::UnzipSettings const&
#else // @header-generator platform
    MCAPI bool $getFilenames(
        ::Core::Path const&                               zipPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& result,
        ::Core::ZipUtils::UnzipSettings const&            unzipSettings
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $exists(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::UnzipSettings const&) const;
#else // @header-generator platform
    MCAPI bool $exists(
        ::Core::Path const&                    zipPath,
        ::Core::Path const&                    filePath,
        ::Core::ZipUtils::UnzipSettings const& unzipSettings
    ) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::ZipUtils
