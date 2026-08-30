#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/debug/FrameDebugData.h"
#include "mc/client/gui/oreui/interface/IRenderingBackend.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceBatchDraw.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceBatchDrawMesh.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefacePipelineState.h"
#include "mc/external/gameface/renoir/CBType.h"
#include "mc/external/gameface/renoir/ConstantBufferObject.h"
#include "mc/external/gameface/renoir/IndexBufferObject.h"
#include "mc/external/gameface/renoir/IndexBufferType.h"
#include "mc/external/gameface/renoir/PipelineStateObject.h"
#include "mc/external/gameface/renoir/RendererBackend.h"
#include "mc/external/gameface/renoir/ResourcesCommandsStage.h"
#include "mc/external/gameface/renoir/VertexBufferObject.h"
#include "mc/external/gameface/renoir/VertexType.h"
#include "mc/external/render_dragon/mesh/VertexFormat.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IRenderingBackendTextureStorage; }
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { struct FrameDebugData; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace renoir { struct DepthStencilTexture; }
namespace renoir { struct DepthStencilTextureObject; }
namespace renoir { struct PipelineState; }
namespace renoir { struct RendererCaps; }
namespace renoir { struct Sampler2D; }
namespace renoir { struct Sampler2DObject; }
namespace renoir { struct SetIndexBufferCmd; }
namespace renoir { struct SetMultipleVertexBuffersCmd; }
namespace renoir { struct SetPSConstantBuffersCmd; }
namespace renoir { struct SetPSSamplersCmd; }
namespace renoir { struct SetPSTexturesCmd; }
namespace renoir { struct SetPipelineStateCmd; }
namespace renoir { struct SetRenderTargetCmd; }
namespace renoir { struct SetScissorRectCmd; }
namespace renoir { struct SetStencilReferenceCmd; }
namespace renoir { struct SetVSConstantBuffersCmd; }
namespace renoir { struct SetVertexBufferCmd; }
namespace renoir { struct SetViewportCmd; }
namespace renoir { struct Texture2D; }
namespace renoir { struct Texture2DObject; }
namespace renoir { struct TextureObject; }
namespace renoir { struct UpdateBox; }
namespace renoir { struct float2; }
// clang-format on

namespace OreUI {

class RenderDragonRenderingBackend : public ::OreUI::IRenderingBackend {
public:
    // RenderDragonRenderingBackend inner types declare
    // clang-format off
    struct VertexBuffer;
    struct IndexBuffer;
    struct ConstantBuffer;
    struct GetGamefaceStride;
    // clang-format on

    // RenderDragonRenderingBackend inner types define
    struct VertexBuffer {
    public:
        // VertexBuffer inner types declare
        // clang-format off
        struct DragonVertexBuffer;
        struct DragonInstanceData;
        // clang-format on

        // VertexBuffer inner types define
        struct DragonVertexBuffer {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 136, ::dragon::mesh::VertexFormat> dragonFormat;
            ::ll::UntypedStorage<8, 24>                              dragonVertexBuffer;
            // NOLINTEND

        public:
            // prevent constructor by default
            DragonVertexBuffer& operator=(DragonVertexBuffer const&);
        };

        struct DragonInstanceData {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 8, ::gsl::not_null<void (*)(const std::vector<uchar>&, std::vector<uchar>&, ulong)>> mGamefaceToDragon;
            ::ll::TypedStorage<8, 24, std::vector<uchar>> mDragonInstanceBuffer;
            ::ll::TypedStorage<1, 1, uchar> mGamefaceStride;
            // clang-format on
            // NOLINTEND

        public:
            // prevent constructor by default
            DragonInstanceData& operator=(DragonInstanceData const&);
            DragonInstanceData();
        };

        using DragonStorage = std::variant<
            OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonVertexBuffer,
            OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonInstanceData>;

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, uint> count;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> data;
        ::ll::TypedStorage<8, 168, std::variant<OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonVertexBuffer, OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonInstanceData>> mDragonStorage;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        VertexBuffer& operator=(VertexBuffer const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~VertexBuffer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct IndexBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                count;
        ::ll::TypedStorage<1, 1, uchar>               mStride;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> data;
        ::ll::UntypedStorage<8, 24>                   dragonIndexBuffer;
        // NOLINTEND

    public:
        // prevent constructor by default
        IndexBuffer& operator=(IndexBuffer const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~IndexBuffer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ConstantBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::renoir::CBType>                                type;
        ::ll::TypedStorage<4, 2048, ::glm::vec<4, float, (glm::qualifier)0>[128]> data;
        ::ll::TypedStorage<8, 8, ulong>                                           size;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstantBuffer& operator=(ConstantBuffer const&);
    };

    struct GetGamefaceStride {};

    using PipelineStateData = ::mce::framebuilder::GamefacePipelineState;

    using BatchDraw = ::mce::framebuilder::GamefaceBatchDraw;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::OreUI::FrameDebugData&> mFrameDebugData;
    ::ll::UntypedStorage<8, 40> mPipelineStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<renoir::VertexBufferObject, OreUI::RenderDragonRenderingBackend::VertexBuffer>> mVertexBuffers;
    ::ll::TypedStorage<4, 8, std::array<renoir::VertexBufferObject, 2>> mCurrentVertexBuffers;
    ::ll::TypedStorage<4, 4, int> mNumVertexBuffersActive;
    ::ll::TypedStorage<8, 40, std::unordered_map<renoir::IndexBufferObject, OreUI::RenderDragonRenderingBackend::IndexBuffer>> mIndexBuffers;
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferObject> mCurrentIndexBuffer;
    ::ll::UntypedStorage<8, 40> mConstantBuffers;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Gameface::IRenderingBackendTextureStorage>>> mTextures;
    ::ll::UntypedStorage<8, 144> mCurrentPipelineState;
    ::ll::UntypedStorage<8, 424> mMesh;
    ::ll::TypedStorage<8, 24, ::mce::framebuilder::GamefaceBatchDraw> mBatch;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDragonRenderingBackend& operator=(RenderDragonRenderingBackend const&);
    RenderDragonRenderingBackend(RenderDragonRenderingBackend const&);
    RenderDragonRenderingBackend();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RenderDragonRenderingBackend();

    virtual void FillCaps(::renoir::RendererCaps&);

    virtual void BeginCommands();

    virtual void WrapUserRenderTarget(void*, ::renoir::Texture2D const&, ::renoir::Texture2DObject, void*, ::renoir::DepthStencilTexture const&, ::renoir::DepthStencilTextureObject);

    virtual void WrapUserTexture(void*, ::renoir::Texture2D const&, ::renoir::Texture2DObject);

    virtual bool CreatePipelineState(::renoir::PipelineState const&, ::renoir::PipelineStateObject);

    virtual void DestroyPipelineState(::renoir::PipelineStateObject);

    virtual bool CreateVertexBuffer(::renoir::VertexType, uint, ::renoir::VertexBufferObject, bool);

    virtual void DestroyVertexBuffer(::renoir::VertexBufferObject);

    virtual void* MapVertexBuffer(::renoir::VertexBufferObject);

    virtual void UnmapVertexBuffer(::renoir::VertexBufferObject, uint);

    virtual bool CreateIndexBuffer(::renoir::IndexBufferType, uint, ::renoir::IndexBufferObject, bool);

    virtual void DestroyIndexBuffer(::renoir::IndexBufferObject);

    virtual void* MapIndexBuffer(::renoir::IndexBufferObject);

    virtual void UnmapIndexBuffer(::renoir::IndexBufferObject, uint);

    virtual bool CreateConstantBuffer(::renoir::CBType, ::renoir::ConstantBufferObject, uint);

    virtual void DestroyConstantBuffer(::renoir::ConstantBufferObject);

    virtual bool CreateTexture(::renoir::Texture2DObject, ::renoir::Texture2D const&, void const*, uint);

    virtual void DestroyTexture(::renoir::Texture2DObject);

    virtual void UpdateTexture(::renoir::Texture2DObject, ::renoir::Texture2D const&, ::renoir::UpdateBox*, void const**, uint, bool);

    virtual bool CreateDepthStencilTexture(::renoir::DepthStencilTextureObject, ::renoir::DepthStencilTexture const&);

    virtual void DestroyDepthStencilTexture(::renoir::DepthStencilTextureObject);

    virtual void CopyTextureToTexture(::renoir::Texture2DObject, ::renoir::Texture2DObject, ::renoir::UpdateBox, ::renoir::float2);

    virtual bool CreateSampler2D(::renoir::Sampler2DObject, ::renoir::Sampler2D const&);

    virtual void DestroySampler2D(::renoir::Sampler2DObject);

    virtual void ExecuteRendering(::renoir::RendererBackend::BackendCommandsBuffer const*, uint, ::renoir::RendererBackend::ConstantBufferUpdateData const*, uint);

    virtual void ExecuteResourceCommands(::renoir::RendererBackend::BackendResourceCommandsBuffer const*, uint, ::renoir::ResourcesCommandsStage);

    virtual void EndCommands();

    virtual bool ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*);

    virtual void initializeStaticResources(::Bedrock::NonOwnerPointer<mce::ShaderGroup> const&);

    virtual void onAppPreSuspended();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderDragonRenderingBackend(::OreUI::FrameDebugData&, ::Gameface::TemporaryTextureHolder&);

    MCNAPI void _drawIndexedInstanced(uint, uint, uint, uint);

    MCNAPI void _flush(::OreUI::FrameDebugData::FlushTrigger);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::FrameDebugData&, ::Gameface::TemporaryTextureHolder&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $FillCaps(::renoir::RendererCaps&);

    MCNAPI void $BeginCommands();

    MCNAPI void $WrapUserRenderTarget(
        void*,
        ::renoir::Texture2D const&,
        ::renoir::Texture2DObject,
        void*,
        ::renoir::DepthStencilTexture const&,
        ::renoir::DepthStencilTextureObject
    );

    MCNAPI void $WrapUserTexture(void*, ::renoir::Texture2D const&, ::renoir::Texture2DObject);

    MCNAPI bool $CreatePipelineState(::renoir::PipelineState const&, ::renoir::PipelineStateObject);

    MCNAPI void $DestroyPipelineState(::renoir::PipelineStateObject);

    MCNAPI bool $CreateVertexBuffer(::renoir::VertexType, uint, ::renoir::VertexBufferObject, bool);

    MCNAPI void $DestroyVertexBuffer(::renoir::VertexBufferObject);

    MCNAPI void* $MapVertexBuffer(::renoir::VertexBufferObject);

    MCNAPI void $UnmapVertexBuffer(::renoir::VertexBufferObject, uint);

    MCNAPI bool $CreateIndexBuffer(::renoir::IndexBufferType, uint, ::renoir::IndexBufferObject, bool);

    MCNAPI void $DestroyIndexBuffer(::renoir::IndexBufferObject);

    MCNAPI void* $MapIndexBuffer(::renoir::IndexBufferObject);

    MCNAPI void $UnmapIndexBuffer(::renoir::IndexBufferObject, uint);

    MCNAPI bool $CreateConstantBuffer(::renoir::CBType, ::renoir::ConstantBufferObject, uint);

    MCNAPI void $DestroyConstantBuffer(::renoir::ConstantBufferObject);

    MCNAPI bool $CreateTexture(::renoir::Texture2DObject, ::renoir::Texture2D const&, void const*, uint);

    MCNAPI void $DestroyTexture(::renoir::Texture2DObject);

    MCNAPI void $UpdateTexture(
        ::renoir::Texture2DObject,
        ::renoir::Texture2D const&,
        ::renoir::UpdateBox*,
        void const**,
        uint,
        bool
    );

    MCNAPI bool $CreateDepthStencilTexture(::renoir::DepthStencilTextureObject, ::renoir::DepthStencilTexture const&);

    MCNAPI void $DestroyDepthStencilTexture(::renoir::DepthStencilTextureObject);

    MCNAPI void $CopyTextureToTexture(
        ::renoir::Texture2DObject,
        ::renoir::Texture2DObject,
        ::renoir::UpdateBox,
        ::renoir::float2
    );

    MCNAPI bool $CreateSampler2D(::renoir::Sampler2DObject, ::renoir::Sampler2D const&);

    MCNAPI void $DestroySampler2D(::renoir::Sampler2DObject);

    MCNAPI void $ExecuteRendering(
        ::renoir::RendererBackend::BackendCommandsBuffer const*,
        uint,
        ::renoir::RendererBackend::ConstantBufferUpdateData const*,
        uint
    );

    MCNAPI void $ExecuteResourceCommands(
        ::renoir::RendererBackend::BackendResourceCommandsBuffer const*,
        uint,
        ::renoir::ResourcesCommandsStage
    );

    MCNAPI void $EndCommands();

    MCNAPI bool $ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*);

    MCNAPI void $initializeStaticResources(::Bedrock::NonOwnerPointer<mce::ShaderGroup> const&);

    MCNAPI void $onAppPreSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
