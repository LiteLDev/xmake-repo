#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PackWriteStrategy {
public:
    // PackWriteStrategy inner types define
    enum class FileName : uchar {
        Manifest     = 0,
        ContentsJSON = 1,
        TexturesList = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackWriteStrategy() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeAsset(::PackWriteStrategy::FileName, std::string const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void eduImportModifyManifest(std::string const&);
#else // @header-generator platform
    virtual void writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Path getPath(::PackWriteStrategy::FileName);
#else // @header-generator platform
    MCNAPI static ::Core::Path getPath(::PackWriteStrategy::FileName path);
#endif // @header-generator platform
    // NOLINTEND
};
