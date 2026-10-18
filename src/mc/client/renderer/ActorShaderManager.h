#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class IOptionRegistry;
class LightTexture;
class ResourceLocation;
class ScreenContext;
class Vec2;
class Vec4;
struct Brightness;
struct BrightnessPair;
struct GlintScrollScale;
struct TextureUVCoordinateSet;
namespace LightPropagation { class LightVolumeManager; }
namespace mce { class ActorConstants; }
namespace mce { class Color; }
namespace mce { class RenderContext; }
// clang-format on

class ActorShaderManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mEntityMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mTransparentEntityMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mStaticMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorShaderManager();

    virtual ::mce::Color _getOverlayColor(::Actor&, float) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorShaderManager();

    MCNAPI ::mce::MaterialPtr& getEntityMaterial();

    MCNAPI ::mce::MaterialPtr& getStaticMaterial();

    MCNAPI ::mce::MaterialPtr& getTransparentEntityMaterial();

    MCNAPI void setEntityConstantsNonStatic(
        ::mce::ActorConstants&,
        ::mce::RenderContext&,
        ::mce::Color const&,
        ::Vec2 const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec2 const&,
        ::Vec4 const&,
        float,
        float,
        float,
        float
    ) const;

    MCNAPI void setupFoilShaderParameters(
        ::ScreenContext&,
        ::BaseActorRenderContext&,
        ::Actor&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec2 const&,
        float,
        ::Brightness,
        std::optional<glm::vec<3, float, (glm::qualifier)0>> const&,
        bool
    ) const;

    MCNAPI void setupShaderParameters(::ScreenContext&, ::BaseActorRenderContext&, ::Actor&, float) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setEntityConstants(
        ::mce::ActorConstants&,
        ::mce::RenderContext&,
        ::mce::Color const&,
        ::Vec2 const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec2 const&,
        ::Vec4 const&,
        float,
        float,
        float,
        float
    );

    MCNAPI static void setupFoilShaderParameters(::ScreenContext&, ::TextureUVCoordinateSet const&);

    MCNAPI static void setupFoilShaderParameters(
        ::ScreenContext&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec2 const&
    );

    MCNAPI static void setupShaderParameters(::ScreenContext&, float, ::mce::Color const&, bool);

    MCNAPI static void
    setupShaderParameters(::ScreenContext&, ::mce::Color const&, ::mce::Color const&, ::mce::Color const&);

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::BaseActorRenderContext&,
        ::Actor&,
        ::mce::Color const&,
        float,
        ::Vec4 const&
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::BaseActorRenderContext&,
        ::Actor&,
        ::mce::Color const&,
        float,
        ::Brightness,
        std::optional<glm::vec<3, float, (glm::qualifier)0>> const&
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::BaseActorRenderContext&,
        ::Actor&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        float,
        ::Brightness,
        std::optional<glm::vec<3, float, (glm::qualifier)0>> const&
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::BlockSource&,
        ::BrightnessPair const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        float,
        bool,
        ::LightTexture&,
        ::Vec2 const&,
        ::Vec4 const&
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::BlockSource&,
        ::BlockPos const&,
        float,
        bool,
        ::LightTexture&,
        std::weak_ptr<LightPropagation::LightVolumeManager> const&,
        ::Vec2 const&,
        ::Vec4 const&
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::BaseActorRenderContext&,
        ::Actor&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec4 const&,
        float,
        float,
        bool
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        float,
        float,
        float,
        float,
        ::Vec2 const&,
        ::Vec4 const&,
        float
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::BlockSource&,
        ::BlockPos const&,
        ::mce::Color const&,
        ::mce::Color const&,
        float,
        ::LightTexture&,
        std::weak_ptr<LightPropagation::LightVolumeManager> const&,
        ::Vec2 const&,
        bool,
        ::Brightness,
        std::optional<glm::vec<3, float, (glm::qualifier)0>> const&
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&,
        ::BaseActorRenderContext&,
        ::Actor&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        float,
        float,
        float,
        float,
        ::Vec2 const&,
        ::Vec4 const&,
        float,
        ::Brightness,
        std::optional<glm::vec<3, float, (glm::qualifier)0>> const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& BASE_GLINT_SCROLL_SCALE_L1();

    MCNAPI static float const& BASE_GLINT_SCROLL_SCALE_L2();

    MCNAPI static ::ResourceLocation const& GLINT_ACTOR_TEXTURE_LOCATION();

    MCNAPI static ::ResourceLocation const& GLINT_ITEM_TEXTURE_LOCATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $_getOverlayColor(::Actor&, float) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class LightTexture;
class ResourceLocation;
class ScreenContext;
class Vec2;
class Vec4;
struct Brightness;
struct BrightnessPair;
struct TextureUVCoordinateSet;
namespace LightPropagation { class LightVolumeManager; }
namespace mce { class ActorConstants; }
namespace mce { class Color; }
namespace mce { class RenderContext; }
// clang-format on

class ActorShaderManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mEntityMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mTransparentEntityMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mStaticMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorShaderManager();

    virtual ::mce::Color _getOverlayColor(::Actor& actor, float a) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::mce::MaterialPtr& getEntityMaterial();

    MCAPI ::mce::MaterialPtr& getStaticMaterial();

    MCAPI ::mce::MaterialPtr& getTransparentEntityMaterial();

    MCAPI void setupFoilShaderParameters(
        ::ScreenContext&                    screenContext,
        ::BaseActorRenderContext&           entityContext,
        ::Actor&                            entity,
        ::mce::Color const&                 changeColor,
        ::mce::Color const&                 changeColor2,
        ::Vec2 const&                       uvScale,
        float                               a,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor,
        bool                                allowOverlay
    ) const;

    MCAPI void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        float                     a
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setEntityConstants(
        ::mce::ActorConstants& entityConstants,
        ::mce::RenderContext&  renderContext,
        ::mce::Color const&    tileLightColor,
        ::Vec2 const&          tileLightColorUV,
        ::glm::vec4 const&     blockLightColor,
        ::mce::Color const&    overlay,
        ::mce::Color const&    changeColor,
        ::mce::Color const&    changeColor2,
        ::mce::Color const&    glintColor,
        ::Vec2 const&          glintUVScale,
        ::Vec4 const&          uvAnim,
        float                  uvOffset1,
        float                  uvOffset2,
        float                  uvRot1,
        float                  uvRot2
    );

    MCAPI static void setupFoilShaderParameters(::ScreenContext& screenContext, ::TextureUVCoordinateSet const& icon);

    MCAPI static void setupFoilShaderParameters(
        ::ScreenContext&    screenContext,
        ::mce::Color const& overlay,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2,
        ::Vec2 const&       uvScale
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        ::mce::Color const& overlay,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        ::mce::Color const&       overlay,
        float,
        ::Vec4 const& uvAnim
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        ::mce::Color const&       overlay,
        float,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  entity,
        ::mce::Color const&       overlay,
        ::mce::Color const&       tintColor,
        ::mce::Color const&       tintColor2,
        float,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&        screenContext,
        ::BlockSource&          source,
        ::BrightnessPair const& lightColorUV,
        ::glm::vec4 const&      blockLightColor,
        float,
        bool            ignoreLighting,
        ::LightTexture& lightTexture,
        ::Vec2 const&   uvScale,
        ::Vec4 const&   uvAnim
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&                                               screenContext,
        ::BlockSource&                                                 source,
        ::BlockPos const&                                              pos,
        float                                                          a,
        bool                                                           ignoreLighting,
        ::LightTexture&                                                lightTexture,
        ::std::weak_ptr<::LightPropagation::LightVolumeManager> const& lightVolumeManager,
        ::Vec2 const&                                                  uvScale,
        ::Vec4 const&                                                  uvAnim
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  entity,
        ::mce::Color const&       overlay,
        ::mce::Color const&       changeColor,
        ::mce::Color const&       changeColor2,
        ::Vec4 const&             uvAnim,
        float                     br,
        float,
        bool isEnchanted
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        ::mce::Color const& overlay,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2,
        ::mce::Color const& glintColor,
        float               uvOffset1,
        float               uvOffset2,
        float               uvRot1,
        float               uvRot2,
        ::Vec2 const&       glintUVScale,
        ::Vec4 const&       uvAnim,
        float
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        ::BlockSource&      source,
        ::BlockPos const&   pos,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2,
        float,
        ::LightTexture&                                                lightTexture,
        ::std::weak_ptr<::LightPropagation::LightVolumeManager> const& lightVolumeManager,
        ::Vec2 const&                                                  uvScale,
        bool                                                           ignoreLighting,
        ::Brightness                                                   lightEmission,
        ::std::optional<::glm::vec3> const&                            lightEmissionColor
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&                    screenContext,
        ::BaseActorRenderContext&           entityContext,
        ::Actor&                            entity,
        ::mce::Color const&                 overlay,
        ::mce::Color const&                 changeColor,
        ::mce::Color const&                 changeColor2,
        ::mce::Color const&                 glintColor,
        float                               uvOffset1,
        float                               uvOffset2,
        float                               uvRot1,
        float                               uvRot2,
        ::Vec2 const&                       glintUVScale,
        ::Vec4 const&                       uvAnim,
        float                               br,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ResourceLocation const& GLINT_ACTOR_TEXTURE_LOCATION();

    MCAPI static ::ResourceLocation const& GLINT_ITEM_TEXTURE_LOCATION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $_getOverlayColor(::Actor& actor, float a) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ActorShaderManager {};
#endif // @header-generator platform
#endif // @header-generator platform
