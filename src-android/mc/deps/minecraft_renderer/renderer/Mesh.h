#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"
#include "mc/deps/minecraft_renderer/renderer/MeshDebugString.h"
#include "mc/deps/minecraft_renderer/resources/IndexBufferContainer.h"
#include "mc/deps/renderer/VertexField.h"
#include "mc/deps/renderer/VertexLayout.h"
#include "mc/deps/renderer/hal/interface/Buffer.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"

// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { class MeshContext; }
namespace mce { class Texture; }
namespace mce { class TexturePtr; }
namespace mce { class VertexFormat; }
namespace mce { struct BufferResourceService; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
// clang-format on

namespace mce {

class Mesh : public ::mce::IndexBufferContainer {
public:
    // Mesh inner types define
    using TextureList = ::brstd::
        static_vector<std::variant<std::monostate, mce::TexturePtr, mce::ClientTexture, mce::ServerTexture>, 8>;

    using Index = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::variant<std::monostate, ulong, glm::vec<3, int, (glm::qualifier)0>>> mCacheKey;
    ::ll::TypedStorage<1, 1, bool>                                                                      mTemporary;
    ::ll::TypedStorage<1, 1, ::mce::PrimitiveMode>                                                      mPrimitiveMode;
    ::ll::TypedStorage<1, 1, ::mce::MeshDebugString>                                                    mDebugName;
    ::ll::TypedStorage<8, 16, std::weak_ptr<mce::BufferResourceService>> mBufferResourceService;
    ::ll::TypedStorage<8, 336, ::mce::MeshData>                          mMeshData;
    ::ll::UntypedStorage<8, 24>                                          mVertexBuffer;
    ::ll::UntypedStorage<8, 24>                                          mAttributeBuffer;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                        mVertexCount;
    ::ll::TypedStorage<2, 110, ::mce::VertexLayout>                      mVertexLayout;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>                        mRawData;
    // NOLINTEND

public:
    // prevent constructor by default
    Mesh& operator=(Mesh const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Mesh();

    MCNAPI Mesh(::mce::Mesh&&);

    MCNAPI Mesh(::mce::Mesh const&);

    MCNAPI Mesh(std::shared_ptr<mce::BufferResourceService>&, ::mce::MeshData&&, bool const, std::string_view const);

    MCNAPI bool _loadBlankData(::mce::BufferResourceService&, std::string_view const) const;

    MCNAPI bool _loadRawData(::mce::BufferResourceService&, std::string_view const) const;

    MCNAPI void _move(::mce::Mesh&);

    MCNAPI void _renderMesh(
        ::mce::MeshContext&,
        ::mce::MaterialPtr const&,
        ::brstd::static_vector<
            std::variant<std::monostate, mce::TexturePtr, mce::ClientTexture, mce::ServerTexture>,
            8> const,
        uint,
        uint,
        ::OffscreenCaptureDescription const&,
        ::mce::IndexBufferContainer const*,
        std::optional<dragon::RenderMetadata>
    ) const;

    MCNAPI bool areBuffersValid() const;

    MCNAPI void generateHALData(::mce::VertexLayout const*, bool) const;

    MCNAPI ulong getMeshVertexCount() const;

    MCNAPI ::gsl::span<const uchar> getRawData() const;

    MCNAPI ::mce::VertexFormat const& getVertexFormat(uint) const;

    MCNAPI ::mce::VertexLayout const& getVertexLayout() const;

    MCNAPI bool hasField(::mce::VertexField const) const;

    MCNAPI bool isTemporary() const;

    MCNAPI bool isValid() const;

    MCNAPI void load(::mce::BufferResourceService&);

    MCNAPI explicit operator Mesh() const;

    MCNAPI ::mce::Mesh& operator=(::mce::Mesh&&);

    MCNAPI void prepareAsEmptyData(::mce::VertexLayout const&) const;

    MCNAPI void prepareRenderData(::mce::VertexLayout const&) const;

    MCNAPI void releaseVertexBuffer();

    MCNAPI void renderMesh(
        ::mce::MeshContext&,
        ::mce::MaterialPtr const&,
        uint,
        uint,
        ::OffscreenCaptureDescription const&,
        ::mce::IndexBufferContainer const*
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&,
        ::mce::MaterialPtr const&,
        std::variant<std::monostate, mce::TexturePtr, mce::ClientTexture, mce::ServerTexture> const&,
        uint,
        uint,
        ::OffscreenCaptureDescription const&,
        ::mce::IndexBufferContainer const*
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&,
        ::mce::MaterialPtr const&,
        std::initializer_list<std::reference_wrapper<const mce::TexturePtr>> const,
        uint,
        uint,
        ::OffscreenCaptureDescription const&,
        ::mce::IndexBufferContainer const*
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&,
        ::mce::MaterialPtr const&,
        ::gsl::span<const mce::TexturePtr> const,
        uint,
        uint,
        ::OffscreenCaptureDescription const&,
        ::mce::IndexBufferContainer const*
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&,
        ::mce::MaterialPtr const&,
        ::gsl::span<const mce::ClientTexture*> const,
        uint,
        uint,
        ::OffscreenCaptureDescription const&,
        ::mce::IndexBufferContainer const*
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&,
        ::mce::MaterialPtr const&,
        ::gsl::span<const mce::ServerTexture*> const,
        uint,
        uint,
        ::OffscreenCaptureDescription const&,
        ::mce::IndexBufferContainer const*
    ) const;

    MCNAPI void renderMesh(
        ::mce::MeshContext&,
        ::dragon::RenderMetadata const&,
        ::mce::MaterialPtr const&,
        std::variant<std::monostate, mce::TexturePtr, mce::ClientTexture, mce::ServerTexture> const&,
        uint,
        uint,
        ::mce::IndexBufferContainer const*
    ) const;

    MCNAPI void reset();

    MCNAPI ~Mesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::Mesh&&);

    MCNAPI void* $ctor(::mce::Mesh const&);

    MCNAPI void*
    $ctor(std::shared_ptr<mce::BufferResourceService>&, ::mce::MeshData&&, bool const, std::string_view const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
