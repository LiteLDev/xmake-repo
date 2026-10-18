#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct PendingAddOperation {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
