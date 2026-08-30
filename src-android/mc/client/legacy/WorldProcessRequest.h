#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/world/LegacyWorldInfo.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
struct ImportResult;
namespace Core { class Path; }
// clang-format on

namespace Legacy {

class WorldProcessRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mOutputPath;
    ::ll::UntypedStorage<8, 48>  mStatusCallback;
    ::ll::UntypedStorage<8, 880> mWorldInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldProcessRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldProcessRequest(
        ::LegacyWorldInfo const&,
        std::function<void(Legacy::ImportStatus, float, std::shared_ptr<ImportResult>)>,
        ::Core::Path const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::LegacyWorldInfo const&,
        std::function<void(Legacy::ImportStatus, float, std::shared_ptr<ImportResult>)>,
        ::Core::Path const&
    );
    // NOLINTEND
};

} // namespace Legacy
