#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FlatFileManifestInfo.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FlatFileManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>>  mManifestEntriesMap;
    ::ll::TypedStorage<8, 24, std::vector<Core::FlatFileManifestInfo>> mManifestInfoVector;
    ::ll::TypedStorage<8, 8, ulong>                                    mEntriesCount;
    ::ll::TypedStorage<8, 8, ulong>                                    mVersion;
    ::ll::UntypedStorage<8, 24>                                        mManifestPath;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _clear();

    MCNAPI void _createFromVector(::Core::PathView, std::vector<Core::FlatFileManifestInfo> const&, ulong, bool);
    // NOLINTEND
};

} // namespace Core
