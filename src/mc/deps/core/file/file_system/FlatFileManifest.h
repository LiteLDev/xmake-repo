#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FlatFileManifestInfo.h"
#include "mc/platform/Result.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
#else // @header-generator platform
namespace Core { class FlatFileManifestInfo; }
#endif // @header-generator platform
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FlatFileManifest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>>  mManifestEntriesMap;
    ::ll::TypedStorage<8, 24, std::vector<Core::FlatFileManifestInfo>> mManifestInfoVector;
    ::ll::TypedStorage<8, 8, ulong>                                    mEntriesCount;
    ::ll::TypedStorage<8, 8, ulong>                                    mVersion;
    ::ll::UntypedStorage<8, 24>                                        mManifestPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk15f051;
    ::ll::UntypedStorage<8, 24> mUnk4b8622;
    ::ll::UntypedStorage<8, 8>  mUnk77e960;
    ::ll::UntypedStorage<8, 8>  mUnk2f7b1d;
    ::ll::UntypedStorage<8, 32> mUnkcac0b2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FlatFileManifest& operator=(FlatFileManifest const&);
    FlatFileManifest(FlatFileManifest const&);
    FlatFileManifest();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _clear();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createFromVector(::Core::PathView, std::vector<Core::FlatFileManifestInfo> const&, ulong, bool);
#else // @header-generator platform
    MCNAPI void _createFromVector(
        ::Core::PathView                                   manifestPath,
        ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector,
        uint64                                             version,
        bool                                               validatePaths
    );

    MCNAPI ::Core::FlatFileManifestInfo const*
    findFileOrDirectoryEntry(::Core::PathView filePath, bool skipDeleted) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
