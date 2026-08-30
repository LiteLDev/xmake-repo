#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/platform/brstd/promise.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace dragon { class ResolvedImageResource; }
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace dragon::atlas {

struct TextureRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void const*> mKey;
    ::ll::UntypedStorage<8, 24>           mCopyDestination;
    ::ll::UntypedStorage<8, 24>           mClientImage;
    ::ll::UntypedStorage<8, 16>           mBuffer;
    // NOLINTEND
};

} // namespace dragon::atlas
