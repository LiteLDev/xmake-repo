#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace dragon::texturestreaming {

struct PendingAddOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::ResolvedTextureResource*> mHandle;
    ::ll::TypedStorage<8, 8, ulong>                              mKey;
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription>      mTextureDesc;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>                mMipLevels;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingAddOperation& operator=(PendingAddOperation const&);
    PendingAddOperation(PendingAddOperation const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PendingAddOperation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::texturestreaming
