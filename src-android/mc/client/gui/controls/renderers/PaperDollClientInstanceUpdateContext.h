#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IPaperDollUpdateContext.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class AnimationComponent;
class IClientInstance;
class SerializedSkinRef;
class Skin;
struct PaperDollPlayerSkinInfo;
struct SkinImages;
namespace mce { class UUID; }
// clang-format on

class PaperDollClientInstanceUpdateContext : public ::IPaperDollUpdateContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollClientInstanceUpdateContext& operator=(PaperDollClientInstanceUpdateContext const&);
    PaperDollClientInstanceUpdateContext(PaperDollClientInstanceUpdateContext const&);
    PaperDollClientInstanceUpdateContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PaperDollClientInstanceUpdateContext();

    virtual ::brstd::move_only_function<void(std::string_view) const> getRemoveSkinFunction();

    virtual ::Skin const* getSelectedSkin();

    virtual ::Skin const* getSkinFromPack(ulong, int);

    virtual bool isValidSelectedSkin(::mce::UUID const&, int) const;

    virtual void createOrUpdateSkin(::AnimationComponent&, ::SerializedSkinRef const&, ::SkinImages const&);

    virtual std::optional<PaperDollPlayerSkinInfo> getSkinFromPlayer(::mce::UUID const&);

    virtual ::SkinImages getSkinImages(::Skin const&, bool);

    virtual bool isAnySkinOfNameInitialized(std::string_view) const;

    virtual void markLocalPlayerAsDirty();

    virtual bool shouldAllSkinsRotate() const;

    virtual std::shared_ptr<ActorAnimationGroup> getActorAnimationGroup();

    virtual void playUI(std::string const&, float, float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::brstd::move_only_function<void(std::string_view) const> $getRemoveSkinFunction();

    MCNAPI ::Skin const* $getSelectedSkin();

    MCNAPI ::Skin const* $getSkinFromPack(ulong, int);

    MCNAPI bool $isValidSelectedSkin(::mce::UUID const&, int) const;

    MCNAPI void $createOrUpdateSkin(::AnimationComponent&, ::SerializedSkinRef const&, ::SkinImages const&);

    MCNAPI std::optional<PaperDollPlayerSkinInfo> $getSkinFromPlayer(::mce::UUID const&);

    MCNAPI ::SkinImages $getSkinImages(::Skin const&, bool);

    MCNAPI bool $isAnySkinOfNameInitialized(std::string_view) const;

    MCNAPI void $markLocalPlayerAsDirty();

    MCNAPI bool $shouldAllSkinsRotate() const;

    MCNAPI std::shared_ptr<ActorAnimationGroup> $getActorAnimationGroup();

    MCNAPI void $playUI(std::string const&, float, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
