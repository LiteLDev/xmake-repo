#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelDataBindings.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/RealmsWorldEditorState.h"
#include "mc/client/realms/RealmsWorldEditorStateError.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"
#include "mc/world/level/storage/LevelDataWrapper.h"

// auto generated forward declare list
// clang-format off
class TrialManager;
namespace Realms { class RealmsWorldEditor; }
namespace Realms { class RealmsWorldPackEditor; }
// clang-format on

namespace OreUI {

class RealmWorldEditorQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmWorldEditorQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldEditor>>        mRealmsWorldEditor;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                              mTrialManager;
    ::ll::UntypedStorage<8, 24>                                                  mRealmsWorldPackEditor;
    ::ll::UntypedStorage<8, 1496>                                                mLevelDataWrapper;
    ::ll::TypedStorage<8, 288, ::OreUI::LevelDataBindings>                       mLevelDataBindings;
    ::ll::UntypedStorage<8, 1496>                                                mLevelDataWrapperSnapshot;
    ::ll::TypedStorage<8, 288, ::OreUI::LevelDataBindings>                       mLevelDataBindingsSnapshot;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 8, std::optional<Realms::RealmsWorldEditorStateError>> mRealmsWorldEditorStateError;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsWorldEditorStateErrorSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmAreTexturesRequiredSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsWorldPackEditorPackContentChangedSub;
    ::ll::UntypedStorage<8, 24>                                mUseRealmsWorldBackendSubVal;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldEditorQueriesFacet& operator=(RealmWorldEditorQueriesFacet const&);
    RealmWorldEditorQueriesFacet(RealmWorldEditorQueriesFacet const&);
    RealmWorldEditorQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmWorldEditorQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmWorldEditorQueriesFacet(
        std::shared_ptr<Realms::RealmsWorldEditor>,
        ::TrialManager const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackEditor>>
    );

    MCNAPI ::OreUI::LevelDataBindings& getCurrentWorldData();

    MCNAPI ::Realms::RealmsWorldEditorState getRealmWorldEditorState();

    MCNAPI std::optional<Realms::RealmsWorldEditorStateError> const& getRealmWorldEditorStateError();

    MCNAPI ::Realms::RealmsWorldEditorStateStatus getRealmWorldEditorStateStatus();

    MCNAPI bool getUseRealmsWorldBackend() const;

    MCNAPI bool realmWorldHasBeenModified();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Realms::RealmsWorldEditor>,
        ::TrialManager const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackEditor>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
