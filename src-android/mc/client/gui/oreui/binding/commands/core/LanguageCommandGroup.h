#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

namespace OreUI {

class LanguageCommandGroup : public ::OreUI::CommandGroupBase<OreUI::LanguageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mTranslate;
    ::ll::UntypedStorage<8, 144> mFormatDate;
    ::ll::UntypedStorage<8, 144> mGetHowLongAgoAsString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LanguageCommandGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
