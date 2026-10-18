#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
namespace mce { class ShaderGroup; }
namespace renoir { struct DepthStencilTexture; }
namespace renoir { struct DepthStencilTextureObject; }
namespace renoir { struct PipelineState; }
namespace renoir { struct RendererCaps; }
namespace renoir { struct Sampler2D; }
namespace renoir { struct Sampler2DObject; }
namespace renoir { struct Texture2D; }
namespace renoir { struct Texture2DObject; }
namespace renoir { struct TextureObject; }
namespace renoir { struct UpdateBox; }
namespace renoir { struct float2; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderDragonRenderingBackend : public ::OreUI::IRenderingBackend {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderDragonRenderingBackend : public ::OreUI::IRenderingBackend {
#else // @header-generator platform
class RenderDragonRenderingBackend {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // RenderDragonRenderingBackend inner types declare
    // clang-format off
    struct VertexBuffer;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct GetGamefaceStride;
#endif // @header-generator platform
    struct IndexBuffer;
    struct ConstantBuffer;
#if defined(LL_PLAT_A) // @header-generator platform
    struct GetGamefaceStride;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        struct DragonVertexBuffer {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 136, ::dragon::mesh::VertexFormat> dragonFormat;
            ::ll::UntypedStorage<8, 24>                              dragonVertexBuffer;
            // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct DragonVertexBuffer {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 136, ::dragon::mesh::VertexFormat> dragonFormat;
            ::ll::TypedStorage<8, 24, ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>>
                dragonVertexBuffer;
            // NOLINTEND
        };
#else // @header-generator platform
        struct DragonVertexBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct DragonInstanceData {
        public:
            // DragonInstanceData inner types define
            using BufferConvert = void (*)(::std::vector<uchar> const&, ::std::vector<uchar>&, uint64);

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<
                8,
                8,
                ::gsl::not_null<void (*)(::std::vector<uchar> const&, ::std::vector<uchar>&, uint64)>>
                                                            mGamefaceToDragon;
            ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mDragonInstanceBuffer;
            ::ll::TypedStorage<1, 1, uchar>                 mGamefaceStride;
            // NOLINTEND
        };

        using DragonStorage = ::std::variant<
            ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonVertexBuffer,
            ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonInstanceData>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                  count;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>> data;
        ::ll::TypedStorage<
            8,
            168,
            ::std::variant<
                ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonVertexBuffer,
                ::OreUI::RenderDragonRenderingBackend::VertexBuffer::DragonInstanceData>>
            mDragonStorage;
        // NOLINTEND
#else // @header-generator platform
        struct DragonInstanceData {};
#endif // @header-generator platform
#endif // @header-generator platform
    };

    struct GetGamefaceStride {};

#if defined(LL_PLAT_A) // @header-generator platform
    using PipelineStateData = ::mce::framebuilder::GamefacePipelineState;
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct IndexBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                  count;
        ::ll::TypedStorage<1, 1, uchar>                 mStride;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>> data;
        ::ll::TypedStorage<8, 24, ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>>
            dragonIndexBuffer;
        // NOLINTEND
    };
#else // @header-generator platform
    struct IndexBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ConstantBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::renoir::CBType>    type;
        ::ll::TypedStorage<4, 2048, ::glm::vec4[128]> data;
        ::ll::TypedStorage<8, 8, uint64>              size;
        // NOLINTEND
    };

    using PipelineStateData = ::mce::framebuilder::GamefacePipelineState;

    using BatchDraw = ::mce::framebuilder::GamefaceBatchDraw;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::FrameDebugData&> mFrameDebugData;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::PipelineStateObject, ::mce::framebuilder::GamefacePipelineState>>
        mPipelineStates;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::VertexBufferObject, ::OreUI::RenderDragonRenderingBackend::VertexBuffer>>
                                                                            mVertexBuffers;
    ::ll::TypedStorage<4, 8, ::std::array<::renoir::VertexBufferObject, 2>> mCurrentVertexBuffers;
    ::ll::TypedStorage<4, 4, int>                                           mNumVertexBuffersActive;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::IndexBufferObject, ::OreUI::RenderDragonRenderingBackend::IndexBuffer>>
                                                          mIndexBuffers;
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferObject> mCurrentIndexBuffer;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::renoir::ConstantBufferObject, ::OreUI::RenderDragonRenderingBackend::ConstantBuffer>>
        mConstantBuffers;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Gameface::IRenderingBackendTextureStorage>>> mTextures;
    ::ll::TypedStorage<8, 144, ::mce::framebuilder::GamefacePipelineState> mCurrentPipelineState;
    ::ll::TypedStorage<8, 424, ::mce::framebuilder::GamefaceBatchDrawMesh> mMesh;
    ::ll::TypedStorage<8, 24, ::mce::framebuilder::GamefaceBatchDraw>      mBatch;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDragonRenderingBackend& operator=(RenderDragonRenderingBackend const&);
    RenderDragonRenderingBackend(RenderDragonRenderingBackend const&);
    RenderDragonRenderingBackend();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderDragonRenderingBackend() /*override*/ = default;

    virtual void initializeStaticResources(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&) /*override*/;

    virtual void onAppPreSuspended() /*override*/;

    virtual void BeginCommands() /*override*/;

    virtual void FillCaps(::renoir::RendererCaps& outCaps) /*override*/;

    virtual void WrapUserRenderTarget(
        void*                                userObject,
        ::renoir::Texture2D const&           description,
        ::renoir::Texture2DObject            object,
        void*                                depthStencil,
        ::renoir::DepthStencilTexture const& dsDescription,
        ::renoir::DepthStencilTextureObject  dsObject
    ) /*override*/;

    virtual void WrapUserTexture(
        void*                      userObject,
        ::renoir::Texture2D const& description,
        ::renoir::Texture2DObject  object
    ) /*override*/;

    virtual bool
    CreatePipelineState(::renoir::PipelineState const& state, ::renoir::PipelineStateObject object) /*override*/;

    virtual void DestroyPipelineState(::renoir::PipelineStateObject object) /*override*/;

    virtual bool
    CreateVertexBuffer(::renoir::VertexType type, uint count, ::renoir::VertexBufferObject object, bool) /*override*/;

    virtual void DestroyVertexBuffer(::renoir::VertexBufferObject object) /*override*/;

    virtual void* MapVertexBuffer(::renoir::VertexBufferObject object) /*override*/;

    virtual void UnmapVertexBuffer(::renoir::VertexBufferObject object, uint count) /*override*/;

    virtual bool CreateIndexBuffer(
        ::renoir::IndexBufferType   format,
        uint                        count,
        ::renoir::IndexBufferObject object,
        bool
    ) /*override*/;

    virtual void DestroyIndexBuffer(::renoir::IndexBufferObject object) /*override*/;

    virtual void* MapIndexBuffer(::renoir::IndexBufferObject object) /*override*/;

    virtual void UnmapIndexBuffer(::renoir::IndexBufferObject object, uint elemCount) /*override*/;

    virtual bool
    CreateConstantBuffer(::renoir::CBType type, ::renoir::ConstantBufferObject object, uint size) /*override*/;

    virtual void DestroyConstantBuffer(::renoir::ConstantBufferObject object) /*override*/;

    virtual bool CreateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        void const*                data,
        uint                       dataLen
    ) /*override*/;

    virtual void DestroyTexture(::renoir::Texture2DObject object) /*override*/;

    virtual void UpdateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        ::renoir::UpdateBox*       boxes,
        void const**               newBytes,
        uint                       count,
        bool
    ) /*override*/;

    virtual bool CreateDepthStencilTexture(
        ::renoir::DepthStencilTextureObject  object,
        ::renoir::DepthStencilTexture const& description
    ) /*override*/;

    virtual void DestroyDepthStencilTexture(::renoir::DepthStencilTextureObject object) /*override*/;

    virtual void CopyTextureToTexture(
        ::renoir::Texture2DObject,
        ::renoir::Texture2DObject,
        ::renoir::UpdateBox,
        ::renoir::float2
    ) /*override*/;

    virtual bool CreateSampler2D(::renoir::Sampler2DObject object, ::renoir::Sampler2D const& description) /*override*/;

    virtual void DestroySampler2D(::renoir::Sampler2DObject object) /*override*/;

    virtual bool ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*) /*override*/;

    virtual void ExecuteRendering(
        ::renoir::RendererBackend::BackendCommandsBuffer const*    buffers,
        uint                                                       buffersCount,
        ::renoir::RendererBackend::ConstantBufferUpdateData const* cboUpdates,
        uint                                                       numCboUpdates
    ) /*override*/;

    virtual void ExecuteResourceCommands(
        ::renoir::RendererBackend::BackendResourceCommandsBuffer const* buffers,
        uint                                                            buffersCount,
        ::renoir::ResourcesCommandsStage
    ) /*override*/;

    virtual void EndCommands() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderDragonRenderingBackend(
        ::OreUI::FrameDebugData&            frameDebugData,
        ::Gameface::TemporaryTextureHolder& temporaryTextureHolder
    );

    MCAPI void _drawIndexedInstanced(uint indexCount, uint indexOffset, uint instanceCount, uint instanceOffset);

    MCAPI void _flush(::OreUI::FrameDebugData::FlushTrigger trigger);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::FrameDebugData& frameDebugData, ::Gameface::TemporaryTextureHolder& temporaryTextureHolder);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeStaticResources(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&);

    MCFOLD void $onAppPreSuspended();

    MCFOLD void $BeginCommands();

    MCAPI void $FillCaps(::renoir::RendererCaps& outCaps);

    MCAPI void $WrapUserRenderTarget(
        void*                                userObject,
        ::renoir::Texture2D const&           description,
        ::renoir::Texture2DObject            object,
        void*                                depthStencil,
        ::renoir::DepthStencilTexture const& dsDescription,
        ::renoir::DepthStencilTextureObject  dsObject
    );

    MCAPI void
    $WrapUserTexture(void* userObject, ::renoir::Texture2D const& description, ::renoir::Texture2DObject object);

    MCAPI bool $CreatePipelineState(::renoir::PipelineState const& state, ::renoir::PipelineStateObject object);

    MCAPI void $DestroyPipelineState(::renoir::PipelineStateObject object);

    MCAPI bool $CreateVertexBuffer(::renoir::VertexType type, uint count, ::renoir::VertexBufferObject object, bool);

    MCAPI void $DestroyVertexBuffer(::renoir::VertexBufferObject object);

    MCAPI void* $MapVertexBuffer(::renoir::VertexBufferObject object);

    MCAPI void $UnmapVertexBuffer(::renoir::VertexBufferObject object, uint count);

    MCAPI bool
    $CreateIndexBuffer(::renoir::IndexBufferType format, uint count, ::renoir::IndexBufferObject object, bool);

    MCAPI void $DestroyIndexBuffer(::renoir::IndexBufferObject object);

    MCAPI void* $MapIndexBuffer(::renoir::IndexBufferObject object);

    MCAPI void $UnmapIndexBuffer(::renoir::IndexBufferObject object, uint elemCount);

    MCAPI bool $CreateConstantBuffer(::renoir::CBType type, ::renoir::ConstantBufferObject object, uint size);

    MCAPI void $DestroyConstantBuffer(::renoir::ConstantBufferObject object);

    MCAPI bool $CreateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        void const*                data,
        uint                       dataLen
    );

    MCAPI void $DestroyTexture(::renoir::Texture2DObject object);

    MCAPI void $UpdateTexture(
        ::renoir::Texture2DObject  object,
        ::renoir::Texture2D const& description,
        ::renoir::UpdateBox*       boxes,
        void const**               newBytes,
        uint                       count,
        bool
    );

    MCAPI bool $CreateDepthStencilTexture(
        ::renoir::DepthStencilTextureObject  object,
        ::renoir::DepthStencilTexture const& description
    );

    MCAPI void $DestroyDepthStencilTexture(::renoir::DepthStencilTextureObject object);

    MCFOLD void $CopyTextureToTexture(
        ::renoir::Texture2DObject,
        ::renoir::Texture2DObject,
        ::renoir::UpdateBox,
        ::renoir::float2
    );

    MCAPI bool $CreateSampler2D(::renoir::Sampler2DObject object, ::renoir::Sampler2D const& description);

    MCAPI void $DestroySampler2D(::renoir::Sampler2DObject object);

    MCFOLD bool $ReadTexture(::renoir::TextureObject, ::renoir::UpdateBox const&, void*);

    MCAPI void $ExecuteRendering(
        ::renoir::RendererBackend::BackendCommandsBuffer const*    buffers,
        uint                                                       buffersCount,
        ::renoir::RendererBackend::ConstantBufferUpdateData const* cboUpdates,
        uint                                                       numCboUpdates
    );

    MCAPI void $ExecuteResourceCommands(
        ::renoir::RendererBackend::BackendResourceCommandsBuffer const* buffers,
        uint                                                            buffersCount,
        ::renoir::ResourcesCommandsStage
    );

    MCAPI void $EndCommands();
    // NOLINTEND
#else // @header-generator platform
    struct ConstantBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
