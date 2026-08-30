#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
