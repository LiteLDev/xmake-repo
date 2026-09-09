#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
class ITTSEventManager;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class ScreenReaderQuery : public ::OreUI::QueryBase<OreUI::ScreenReaderQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ITTSEventManager>> mTTSEventManager;
    ::ll::UntypedStorage<8, 104>                               mIsChatTextToSpeechEnabled;
    ::ll::UntypedStorage<8, 104>                               mIsUITextToSpeechEnabled;
    ::ll::UntypedStorage<8, 152>                               mIsIdle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenReaderQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenReaderQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
