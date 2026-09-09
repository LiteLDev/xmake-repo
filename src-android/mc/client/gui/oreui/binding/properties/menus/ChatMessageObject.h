#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/RedactableStringProperty.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/social/ChatMessageType.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
namespace Bedrock::Safety { class RedactableString; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ChatMessageObject : public ::OreUI::PropertyObject<OreUI::ChatMessageObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>                                  mId;
    ::ll::UntypedStorage<8, 152>                                  mOrder;
    ::ll::TypedStorage<8, 264, ::OreUI::RedactableStringProperty> mMessage;
    ::ll::UntypedStorage<8, 168>                                  mSenderXuid;
    ::ll::UntypedStorage<8, 152>                                  mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatMessageObject& operator=(ChatMessageObject const&);
    ChatMessageObject(ChatMessageObject const&);
    ChatMessageObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatMessageObject();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChatMessageObject(::OreUI::ChatMessageObject&&);

    MCNAPI ChatMessageObject(
        ::OreUI::Detail::IPropertyObject*,
        std::string,
        uint,
        ::Bedrock::Safety::RedactableString,
        std::string,
        ::Social::ChatMessageType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ChatMessageObject&&);

    MCNAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject*,
        std::string,
        uint,
        ::Bedrock::Safety::RedactableString,
        std::string,
        ::Social::ChatMessageType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>
    );
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
