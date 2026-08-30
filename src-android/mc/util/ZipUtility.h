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
    // clang-format off
    virtual ~ZipUtility();

    virtual ::Bedrock::Result<void, std::error_code> zip(std::vector<Core::PathBuffer<std::string>> const&, ::Core::PathView, ::Core::ZipUtils::ZipProgress&, bool, std::function<std::string (Core::PathView)>, ::Core::ZipUtils::ZipSettings const&) const;

    virtual ::Bedrock::Result<void, std::error_code> zip(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::ZipProgress&, bool, ::Core::ZipUtils::ZipSettings const&) const;

    virtual ::Bedrock::Result<void, std::error_code> zipFromZip(::Core::PathView, ::Core::PathView, ::Core::PathView, ::Core::ZipUtils::ZipProgress&, bool, ::Core::ZipUtils::ZipSettings const&) const;

    virtual ::Bedrock::Result<void, std::error_code> unzipInTransaction(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::ZipProgress&, bool, ::Core::ZipUtils::UnzipSettings const&) const;

    virtual ::Bedrock::Result<void, std::error_code> unzipToFlatFile(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::ZipProgress&, ::Core::FileBufferingMode, ::Core::ZipUtils::UnzipSettings const&) const;

    virtual bool getFilenames(::Core::Path const&, std::vector<Core::PathBuffer<std::string>>&, ::Core::ZipUtils::UnzipSettings const&) const;

    virtual bool exists(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::UnzipSettings const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void, std::error_code> $zip(
        std::vector<Core::PathBuffer<std::string>> const&,
        ::Core::PathView,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        std::function<std::string(Core::PathView)>,
        ::Core::ZipUtils::ZipSettings const&
    ) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $zip(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::Core::ZipUtils::ZipSettings const&
    ) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $zipFromZip(
        ::Core::PathView,
        ::Core::PathView,
        ::Core::PathView,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::Core::ZipUtils::ZipSettings const&
    ) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $unzipInTransaction(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        bool,
        ::Core::ZipUtils::UnzipSettings const&
    ) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $unzipToFlatFile(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Core::ZipUtils::ZipProgress&,
        ::Core::FileBufferingMode,
        ::Core::ZipUtils::UnzipSettings const&
    ) const;

    MCNAPI bool $getFilenames(
        ::Core::Path const&,
        std::vector<Core::PathBuffer<std::string>>&,
        ::Core::ZipUtils::UnzipSettings const&
    ) const;

    MCNAPI bool $exists(::Core::Path const&, ::Core::Path const&, ::Core::ZipUtils::UnzipSettings const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::ZipUtils
