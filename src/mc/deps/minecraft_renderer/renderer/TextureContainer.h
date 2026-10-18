#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/AllowDroppingMips.h"
#include "mc/deps/renderer/hal/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/AllowDroppingMips.h"
#include "mc/deps/renderer/hal/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<cg::ImageResource>> mStorage;
    ::ll::TypedStorage<8, 80, ::mce::TextureDescription>          mDescription;
    ::ll::TypedStorage<1, 1, ::mce::AllowDroppingMips>            mAllowDroppingMips;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureContainer();

    MCNAPI TextureContainer(::mce::TextureContainer&&);

    MCNAPI TextureContainer(::cg::ImageBuffer&&, ::mce::AllowDroppingMips);

    MCNAPI TextureContainer(std::vector<cg::ImageBuffer>&&, ::mce::TextureDescription const&);

    MCNAPI TextureContainer(std::shared_ptr<cg::ImageResource>&&, ::mce::AllowDroppingMips);

    MCNAPI ::cg::ImageBuffer const& getImage(uint) const;

    MCNAPI ::mce::TextureDescription const& getTextureDescription() const;

    MCNAPI bool isValid() const;

    MCNAPI ::mce::TextureContainer& operator=(::cg::ImageBuffer&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::TextureContainer&&);

    MCNAPI void* $ctor(::cg::ImageBuffer&&, ::mce::AllowDroppingMips);

    MCNAPI void* $ctor(std::vector<cg::ImageBuffer>&&, ::mce::TextureDescription const&);

    MCNAPI void* $ctor(std::shared_ptr<cg::ImageResource>&&, ::mce::AllowDroppingMips);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cg::ImageResource>> mStorage;
    ::ll::TypedStorage<4, 64, ::mce::TextureDescription>              mDescription;
    ::ll::TypedStorage<1, 1, ::mce::AllowDroppingMips>                mAllowDroppingMips;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureContainer(::cg::ImageBuffer&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCAPI TextureContainer(::std::shared_ptr<::cg::ImageResource>&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCAPI TextureContainer(::std::vector<::cg::ImageBuffer>&& rhs, ::mce::TextureDescription const& textureDescription);

    MCAPI ::mce::TextureContainer& operator=(::cg::ImageBuffer&& rhs);

    MCAPI ~TextureContainer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cg::ImageBuffer&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCAPI void* $ctor(::std::shared_ptr<::cg::ImageResource>&& rhs, ::mce::AllowDroppingMips allowDroppingMips);

    MCAPI void* $ctor(::std::vector<::cg::ImageBuffer>&& rhs, ::mce::TextureDescription const& textureDescription);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class TextureContainer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
