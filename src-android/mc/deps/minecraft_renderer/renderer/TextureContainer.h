#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/AllowDroppingMips.h"
#include "mc/deps/renderer/hal/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
// clang-format on

namespace mce {

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

} // namespace mce
