#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/math/AlphaUsage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourceLocationPair;
namespace cg { class CompressedImageBuffer; }
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
namespace cg { class TextureSetDefinition; }
namespace cg { class TextureSetLayerDefinition; }
namespace mce { class ImageResourceLoader; }
// clang-format on

namespace TextureSetHelpers {

class TextureSetDefinitionLoader {
public:
    // TextureSetDefinitionLoader inner types declare
    // clang-format off
    class ResourceHelper;
    // clang-format on

    // TextureSetDefinitionLoader inner types define
    enum class LoadMode : int {
        ExplicitDefinitionOnly = 0,
        ImageDescription       = 1,
        AllLayers              = 2,
    };

    enum class ColorPipeline : int {
        Classic = 0,
        PBR     = 1,
    };

    enum class LoadImageLayerResult : int {
        OK           = 0,
        NoFile       = 1,
        NoLayer      = 2,
        ErrorLoading = 3,
    };

    class ResourceHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ImageResourceLoader>> mImageResourceLoader;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~ResourceHelper();
    
        virtual ::ResourceLocation getBackCompatResourceLocation(::ResourceLocation const&) const;
    
        virtual std::optional<uint> getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const&) const;
    
        virtual std::optional<uint> getPackStackIndexOfTextureSet(::ResourceLocation const&) const;
    
        virtual bool loadResourceOfExtensions(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;
    
        virtual bool loadResource(::ResourceLocation const&, std::string&) const;
    
        virtual bool loadImageResourceFromMemory(std::shared_ptr<cg::ImageResource>&, std::string const&, ::ResourceLocationPair const&, ::mce::AlphaUsage const, ::mce::ImageFormat const&) const;
    
        virtual bool loadCompressedImageFromMemory(::cg::CompressedImageBuffer&, std::string const&) const;
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
        MCNAPI ::ResourceLocation $getBackCompatResourceLocation(::ResourceLocation const&) const;

        MCNAPI std::optional<uint> $getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const&) const;

        MCNAPI std::optional<uint> $getPackStackIndexOfTextureSet(::ResourceLocation const&) const;

        MCNAPI bool
        $loadResourceOfExtensions(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;

        MCNAPI bool $loadResource(::ResourceLocation const&, std::string&) const;

        MCNAPI bool $loadImageResourceFromMemory(
            std::shared_ptr<cg::ImageResource>&,
            std::string const&,
            ::ResourceLocationPair const&,
            ::mce::AlphaUsage const,
            ::mce::ImageFormat const&
        ) const;

        MCNAPI bool $loadCompressedImageFromMemory(::cg::CompressedImageBuffer&, std::string const&) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TextureSetHelpers::TextureSetDefinitionLoader::LoadImageLayerResult _loadImageLayer(
        std::shared_ptr<cg::TextureSetDefinition>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const cg::TextureSetLayerDefinition>>,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const&
    );

    MCNAPI static bool _loadImageLayers(
        ::ResourceLocation const&,
        std::shared_ptr<cg::TextureSetDefinition>,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const&
    );

    MCNAPI static std::shared_ptr<cg::TextureSetDefinition> loadOrCreateTextureSetDefinition(
        ::ResourceLocation const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&,
        ::cg::ImageBuffer const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const&,
        bool
    );

    MCNAPI static std::shared_ptr<cg::TextureSetDefinition> loadOrCreateTextureSetDefinition(
        ::ResourceLocationPair const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&,
        ::cg::ImageBuffer const*,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const&,
        bool
    );

    MCNAPI static std::shared_ptr<cg::TextureSetDefinition>
    makeDefinitionFromImageBuffer(::ResourceLocationPair const&, ::cg::ImageBuffer const*, bool, bool);
    // NOLINTEND
};

} // namespace TextureSetHelpers
