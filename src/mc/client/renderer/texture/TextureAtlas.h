#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ImageResourceManager.h"
#include "mc/client/renderer/texture/AtlasParameters.h"
#include "mc/client/renderer/texture/ParsedAtlasData.h"
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/TextureAtlas.h"
#include "mc/deps/core_graphics/file_watcher/FileWatcherHandle.h"

// auto generated forward declare list
// clang-format off
class AbstractTextureAccessor;
class AtlasItemManager;
class ResourcePackManager;
class TextureAtlasItem;
class TextureAtlasTile;
struct ParsedAtlasNode;
struct ParsedAtlasNodeElement;
struct RuntimeImageGeneratorInfo;
struct TextureAtlasItemTextureSetTranslation;
struct TextureAtlasResourceCallbacks;
namespace Json { class Value; }
namespace cg { class ImageBuffer; }
namespace cg { class TextureSetImageContainer; }
namespace mce { class Color; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

class TextureAtlas : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ImageResourceManager.h"
#include "mc/client/renderer/texture/AtlasParameters.h"
#include "mc/client/renderer/texture/ParsedAtlasData.h"
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/TextureAtlas.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class ResourcePackManager;
class TextureAtlasTile;
struct ParsedAtlasNode;
struct RuntimeImageGeneratorInfo;
struct TextureAtlasResourceCallbacks;
namespace Json { class Value; }
namespace cg { class ImageBuffer; }
namespace cg { class TextureSetImageContainer; }
namespace mce { class Color; }
namespace mce { class FileWatcherHandle; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

class TextureAtlas : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class TextureAtlas {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // TextureAtlas inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class PaddingMode : int {
        Enabled  = 0,
        Disabled = 1,
    };

    using RuntimeImageGenerators = std::vector<std::weak_ptr<RuntimeImageGeneratorInfo>>;

    using StatusCallback = std::function<void(const TextureAtlasStatus&)>;

    using ImageAtlasFinishedCallback = std::function<void()> const;

    using TextureAtlasTiles = std::vector<TextureAtlasTile>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<AtlasItemManager>>                     mAtlasItemManager;
    ::ll::TypedStorage<8, 200, ::ParsedAtlasData>                                    mParsedAtlasData;
    ::ll::TypedStorage<4, 4, ::AtlasParameters>                                      mAtlasParameters;
    ::ll::TypedStorage<8, 24, std::set<ResourceLocation>>                            mResources;
    ::ll::TypedStorage<8, 40, ::ImageResourceManager>                                mResourceManager;
    ::ll::TypedStorage<8, 24, std::vector<mce::FileWatcherHandle>>                   mFileWatcherHandle;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<RuntimeImageGeneratorInfo>>> mRuntimeImageGenerators;
    ::ll::TypedStorage<4, 4, ::TextureAtlas::PaddingMode>                            mPaddingMode;
    ::ll::TypedStorage<8, 96, ::cg::TextureAtlas>                                    mTextureAtlas;
    ::ll::UntypedStorage<8, 24>                                                      mPBRTextureDataManager;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlas();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureAtlas();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureAtlas(
        ::ResourceLocation const&,
        ::Bedrock::NonOwnerPointer<mce::framebuilder::PBRTextureDataManager>,
        ::TextureAtlas::PaddingMode
    );

    MCNAPI void _addElementCollection(
        ::ResourcePackManager&,
        std::shared_ptr<mce::TextureGroup>,
        ::Json::Value const&,
        ::ParsedAtlasNode&,
        int,
        float,
        ::mce::Color const&,
        bool
    );

    MCNAPI ::TextureAtlasResourceCallbacks _createAtlas(
        ::Json::Value const&,
        std::function<void(const TextureAtlasStatus&)>,
        std::function<void()> const,
        std::shared_ptr<mce::TextureGroup>,
        ::cg::MipMapSupport const,
        ::ResourcePackManager&,
        std::shared_ptr<cg::ImageBuffer>,
        std::shared_ptr<std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>>
    );

    MCNAPI void addRuntimeImageGenerator(std::weak_ptr<RuntimeImageGeneratorInfo> const);

    MCNAPI ::TextureAtlasResourceCallbacks createAtlasFromJson(
        ::Json::Value const&,
        ::ResourcePackManager&,
        std::function<void(const TextureAtlasStatus&)>,
        std::function<void()> const,
        std::shared_ptr<mce::TextureGroup>,
        ::cg::MipMapSupport const,
        std::shared_ptr<cg::ImageBuffer>,
        std::shared_ptr<std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>>
    );

    MCNAPI ::TextureAtlasResourceCallbacks createAtlasFromList(
        std::string const&,
        std::vector<std::string> const&,
        ::ResourcePackManager&,
        std::function<void(const TextureAtlasStatus&)>,
        std::function<void()> const,
        std::shared_ptr<mce::TextureGroup>,
        ::cg::MipMapSupport const,
        std::shared_ptr<cg::ImageBuffer>,
        std::shared_ptr<std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>>
    );

    MCNAPI uint getColorMipCount() const;

    MCNAPI uint getPadSize() const;

    MCNAPI ::ResourceLocation const& getPathFromName(std::string const&) const;

    MCNAPI ::TextureAtlasItem const& getTextureItem(std::string const&) const;

    MCNAPI ::TextureAtlasItemTextureSetTranslation const& getTextureItemTextureSetTranslation(int) const;

    MCNAPI ulong getUsedMemory() const;

    MCNAPI ::TextureAtlasResourceCallbacks loadMetaFile(
        ::ResourcePackManager&,
        std::function<void(const TextureAtlasStatus&)>,
        std::function<void()> const,
        std::shared_ptr<mce::TextureGroup>,
        ::cg::MipMapSupport const,
        std::shared_ptr<cg::ImageBuffer>,
        std::shared_ptr<std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>>
    );

    MCNAPI ::TextureAtlasResourceCallbacks recreateAtlas(
        std::shared_ptr<mce::TextureGroup>,
        std::function<void(const TextureAtlasStatus&)>,
        std::function<void()> const,
        ::cg::MipMapSupport const,
        std::shared_ptr<cg::ImageBuffer>,
        std::shared_ptr<std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&,
        ::Bedrock::NonOwnerPointer<mce::framebuilder::PBRTextureDataManager>,
        ::TextureAtlas::PaddingMode
    );
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
    enum class PaddingMode : int {};
#if defined(LL_PLAT_C) // @header-generator platform

    using SourceImageBuffers = ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>;

    using TextureAtlasTiles = ::std::vector<::TextureAtlasTile>;

    using StatusCallback = ::std::function<void(::TextureAtlasStatus const&)>;

    using ImageAtlasFinishedCallback = ::std::function<void()> const;

    using RuntimeImageGenerators = ::std::vector<::std::weak_ptr<::RuntimeImageGeneratorInfo>>;

    using SourceImagesSignature = void(::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer> const&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AtlasItemManager>>                       mAtlasItemManager;
    ::ll::TypedStorage<8, 240, ::ParsedAtlasData>                                          mParsedAtlasData;
    ::ll::TypedStorage<4, 4, ::AtlasParameters>                                            mAtlasParameters;
    ::ll::TypedStorage<8, 16, ::std::set<::ResourceLocation>>                              mResources;
    ::ll::TypedStorage<8, 64, ::ImageResourceManager>                                      mResourceManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::FileWatcherHandle>>                     mFileWatcherHandle;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::RuntimeImageGeneratorInfo>>> mRuntimeImageGenerators;
    ::ll::TypedStorage<4, 4, ::TextureAtlas::PaddingMode>                                  mPaddingMode;
    ::ll::TypedStorage<8, 96, ::cg::TextureAtlas>                                          mTextureAtlas;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager>>
        mPBRTextureDataManager;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlas();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureAtlas() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureAtlas(
        ::ResourceLocation const&                                              metaFile,
        ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> pbrTextureDataManager,
        ::TextureAtlas::PaddingMode                                            paddingMode
    );

    MCAPI void _addElementCollection(
        ::ResourcePackManager&                 resourcePackManager,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Json::Value const&                   texture,
        ::ParsedAtlasNode&                     newNode,
        int                                    atIndex,
        float                                  mipFadeAmount,
        ::mce::Color const&                    mipFadeColor,
        bool                                   isAdditive
    );

    MCAPI ::TextureAtlasResourceCallbacks _createAtlas(
        ::Json::Value const&                               root,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()> const                      imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport const                          mipMapSupport,
        ::ResourcePackManager&                             resourcePackManager,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCAPI ::TextureAtlasResourceCallbacks createAtlasFromJson(
        ::Json::Value const&                               json,
        ::ResourcePackManager&                             resourcePackManager,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCAPI ::TextureAtlasResourceCallbacks createAtlasFromList(
        ::std::string const&                               atlasName,
        ::std::vector<::std::string> const&                textures,
        ::ResourcePackManager&                             resourcePackManager,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCAPI ::ResourceLocation const& getPathFromName(::std::string const& name) const;

    MCAPI ::TextureAtlasResourceCallbacks loadMetaFile(
        ::ResourcePackManager&                             resourcePackManager,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCAPI ::TextureAtlasResourceCallbacks recreateAtlas(
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ResourceLocation const&                                              metaFile,
        ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> pbrTextureDataManager,
        ::TextureAtlas::PaddingMode                                            paddingMode
    );
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
