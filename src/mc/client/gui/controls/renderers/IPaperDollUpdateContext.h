#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class AnimationComponent;
class SerializedSkinRef;
class Skin;
struct PaperDollPlayerSkinInfo;
struct SkinImages;
namespace mce { class UUID; }
// clang-format on

class IPaperDollUpdateContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollUpdateContext();

    virtual ::brstd::move_only_function<void(std::string_view) const> getRemoveSkinFunction() = 0;

    virtual ::Skin const* getSelectedSkin() = 0;

    virtual ::Skin const* getSkinFromPack(ulong, int) = 0;

    virtual bool isValidSelectedSkin(::mce::UUID const&, int) const = 0;

    virtual void createOrUpdateSkin(::AnimationComponent&, ::SerializedSkinRef const&, ::SkinImages const&) = 0;

    virtual std::optional<PaperDollPlayerSkinInfo> getSkinFromPlayer(::mce::UUID const&) = 0;

    virtual ::SkinImages getSkinImages(::Skin const&, bool) = 0;

    virtual bool isAnySkinOfNameInitialized(std::string_view) const = 0;

    virtual void markLocalPlayerAsDirty() = 0;

    virtual bool shouldAllSkinsRotate() const = 0;

    virtual std::shared_ptr<ActorAnimationGroup> getActorAnimationGroup() = 0;

    virtual void playUI(std::string const&, float, float) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class AnimationComponent;
class SerializedSkinRef;
class Skin;
struct PaperDollPlayerSkinInfo;
struct SkinImages;
namespace mce { class UUID; }
// clang-format on

class IPaperDollUpdateContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollUpdateContext() = default;

    virtual ::brstd::move_only_function<void(::std::string_view) const> getRemoveSkinFunction() = 0;

    virtual ::Skin const* getSelectedSkin() = 0;

    virtual ::Skin const* getSkinFromPack(uint64 packHash, int packIndex) = 0;

    virtual bool isValidSelectedSkin(::mce::UUID const& packId, int skinIndex) const = 0;

    virtual void createOrUpdateSkin(
        ::AnimationComponent&      animationComponent,
        ::SerializedSkinRef const& skin,
        ::SkinImages const&        images
    ) = 0;

    virtual ::std::optional<::PaperDollPlayerSkinInfo> getSkinFromPlayer(::mce::UUID const& id) = 0;

    virtual ::SkinImages getSkinImages(::Skin const& skin, bool isPlayer) = 0;

    virtual bool isAnySkinOfNameInitialized(::std::string_view skin) const = 0;

    virtual void markLocalPlayerAsDirty() = 0;

    virtual bool shouldAllSkinsRotate() const = 0;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() = 0;

    virtual void playUI(::std::string const& name, float volume, float pitch) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPaperDollUpdateContext {};
#endif // @header-generator platform
#endif // @header-generator platform
