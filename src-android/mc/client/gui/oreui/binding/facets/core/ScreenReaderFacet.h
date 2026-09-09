#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
