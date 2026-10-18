#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/Realms__RealmsWorldGeneralSettings.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/RealmsWorldEditorState.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/RealmsWorldEditorState.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/client/realms/RealmsWorldGeneralSettings.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsWorldEditorWorldDetailsQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsWorldEditorWorldDetailsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmsWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorState>            mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorStateStatus>      mStatus;
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmWorldChangeSubscription;
    ::ll::UntypedStorage<8, 24>                                           mWorldSeedSubVal;
    ::ll::UntypedStorage<8, 24>                                           mUseFlatWorldSubVal;
    ::ll::UntypedStorage<8, 48>                                           mFlatWorldPresetSubVal;
    ::ll::UntypedStorage<8, 24>                                           mGeneratorTypeSubVal;
    ::ll::UntypedStorage<8, 24>                                           mStartWithMapSubVal;
    ::ll::UntypedStorage<8, 24>                                           mStartWithBonusChestSubVal;
    ::ll::UntypedStorage<8, 24>                                           mSimulationDistanceSubVal;
    ::ll::TypedStorage<8, 24, std::string>                                mRealmName;
    ::ll::TypedStorage<8, 24, std::string>                                mRealmDescription;
    ::ll::TypedStorage<1, 1, bool>                                        mRealmAreTexturesRequired;
    ::ll::TypedStorage<1, 1, bool>                                        mRealmCheatsEnabled;
    ::ll::TypedStorage<4, 4, int>                                         mRealmDaylightCycle;
    ::ll::TypedStorage<8, 40, ::Realms::RealmsWorldGeneralSettings>       mRealmsWorldGeneralSettings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmsNameSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmsDescriptionSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmsAreTexturesRequiredSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmCheatsEnabledSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmsIsHardcoreSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmDaylightCycleSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmsWorldNameSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmsDifficultySubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmsGameTypeSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorWorldDetailsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorWorldDetailsQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldEditorWorldDetailsQueriesFacet(std::shared_ptr<Realms::RealmsWorldEditor>);

    MCNAPI void _refreshRealmWorldSubscriptions();

    MCNAPI bool areRealmCheatsEnabled() const;

    MCNAPI bool areRealmTexturesRequired() const;

    MCNAPI std::optional<std::string> const& getFlatWorldPreset() const;

    MCNAPI int getGeneratorType() const;

    MCNAPI int getRealmDaylightCycle() const;

    MCNAPI ::Realms::RealmsWorldGeneralSettings const& getRealmWorldGeneralSettings() const;

    MCNAPI std::string const& getRealmsDescription() const;

    MCNAPI std::string const& getRealmsName() const;

    MCNAPI int getSimulationDistance() const;

    MCNAPI bool getStartWithBonusChest() const;

    MCNAPI bool getStartWithMap() const;

    MCNAPI ::Realms::RealmsWorldEditorState getState() const;

    MCNAPI ::Realms::RealmsWorldEditorStateStatus getStatus() const;

    MCNAPI bool getUseFlatWorld() const;

    MCNAPI long const getWorldSeed() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[45]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsWorldEditor>);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsWorldEditorWorldDetailsQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldEditorWorldDetailsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>>    mRealmsWorldEditor;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorState>                   mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorStateStatus>             mStatus;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmWorldChangeSubscription;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int64>>                          mWorldSeedSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mUseFlatWorldSubVal;
    ::ll::TypedStorage<8, 56, ::SubscribedValue<::std::optional<::std::string>>> mFlatWorldPresetSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                            mGeneratorTypeSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mStartWithMapSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mStartWithBonusChestSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                            mSimulationDistanceSubVal;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mRealmName;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mRealmDescription;
    ::ll::TypedStorage<1, 1, bool>                                               mRealmAreTexturesRequired;
    ::ll::TypedStorage<1, 1, bool>                                               mRealmCheatsEnabled;
    ::ll::TypedStorage<4, 4, int>                                                mRealmDaylightCycle;
    ::ll::TypedStorage<8, 48, ::Realms::RealmsWorldGeneralSettings>              mRealmsWorldGeneralSettings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsNameSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsDescriptionSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsAreTexturesRequiredSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmCheatsEnabledSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsIsHardcoreSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmDaylightCycleSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsWorldNameSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsDifficultySubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsGameTypeSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorWorldDetailsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorWorldDetailsQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWorldEditorWorldDetailsQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor> worldEditor
    );

    MCAPI void _refreshRealmWorldSubscriptions();

    MCAPI bool areRealmCheatsEnabled() const;

    MCAPI bool areRealmTexturesRequired() const;

    MCFOLD ::std::optional<::std::string> const& getFlatWorldPreset() const;

    MCFOLD int getGeneratorType() const;

    MCAPI int getRealmDaylightCycle() const;

    MCAPI ::Realms::RealmsWorldGeneralSettings const& getRealmWorldGeneralSettings() const;

    MCAPI ::std::string const& getRealmsDescription() const;

    MCAPI ::std::string const& getRealmsName() const;

    MCAPI int getSimulationDistance() const;

    MCFOLD bool getStartWithBonusChest() const;

    MCFOLD bool getStartWithMap() const;

    MCFOLD ::Realms::RealmsWorldEditorState getState() const;

    MCFOLD ::Realms::RealmsWorldEditorStateStatus getStatus() const;

    MCFOLD bool getUseFlatWorld() const;

    MCFOLD int64 const getWorldSeed() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldEditor> worldEditor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsWorldEditorWorldDetailsQueriesFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
