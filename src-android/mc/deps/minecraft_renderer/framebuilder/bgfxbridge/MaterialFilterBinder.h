#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/RenderUITextureVisitor.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct TextureSamplerDescription; }
namespace dragon::frameobject::components { struct MaterialFilter; }
namespace dragon::materials { struct MaterialUniformName; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

class MaterialFilterBinder : public ::mce::framebuilder::bgfxbridge::RenderUITextureVisitor::ITextureBinder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::MaterialFilter&> mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialFilterBinder& operator=(MaterialFilterBinder const&);
    MaterialFilterBinder(MaterialFilterBinder const&);
    MaterialFilterBinder();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MaterialFilterBinder();

    virtual void setTexture(::dragon::materials::MaterialUniformName const&, ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&, ::dragon::TextureSamplerDescription const&);

    virtual void setUniform(::dragon::materials::MaterialUniformName const&, ::gsl::span<glm::vec<4, float, (glm::qualifier)0>>);

    virtual bool isValid(::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setTexture(
        ::dragon::materials::MaterialUniformName const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::dragon::TextureSamplerDescription const&
    );

    MCNAPI void
    $setUniform(::dragon::materials::MaterialUniformName const&, ::gsl::span<glm::vec<4, float, (glm::qualifier)0>>);

    MCNAPI bool $isValid(::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
