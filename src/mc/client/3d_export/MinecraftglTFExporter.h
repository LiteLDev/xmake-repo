#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/3d_export/glTFExportData.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"
#include "mc/util/glTFExporter.h"
#include "mc/util/gltf/Accessor.h"
#include "mc/util/gltf/Mesh.h"
#include "mc/util/gltf/Primitive.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IMinecraftGame;
class IRenderChunkGarbage;
class RenderChunkInstanced;
class RenderChunkSorterSharedInfo;
class ResourceLocation;
class Scheduler;
class ScreenContext;
class StructureEditorData;
class TaskGroup;
struct RangeIndices;
namespace Core { class Path; }
namespace Json { class Value; }
namespace mce { class MaterialPtr; }
// clang-format on

class MinecraftglTFExporter : public ::glTFExporter {
#else // @header-generator platform
class MinecraftglTFExporter {
#endif // @header-generator platform
public:
    // MinecraftglTFExporter inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct AsyncModelContent;
#endif // @header-generator platform
    struct AsyncModelMaterial;
#if defined(LL_PLAT_A) // @header-generator platform
    struct glTFExportProgress;
#else // @header-generator platform
#endif // @header-generator platform
    struct BakeData;
    struct ImageBakeData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct AsyncModelContent;
#else // @header-generator platform
    struct glTFExportProgress;
#endif // @header-generator platform
    // clang-format on

    // MinecraftglTFExporter inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct AsyncModelContent {};

#endif // @header-generator platform
    struct AsyncModelMaterial {
    public:
        // AsyncModelMaterial inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum class ShaderType : uchar {
            TERRAIN = 0,
            ENTITY  = 1,
            TEXT    = 2,
            NONE    = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>              mMaterialName;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mTextureKeys;
        ::ll::TypedStorage<4, 16, ::mce::Color>             mChangeColor;
        ::ll::TypedStorage<4, 16, ::mce::Color>             mOverlayColor;
        ::ll::TypedStorage<1, 1, bool>                      mUseOverlayColor;
        ::ll::TypedStorage<1, 1, bool>                      mUseColorMask;
        ::ll::TypedStorage<1, 1, bool>                      mUseEmissive;
        ::ll::TypedStorage<1, 1, bool>                      mUseAlphaTest;
        ::ll::TypedStorage<1, 1, bool>                      mUseTintedAlphaTest;
        ::ll::TypedStorage<1, 1, bool>                      mUseAlphaToCoverage;
        ::ll::TypedStorage<1, 1, bool>                      mUseMultiTexture;
        ::ll::TypedStorage<1, 1, bool>                      mUseMaskedMultiTexture;
        ::ll::TypedStorage<1, 1, bool>                      mUseColorSecondTexture;
        ::ll::TypedStorage<1, 1, bool>                      mStateBlending;
        // NOLINTEND

    public:
        // prevent constructor by default
        AsyncModelMaterial& operator=(AsyncModelMaterial const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::string getMaterialUniqueID() const;

        MCNAPI ::MinecraftglTFExporter::AsyncModelMaterial::ShaderType getShaderType() const;

        MCNAPI ~AsyncModelMaterial();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        enum class ShaderType : uchar {};
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct glTFExportProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, std::atomic<uint>> mCurrent;
        ::ll::TypedStorage<4, 4, std::atomic<uint>> mTotal;
        // NOLINTEND
#else // @header-generator platform
    struct BakeData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI float getProgress() const;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ImageBakeData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct BakeData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mAlpha;
        ::ll::TypedStorage<1, 1, bool> mBlend;
        // NOLINTEND

    public:
        // prevent constructor by default
        BakeData();
    };

    struct ImageBakeData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mImageID;
        ::ll::TypedStorage<1, 1, bool> mAlpha;
        ::ll::TypedStorage<1, 1, bool> mBlend;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageBakeData();
    };

    struct AsyncModelContent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 336, ::mce::MeshData>                                  mMeshData;
        ::ll::TypedStorage<4, 4, int const>                                          mVertexStart;
        ::ll::TypedStorage<4, 4, int const>                                          mVertexCount;
        ::ll::TypedStorage<4, 64, ::Matrix const>                                    mViewMatrix;
        ::ll::TypedStorage<8, 96, ::MinecraftglTFExporter::AsyncModelMaterial const> mMaterial;
        // NOLINTEND

    public:
        // prevent constructor by default
        AsyncModelContent& operator=(AsyncModelContent const&);
        AsyncModelContent(AsyncModelContent const&);
        AsyncModelContent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AsyncModelContent(
            ::mce::MeshData&&,
            ::RangeIndices const&,
            ::Matrix const&,
            ::MinecraftglTFExporter::AsyncModelMaterial&&
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::mce::MeshData&&, ::RangeIndices const&, ::Matrix const&, ::MinecraftglTFExporter::AsyncModelMaterial&&);
        // NOLINTEND
    };

    using AsyncCallback = std::function<void(const Core::Path&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                   mModelCount;
    ::ll::TypedStorage<4, 4, int>                                                    mRootNodeID;
    ::ll::TypedStorage<4, 4, int>                                                    mSceneID;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                      mMinecraft;
    ::ll::TypedStorage<1, 1, bool>                                                   mCanLoad;
    ::ll::TypedStorage<8, 24, std::vector<MinecraftglTFExporter::AsyncModelContent>> mAsyncQueue;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, cg::ImageBuffer>>      mTextureBuffer;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                      mSerializing;
    ::ll::TypedStorage<4, 8, ::MinecraftglTFExporter::glTFExportProgress>            mProgressHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                             mIOTaskGroup;
    ::ll::TypedStorage<4, 4, int>                                                    mBufferID;
    ::ll::TypedStorage<4, 4, int>                                                    mSamplerID;
    ::ll::TypedStorage<4, 4, int>                                                    mNoMaterialID;
    ::ll::TypedStorage<8, 120, ::glTFExportData>                                     mExportData;
    ::ll::TypedStorage<1, 1, bool>                                                   mExportCompleted;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IRenderChunkGarbage>>                  mGarbage;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkSorterSharedInfo>>          mSharedSortInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftglTFExporter& operator=(MinecraftglTFExporter const&);
    MinecraftglTFExporter(MinecraftglTFExporter const&);
    MinecraftglTFExporter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftglTFExporter();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftglTFExporter(::Scheduler&, ::Core::Path const&, std::string const&, ::IMinecraftGame&);

    MCNAPI void _addModel(::MinecraftglTFExporter::AsyncModelContent const&);

    MCNAPI void _addModelAsync(
        ::ScreenContext&,
        ::mce::MeshData const&,
        ::RangeIndices const&,
        ::Matrix const&,
        ::mce::MaterialPtr const&,
        ::ResourceLocation const&
    );

    MCNAPI int _generateAccessor(
        int,
        int,
        int,
        int,
        ::glTF::Primitive::ComponentType,
        ::glTF::Accessor::Type,
        std::vector<float> const&,
        std::vector<float> const&
    );

    MCNAPI int _generateMaterialFromTexture(std::string const&, int, bool, bool);

    MCNAPI void _loadAsycModel(std::function<void(const Core::Path&)>);

    MCNAPI int _updateBuffer(int, int, std::string const&);

    MCNAPI ::glTFExportData const& getExportData() const;

    MCNAPI ::MinecraftglTFExporter::glTFExportProgress const& getProgressHandler() const;

    MCNAPI void initiateExport(::StructureEditorData const&, ::BlockPos const&, ::BlockSource&);

    MCNAPI ::MinecraftglTFExporter::glTFExportProgress const& initiateSerialize(std::function<void(const Core::Path&)>);

    MCNAPI bool isSerializing() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scheduler&, ::Core::Path const&, std::string const&, ::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct glTFExportProgress {};
#endif // @header-generator platform
};
