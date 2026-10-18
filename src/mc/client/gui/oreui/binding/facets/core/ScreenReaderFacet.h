#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class ITTSEventManager;
class Option;
namespace OreUI { struct ScreenReaderOptions; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class ITTSEventManager;
class Option;
namespace OreUI { struct ScreenReaderOptions; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ScreenReaderFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ScreenReaderFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ITTSEventManager>> mTTSEventManager;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 8, ::Option*>                        mChatTextToSpeechOption;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mChatTextToSpeechOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mIsChatTextToSpeechEnabled;
    ::ll::TypedStorage<8, 8, ::Option*>                        mUITextToSpeechOption;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mUITextToSpeechOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mIsUITextToSpeechEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mIsIdle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenReaderFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenReaderFacet(std::weak_ptr<ITTSEventManager>, ::gsl::not_null<Option*>, ::gsl::not_null<Option*>);

    MCNAPI void _registerObservers();

    MCNAPI void clear();

    MCNAPI bool getIsChatTextToSpeechEnabled() const;

    MCNAPI bool getIsIdle() const;

    MCNAPI bool getIsUITextToSpeechEnabled() const;

    MCNAPI void read(std::string const&, ::ProfanityFilterContext, ::OreUI::ScreenReaderOptions const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[18]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<ITTSEventManager>, ::gsl::not_null<Option*>, ::gsl::not_null<Option*>);
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
class ScreenReaderFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ScreenReaderFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITTSEventManager>> mTTSEventManager;
    ::ll::TypedStorage<1, 1, bool>                                 mIsDirty;
    ::ll::TypedStorage<8, 8, ::Option*>                            mChatTextToSpeechOption;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mChatTextToSpeechOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                                 mIsChatTextToSpeechEnabled;
    ::ll::TypedStorage<8, 8, ::Option*>                            mUITextToSpeechOption;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mUITextToSpeechOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                                 mIsUITextToSpeechEnabled;
    ::ll::TypedStorage<1, 1, bool>                                 mIsIdle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenReaderFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenReaderFacet(
        ::std::weak_ptr<::ITTSEventManager> ttsEventManager,
        ::gsl::not_null<::Option*>          chatTextToSpeechOption,
        ::gsl::not_null<::Option*>          uiTextToSpeechOption
    );

    MCAPI void _registerObservers();

    MCAPI void clear();

    MCFOLD bool getIsChatTextToSpeechEnabled() const;

    MCAPI bool getIsIdle() const;

    MCFOLD bool getIsUITextToSpeechEnabled() const;

    MCAPI void read(
        ::std::string const&                textToRead,
        ::ProfanityFilterContext            profanityFilterContext,
        ::OreUI::ScreenReaderOptions const& options
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::weak_ptr<::ITTSEventManager> ttsEventManager,
        ::gsl::not_null<::Option*>          chatTextToSpeechOption,
        ::gsl::not_null<::Option*>          uiTextToSpeechOption
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ScreenReaderFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
