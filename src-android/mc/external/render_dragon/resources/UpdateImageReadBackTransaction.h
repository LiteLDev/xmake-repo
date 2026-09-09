#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace dragon {

struct UpdateImageReadBackTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mSourceTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateImageReadBackTransaction& operator=(UpdateImageReadBackTransaction const&);
    UpdateImageReadBackTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UpdateImageReadBackTransaction(::mce::ServerResourcePointer<dragon::ResolvedTextureResource>&&);

    MCNAPI std::optional<dragon::ImageDescription>
    apply(::mce::ResourcePointer<dragon::ResolvedImageResource> const&, ::dragon::DragonImageResourceServiceContext&);

    MCNAPI ~UpdateImageReadBackTransaction();
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

} // namespace dragon
