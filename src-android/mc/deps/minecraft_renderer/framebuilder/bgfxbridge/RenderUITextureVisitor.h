#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct TextureSamplerDescription; }
namespace dragon::atlas { class IAtlasRenderOperations; }
namespace dragon::atlas { struct AtlasTileHandle; }
namespace dragon::frameobject::components { struct MaterialFilter; }
namespace dragon::materials { struct MaterialUniformName; }
namespace mce { struct ClientTexture; }
namespace mce::framebuilder { struct GamefaceBatchDrawMesh; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct RenderUITextureVisitor {
public:
    // RenderUITextureVisitor inner types declare
    // clang-format off
    struct Result;
    class ITextureBinder;
    // clang-format on

    // RenderUITextureVisitor inner types define
    struct Result {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                                        mTexture;
        ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mUVTransform;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Result();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class ITextureBinder {
    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~ITextureBinder();
    
        virtual void setTexture(::dragon::materials::MaterialUniformName const&, ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&, ::dragon::TextureSamplerDescription const&) = 0;
    
        virtual void setUniform(::dragon::materials::MaterialUniformName const&, ::gsl::span<glm::vec<4, float, (glm::qualifier)0>>) = 0;
    
        virtual bool isValid(::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&) const = 0;
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::atlas::IAtlasRenderOperations*> mRenderOperations;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _bindTextures(
        ::mce::framebuilder::GamefaceBatchDrawMesh const&,
        ::mce::framebuilder::bgfxbridge::RenderUITextureVisitor::ITextureBinder&,
        ulong
    );

    MCNAPI void bindTextures(
        ::mce::framebuilder::GamefaceBatchDrawMesh const&,
        ::dragon::frameobject::components::MaterialFilter&,
        ulong
    );

    MCNAPI ::mce::framebuilder::bgfxbridge::RenderUITextureVisitor::Result
    operator()(::mce::ClientResourcePointer<dragon::ResolvedTextureResource> const&) const;

    MCNAPI ::mce::framebuilder::bgfxbridge::RenderUITextureVisitor::Result
    operator()(::mce::ClientTexture const&) const;

    MCNAPI ::mce::framebuilder::bgfxbridge::RenderUITextureVisitor::Result operator()(std::monostate) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::glm::vec<4, float, (glm::qualifier)0>& IDENTITY();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
