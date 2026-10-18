#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/TextureTint.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IPersonaImageProvider;
class IPersonaPieceProvider;
class Pack;
class ResourceLoadManager;
class ResourcePackManager;
class TaskGroup;
class TextureAtlas;
struct PersonaCharacter;
struct PersonaTextureResources;
struct TextureHotReloader;
namespace Json { class Value; }
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
namespace persona { struct TextureTint; }
namespace persona { struct TextureTintCollection; }
// clang-format on

class PersonaTextureBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IPersonaImageProvider&> mImageProvider;
    ::ll::UntypedStorage<8, 24>                        mAdvancedGraphicsOptions;
    ::ll::UntypedStorage<8, 24>                        mResourceLoadManager;
    ::ll::UntypedStorage<8, 24>                        mResourcePackManager;
    ::ll::UntypedStorage<8, 24>                        mTextureHotReloader;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaTextureBuilder& operator=(PersonaTextureBuilder const&);
    PersonaTextureBuilder(PersonaTextureBuilder const&);
    PersonaTextureBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaTextureBuilder(
        ::IPersonaImageProvider&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourcePackManager>>,
        ::Bedrock::NonOwnerPointer<TextureHotReloader>
    );

    MCNAPI ~PersonaTextureBuilder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _addClothingMap(::PersonaTextureResources&, std::shared_ptr<const Pack>, std::string const&, std::string);

    MCNAPI static void
    _addPieceTextureToMap(::PersonaTextureResources&, std::string const&, ::persona::TextureTint, bool);

    MCNAPI static void
    _addTextureToConfiguration(::mce::TextureGroup&, ::persona::TextureTint const&, ::Json::Value&, bool);

    MCNAPI static void _ensureCPUImageDataIsLoaded(
        ::mce::TextureGroup&,
        ::persona::TextureTint const&,
        ::persona::TextureTint::PathType,
        bool
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& BASE_FACE_TEXTURE_ID();

    MCNAPI static std::string const& BASE_TEXTURE_ID();

    MCNAPI static std::string const& PERSONA_ANIMATED_ATLAS_TEST_PATH();

    MCNAPI static std::string const& PERSONA_ATLAS_NAME();

    MCNAPI static std::string const& PERSONA_ATLAS_TEST_PATH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IPersonaImageProvider&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourcePackManager>>,
        ::Bedrock::NonOwnerPointer<TextureHotReloader>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
