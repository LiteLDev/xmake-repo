#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ImageDescription.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct ImageDescription; }
namespace dragon { class ResolvedImageResource; }
namespace dragon { struct DragonImageResourceServiceContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateImageReadBackTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, std::optional<dragon::ImageDescription>> mImageDescription;
    ::ll::UntypedStorage<8, 32>                                        mSourceTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateImageReadBackTransaction& operator=(CreateImageReadBackTransaction const&);
    CreateImageReadBackTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CreateImageReadBackTransaction(
        std::optional<mce::ServerResourcePointer<dragon::ResolvedTextureResource>>&&
    );

    MCNAPI CreateImageReadBackTransaction(
        ::cg::ImageDescription const&,
        std::string const&,
        std::optional<mce::ServerResourcePointer<dragon::ResolvedTextureResource>>&&
    );

    MCNAPI std::optional<dragon::ImageDescription>
    apply(::mce::ResourcePointer<dragon::ResolvedImageResource> const&, ::dragon::DragonImageResourceServiceContext&);

    MCNAPI ~CreateImageReadBackTransaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::optional<mce::ServerResourcePointer<dragon::ResolvedTextureResource>>&&);

    MCNAPI void* $ctor(
        ::cg::ImageDescription const&,
        std::string const&,
        std::optional<mce::ServerResourcePointer<dragon::ResolvedTextureResource>>&&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct CreateImageReadBackTransaction {};
#endif // @header-generator platform

} // namespace dragon
