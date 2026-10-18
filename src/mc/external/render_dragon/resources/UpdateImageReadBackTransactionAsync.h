#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedImageResource; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct DragonImageResourceServiceContext; }
namespace dragon { struct ImageDescription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct UpdateImageReadBackTransactionAsync {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mSourceTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateImageReadBackTransactionAsync& operator=(UpdateImageReadBackTransactionAsync const&);
    UpdateImageReadBackTransactionAsync();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UpdateImageReadBackTransactionAsync(
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource>&&
    );

    MCNAPI std::optional<dragon::ImageDescription>
    apply(::mce::ResourcePointer<dragon::ResolvedImageResource> const&, ::dragon::DragonImageResourceServiceContext&);

    MCNAPI ~UpdateImageReadBackTransactionAsync();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::ServerResourcePointer<dragon::ResolvedTextureResource>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct UpdateImageReadBackTransactionAsync {};
#endif // @header-generator platform

} // namespace dragon
