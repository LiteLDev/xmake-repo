#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class glTFExporter {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    glTFExporter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~glTFExporter();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&, std::string const&);
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
};
