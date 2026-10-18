#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/util/gltf/Accessor.h"
#include "mc/util/gltf/Animation.h"
#include "mc/util/gltf/Asset.h"
#include "mc/util/gltf/Buffer.h"
#include "mc/util/gltf/BufferView.h"
#include "mc/util/gltf/Image.h"
#include "mc/util/gltf/Material.h"
#include "mc/util/gltf/Mesh.h"
#include "mc/util/gltf/Node.h"
#include "mc/util/gltf/Sampler.h"
#include "mc/util/gltf/Scene.h"
#include "mc/util/gltf/Shader.h"
#include "mc/util/gltf/Texture.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace glTF { struct Accessor; }
namespace glTF { struct Buffer; }
namespace glTF { struct BufferView; }
namespace glTF { struct Image; }
namespace glTF { struct Material; }
namespace glTF { struct Mesh; }
namespace glTF { struct Node; }
namespace glTF { struct Sampler; }
namespace glTF { struct Scene; }
namespace glTF { struct Texture; }
#endif // @header-generator platform
// clang-format on

class glTFExporter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                              mFolderPath;
    ::ll::TypedStorage<8, 24, std::string const>             mModelName;
    ::ll::UntypedStorage<8, 24>                              mBinaryPath;
    ::ll::TypedStorage<8, 24, std::string>                   mBinaryFileName;
    ::ll::UntypedStorage<8, 24>                              mglTFPath;
    ::ll::TypedStorage<1, 1, bool const>                     mUseBinary;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Accessor>>   mAccessors;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Animation>>  mAnimations;
    ::ll::TypedStorage<8, 120, ::glTF::Asset>                mAsset;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Buffer>>     mBuffers;
    ::ll::TypedStorage<8, 24, std::vector<glTF::BufferView>> mBufferViewers;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Image>>      mImages;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Material>>   mMaterials;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Mesh>>       mMeshes;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Node>>       mNodes;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Sampler>>    mSamplers;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Scene>>      mScenes;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Shader>>     mShaders;
    ::ll::TypedStorage<8, 24, std::vector<glTF::Texture>>    mTextures;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>      mExtensions;
    ::ll::TypedStorage<4, 4, int>                            mDefaultSceneName;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>            mBinaryBuffer;
    ::ll::TypedStorage<4, 40, std::mutex>                    mMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnk6b2b52;
    ::ll::UntypedStorage<8, 32>  mUnk8c608f;
    ::ll::UntypedStorage<8, 32>  mUnk8616b2;
    ::ll::UntypedStorage<8, 32>  mUnk120142;
    ::ll::UntypedStorage<8, 32>  mUnk9bc0ba;
    ::ll::UntypedStorage<1, 1>   mUnkfc1c68;
    ::ll::UntypedStorage<8, 24>  mUnk4999c3;
    ::ll::UntypedStorage<8, 24>  mUnkf19852;
    ::ll::UntypedStorage<8, 160> mUnkf04c76;
    ::ll::UntypedStorage<8, 24>  mUnk3cbc3b;
    ::ll::UntypedStorage<8, 24>  mUnk8e959c;
    ::ll::UntypedStorage<8, 24>  mUnk81fc79;
    ::ll::UntypedStorage<8, 24>  mUnk455823;
    ::ll::UntypedStorage<8, 24>  mUnkc5fffb;
    ::ll::UntypedStorage<8, 24>  mUnk9a4c47;
    ::ll::UntypedStorage<8, 24>  mUnk179a42;
    ::ll::UntypedStorage<8, 24>  mUnka25cfc;
    ::ll::UntypedStorage<8, 24>  mUnk7de0c4;
    ::ll::UntypedStorage<8, 24>  mUnkb05d1a;
    ::ll::UntypedStorage<8, 24>  mUnka8255b;
    ::ll::UntypedStorage<4, 4>   mUnk398e4e;
    ::ll::UntypedStorage<8, 24>  mUnk35d773;
    ::ll::UntypedStorage<8, 80>  mUnk2d25e2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    glTFExporter& operator=(glTFExporter const&);
    glTFExporter(glTFExporter const&);
#endif // @header-generator platform
    glTFExporter();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~glTFExporter();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~glTFExporter() = default;
#else // LL_PLAT_C
    virtual ~glTFExporter();
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _hasMaterial(std::string const&);

    MCNAPI void _serialize(::Json::Value&);

    MCNAPI int addAccessor(::glTF::Accessor&);

    MCNAPI ulong addBinaryBuffer(::Core::Path const&, uchar const*, ulong);

    MCNAPI int addBuffer(::glTF::Buffer&);

    MCNAPI int addBufferView(::glTF::BufferView&);

    MCNAPI void addExtension(std::string const&);

    MCNAPI int addImage(::glTF::Image&);

    MCNAPI int addMaterial(::glTF::Material&);

    MCNAPI int addMesh(::glTF::Mesh&);

    MCNAPI int addNode(::glTF::Node&);

    MCNAPI void addNodeChild(int, int);

    MCNAPI int addSampler(::glTF::Sampler&);

    MCNAPI int addScene(::glTF::Scene&);

    MCNAPI int addTexture(::glTF::Texture&);

    MCNAPI std::string const& getBinaryFileName() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getBinaryFilePath() const;

    MCNAPI int getMaterialID(std::string const&);

    MCNAPI glTFExporter(::Core::Path const&, std::string const&);

    MCNAPI bool hasBuffer(int);

    MCNAPI bool hasMaterial(std::string const&);

    MCNAPI void serialize();

    MCNAPI void setAsset(::glTF::Asset const&);

    MCNAPI void setDefaultScene(int);

    MCNAPI int updateBufferSize(int, int);

    MCNAPI bool useBinary() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& BINARY_EXTENSION();

    MCNAPI static std::string_view const& GLB_BUFFER_URI();

    MCNAPI static std::string_view const& GLB_EXTENSION();

    MCNAPI static std::string_view const& GLTF_EXTENSION();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool _hasMaterial(::std::string const& materialName);

    MCNAPI void _serialize(::Json::Value& root);

    MCNAPI int addAccessor(::glTF::Accessor& accessor);

    MCNAPI uint64 addBinaryBuffer(::Core::Path const& filePath, uchar const* data, uint64 size);

    MCNAPI int addBuffer(::glTF::Buffer& buffer);

    MCNAPI int addBufferView(::glTF::BufferView& bufferView);

    MCNAPI void addExtension(::std::string const& extension);

    MCNAPI int addImage(::glTF::Image& image);

    MCNAPI int addMaterial(::glTF::Material& material);

    MCNAPI int addMesh(::glTF::Mesh& mesh);

    MCNAPI int addNode(::glTF::Node& node);

    MCNAPI void addNodeChild(int nodeID, int childNodeID);

    MCNAPI int addSampler(::glTF::Sampler& sampler);

    MCNAPI int addScene(::glTF::Scene& scene);

    MCNAPI int addTexture(::glTF::Texture& texture);

    MCNAPI int getMaterialID(::std::string const& materialName);

    MCNAPI glTFExporter(::Core::Path const& folderPath, ::std::string const& modelName);

    MCNAPI void serialize();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::Path const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path const& folderPath, ::std::string const& modelName);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
